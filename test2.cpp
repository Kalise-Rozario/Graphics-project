#include <windows.h>
#include <GL/glut.h>
#define PI          3.141516
#include<math.h>

void initGL()
{

	glClearColor(0.0f, 0.6f, 0.9f, 0.0f);
}

void circle(float p1, float q1, float r1)
{
    int i;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);

    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
}

void cloud(float xc, float yc)
{
    glColor3f(1, 1, 1);
    circle(xc, yc, 0.15f);
    circle(xc-0.13, yc-0.02, 0.12f);
    circle(xc+0.14, yc+0.02, 0.10f);
}

void background()
{












    glBegin(GL_QUADS);///Background 1
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.4f, -0.27f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.27f);
	glEnd();

    glBegin(GL_QUADS);///Gray quads building gate
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.4f, -0.26f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.26f);
	glEnd();


    glBegin(GL_QUADS);///Black quads building gate first
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, -0.215f);
	glVertex2f(-0.4f, -0.26f);
	glVertex2f(0.4f, -0.26f);
	glVertex2f(0.4f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);///read quads building down left Side
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-1.0f, -0.32f);
	glVertex2f(-1.0f, -0.35f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(-0.5f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);///red quads building  left side up
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, -0.215f);
	glVertex2f(-1.0f, -0.32f);
	glVertex2f(-0.5f, -0.32f);
	glVertex2f(-0.45f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);///red quads building  left side side
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.45f, -0.215f);
	glVertex2f(-0.5f, -0.32f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(-0.4f, -0.26f);
	glEnd();




	 glBegin(GL_QUADS);///read quads building down right Side
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(1.0f, -0.32f);
	glVertex2f(1.0f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.5f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);///red quads building  right side up
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(1.0f, -0.215f);
	glVertex2f(1.0f, -0.32f);
	glVertex2f(0.5f, -0.32f);
	glVertex2f(0.45f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);///red quads building  right side side
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.45f, -0.215f);
	glVertex2f(0.5f, -0.32f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.26f);
	glEnd();


    ////////////////

    glBegin(GL_QUADS);///Black quads building gate up second
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.35f, -0.17f);
	glVertex2f(-0.35f, -0.215f);
	glVertex2f(0.35f, -0.215f);
	glVertex2f(0.35f, -0.17f);
	glEnd();
    glBegin(GL_QUADS);///white quads left side
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-1.0f, 0.23f);
	glVertex2f(-1.0f, -0.17f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(-0.1f, 0.23f);
	glEnd();

    glBegin(GL_QUADS);///Left side Yellow Column
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.34f, 0.25f);
	glVertex2f(-0.34f, -0.17f);
	glVertex2f(-0.32f, -0.17f);
	glVertex2f(-0.32f, 0.25f);
	glEnd();

	    glBegin(GL_QUADS);///Left side Yellow quads
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.98f, 0.29f);
	glVertex2f(-0.98f, -0.215f);
	glVertex2f(-0.5f, -0.215f);
	glVertex2f(-0.5f, 0.29f);
	glEnd();





		    glBegin(GL_QUADS);///Left side Yellow quads big
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.98f, 0.45f);
	glVertex2f(-0.98f, -0.215f);
	glVertex2f(-0.7f, -0.215f);
	glVertex2f(-0.7f, 0.45f);
	glEnd();



			    glBegin(GL_QUADS);///Left side black quads top
	glColor3f(0.4f, 0.4f, 0.4f);

	glVertex2f(-0.99f, 0.49f);
	glVertex2f(-0.99f, 0.45f);
	glVertex2f(-0.7f, 0.45f);
	glVertex2f(-0.7f, 0.49f);
	glEnd();

				    glBegin(GL_QUADS);///Left side black quads middle
	glColor3f(0.4f, 0.4f, 0.4f);

	glVertex2f(-0.99f, 0.15f);
	glVertex2f(-0.99f, 0.11f);
	glVertex2f(-0.7f, 0.11f);
	glVertex2f(-0.7f, 0.15f);
	glEnd();
	////
		    glBegin(GL_QUADS);///Left side sky blue quads
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(-0.96f, 0.41f);
	glVertex2f(-0.96f, 0.32f);
	glVertex2f(-0.72f, 0.32f);
	glVertex2f(-0.72f, 0.41f);
	glEnd();


			    glBegin(GL_QUADS);///Left side sky blue quads
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(-0.96f, 0.28f);
	glVertex2f(-0.96f, 0.18f);
	glVertex2f(-0.72f, 0.18f);
	glVertex2f(-0.72f, 0.28f);
	glEnd();

    glBegin(GL_QUADS);///black big line
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.49f);
    glVertex2f(-0.7f, -0.215f);
    glVertex2f(-0.696f, -0.215f);
    glVertex2f(-0.696f, 0.49f);
    glEnd();

        glBegin(GL_QUADS);///black big attuch up gray quard
	glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-0.696f, 0.32f);
    glVertex2f(-0.696f, 0.29f);
    glVertex2f(-0.47f, 0.29f);
    glVertex2f(-0.47f, 0.32f);
    glEnd();

            glBegin(GL_QUADS);///black big attuch up black quard
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.696f, 0.35f);
    glVertex2f(-0.696f, 0.32f);
    glVertex2f(-0.45f, 0.32f);
    glVertex2f(-0.45f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);///down left side door blue
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(-0.87f, -0.03f);
	glVertex2f(-0.87f, -0.215f);
	glVertex2f(-0.78f, -0.215f);
	glVertex2f(-0.78f, -0.03f);
	glEnd();

		    glBegin(GL_QUADS);///black door line left
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.82f, -0.03f);
    glVertex2f(-0.82f, -0.215f);
    glVertex2f(-0.826f, -0.215f);
    glVertex2f(-0.826f, -0.03f);
    glEnd();

    glBegin(GL_QUADS);///blue down right side window
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.7f, -0.15f);
	glVertex2f(-0.7f, 0.05f);
	glEnd();

	 glBegin(GL_QUADS);///blue down right side window line
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.75f, -0.05f);
	glVertex2f(-0.75f, -0.06f);
	glVertex2f(-0.7f, -0.06f);
	glVertex2f(-0.7f, -0.05f);
	glEnd();

    glBegin(GL_QUADS);///blue down left side window
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(-0.96f, 0.05f);
	glVertex2f(-0.96f, -0.15f);
	glVertex2f(-0.9f, -0.15f);
	glVertex2f(-0.9f, 0.05f);
	glEnd();///

	    glBegin(GL_QUADS);///blue down left side window line
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.96f, -0.05f);
	glVertex2f(-0.96f, -0.06f);
	glVertex2f(-0.9f, -0.06f);
	glVertex2f(-0.9f, -0.05f);
	glEnd();

    glBegin(GL_QUADS);///white right close tree right
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, -0.17f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.35f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);///white right close tree right
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.16f);
	glVertex2f(0.1f, 0.14f);
	glVertex2f(0.35f, 0.14f);
	glVertex2f(0.35f, 0.16f);
	glEnd();

    glBegin(GL_QUADS);///white right close tree
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.35f, 0.16f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.36f, -0.17f);
	glVertex2f(0.36f, 0.16f);
	glEnd();

	glBegin(GL_QUADS);///gray right close tree
	glColor3f(0.6f, 0.6f, 0.6f);

	glVertex2f(0.35f, 0.12f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.45f, -0.17f);
	glVertex2f(0.45f, 0.12f);
	glEnd();

		glBegin(GL_QUADS);///gray right close tree
	glColor3f(0.6f, 1.0f, 1.0f);

	glVertex2f(0.37f, 0.1f);
	glVertex2f(0.37f, -0.06f);
	glVertex2f(0.41f, -0.06f);
	glVertex2f(0.41f, 0.1f);
	glEnd();

    glBegin(GL_QUADS);///orange right house teen
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(0.5f, 0.29f);
	glVertex2f(0.4f, 0.14f);
	glVertex2f(0.8f, 0.14f);
	glVertex2f(0.8f, 0.29f);
	glEnd();
////////////////////////////////
    glBegin(GL_QUADS);///read right  house body
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.45f, 0.14f);
	glVertex2f(0.45f, -0.17f);
	glVertex2f(0.8f, -0.17f);
	glVertex2f(0.8f, 0.14f);
	glEnd();

		glBegin(GL_QUADS);///sky blue right  house up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.47f, 0.11f);
	glVertex2f(0.47f, 0.03f);
	glVertex2f(0.51f, 0.03f);
	glVertex2f(0.51f, 0.11f);
	glEnd();

			glBegin(GL_QUADS);///sky blue right  house up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.54f, 0.11f);
	glVertex2f(0.54f, 0.03f);
	glVertex2f(0.58f, 0.03f);
	glVertex2f(0.58f, 0.11f);
	glEnd();

				glBegin(GL_QUADS);///sky blue right  house up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.61f, 0.11f);
	glVertex2f(0.61f, 0.03f);
	glVertex2f(0.65f, 0.03f);
	glVertex2f(0.65f, 0.11f);
	glEnd();

					glBegin(GL_QUADS);///sky blue right  house up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.68f, 0.11f);
	glVertex2f(0.68f, 0.03f);
	glVertex2f(0.72f, 0.03f);
	glVertex2f(0.72f, 0.11f);
	glEnd();

    glBegin(GL_QUADS);///sky blue right  house up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.75f, 0.11f);
	glVertex2f(0.75f, 0.03f);
	glVertex2f(0.79f, 0.03f);
	glVertex2f(0.79f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);///sky blue right  house down window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.47f, -0.06f);
	glVertex2f(0.47f, -0.14f);
	glVertex2f(0.51f, -0.14f);
	glVertex2f(0.51f, -0.06f);
	glEnd();

			glBegin(GL_QUADS);///sky blue right  house down window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.54f, -0.06f);
	glVertex2f(0.54f, -0.14f);
	glVertex2f(0.58f, -0.14f);
	glVertex2f(0.58f,-0.06f);
	glEnd();

				glBegin(GL_QUADS);///sky blue right  house down window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.61f, -0.06f);
	glVertex2f(0.61f, -0.14f);
	glVertex2f(0.65f, -0.14f);
	glVertex2f(0.65f, -0.06f);
	glEnd();

					glBegin(GL_QUADS);///sky blue right  house down window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.68f, -0.06f);
	glVertex2f(0.68f, -0.14f);
	glVertex2f(0.72f, -0.14f);
	glVertex2f(0.72f, -0.06f);
	glEnd();

					glBegin(GL_QUADS);///sky blue right  house down window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.75f, -0.06f);
	glVertex2f(0.75f, -0.14f);
	glVertex2f(0.79f, -0.14f);
	glVertex2f(0.79f, -0.06f);
	glEnd();


	    glBegin(GL_QUADS);///yellow line right  house body
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.45f, 0.00f);
	glVertex2f(0.45f, -0.03f);
	glVertex2f(0.8f, -0.03f);
	glVertex2f(0.8f, 0.00f);
	glEnd();


		    glBegin(GL_QUADS);///yellow down right house left down lift
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.775f, -0.02f);
	glVertex2f(0.775f, -0.215f);
	glVertex2f(0.79f, -0.215f);
	glVertex2f(0.79f, -0.02f);
	glEnd();




    glBegin(GL_QUADS);///read right house lift
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.8f, 0.24f);
	glVertex2f(0.8f, -0.17f);
	glVertex2f(0.93f, -0.17f);
	glVertex2f(0.93f, 0.24f);
	glEnd();

	    glBegin(GL_QUADS);///yellow right house lift up
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.8f, 0.02f);
	glVertex2f(0.8f, 0.00f);
	glVertex2f(0.93f, 0.00f);
	glVertex2f(0.93f, 0.02f);
	glEnd();

				    glBegin(GL_QUADS);///sky blue window right  house up lift
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, 0.12f);
	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.91f, 0.04f);
	glVertex2f(0.91f, 0.12f);
	glEnd();

    glBegin(GL_QUADS);///white window up + down  house down lift line
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, 0.086f);
	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.91f, 0.08f);
	glVertex2f(0.91f, 0.086f);
	glEnd();



    glBegin(GL_QUADS);///white window up + down  house down lift line
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.8633f, 0.12f);
	glVertex2f(0.8633f, 0.04f);
	glVertex2f(0.8666f, 0.04f);
	glVertex2f(0.8666f, 0.12f);
	glEnd();


	glBegin(GL_TRIANGLES);///read right house lift triangel
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.8f, 0.24f);
	glVertex2f(0.93f, 0.24f);
	glVertex2f(0.865f,  0.34f);
	glEnd();

    glBegin(GL_QUADS);///white right  house last part
	glColor3f(0.9f, 0.9f, 0.9f);

	glVertex2f(0.93f, 0.13f);
	glVertex2f(0.93f, -0.17f);
	glVertex2f(1.0f, -0.17f);
	glVertex2f(1.0f, 0.13f);
	glEnd();

	glBegin(GL_QUADS);///sky blue right  house last part
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.93f, 0.11f);
	glVertex2f(0.93f, 0.03f);
	glVertex2f(0.955f, 0.03f);
	glVertex2f(0.955f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);///yellow right house  down lift
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.94f, -0.02f);
	glVertex2f(0.94f, -0.215f);
	glVertex2f(0.955f, -0.215f);
	glVertex2f(0.955f, -0.02f);
	glEnd();

    glBegin(GL_QUADS);///white door down  house down lift
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, -0.04f);
	glVertex2f(0.82f, -0.17f);
	glVertex2f(0.91f, -0.17f);
	glVertex2f(0.91f, -0.04f);
	glEnd();
	///////////////
    glBegin(GL_QUADS);///gray door down  house get lift
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.82f, -0.17f);
	glVertex2f(0.79f, -0.20f);
	glVertex2f(0.94f, -0.20f);
	glVertex2f(0.91f, -0.17f);
	glEnd();

	glBegin(GL_QUADS);///white door down  house down lift line
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.8633f, -0.04f);
	glVertex2f(0.8633f, -0.17f);
	glVertex2f(0.8666f, -0.17f);
	glVertex2f(0.8666f, -0.04f);
	glEnd();


	glBegin(GL_QUADS);///black middle right house up lift
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.775f, 0.00f);
	glVertex2f(0.775f, -0.02f);
	glVertex2f(0.955f, -0.02f);
	glVertex2f(0.955f, 0.00f);
	glEnd();



    glBegin(GL_QUADS);///black down right house down lift
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.775f, -0.20f);
	glVertex2f(0.775f, -0.215f);
	glVertex2f(0.955f, -0.215f);
	glVertex2f(0.955f, -0.20f);
	glEnd();
	///////////////////////////////////////////////
	//////////////////////////////////////////////


	glBegin(GL_QUADS);///Right side Yellow Column
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.34f, 0.25f);
	glVertex2f(0.34f, -0.17f);
	glVertex2f(0.32f, -0.17f);
	glVertex2f(0.32f, 0.25f);
	glEnd();


    glBegin(GL_QUADS);///red quads up
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.29f);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(0.4f, 0.25f);
	glVertex2f(0.4f, 0.29f);
	glEnd();

    glBegin(GL_QUADS);///Left side down orange window
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.3f, 0.01f);
	glVertex2f(-0.3f, -0.17f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(-0.1f, 0.01f);
	glEnd();

    glBegin(GL_QUADS);///Left side down white border
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.29f, 0.0f);
	glVertex2f(-0.29f, -0.16f);
	glVertex2f(-0.11f, -0.16f);
	glVertex2f(-0.11f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);///Left side down white window white
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.28f, -0.01f);
	glVertex2f(-0.28f, -0.15f);
	glVertex2f(-0.205f, -0.15f);
	glVertex2f(-0.205f, -0.01f);
	glEnd();

	glBegin(GL_QUADS);///Left side down white window white
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.195f, -0.01f);
	glVertex2f(-0.195f, -0.15f);
	glVertex2f(-0.12f, -0.15f);
	glVertex2f(-0.12f, -0.01f);
	glEnd();



    glBegin(GL_QUADS);///yellow left window middle
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.3f, 0.01f);
	glVertex2f(-0.1f, 0.01f);
	glVertex2f(-0.1f, 0.05f);
	glEnd();



	glBegin(GL_QUADS);///orange up left window border
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.1f, 0.05f);
	glVertex2f(-0.1f, 0.25f);
	glEnd();



    glBegin(GL_QUADS);///white Left side up window border
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.29f, 0.24f);
	glVertex2f(-0.29f, 0.06f);
	glVertex2f(-0.11f, 0.06f);
	glVertex2f(-0.11f, 0.24f);
	glEnd();

	glBegin(GL_QUADS);///white  Left side  window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.28f, 0.23f);
	glVertex2f(-0.28f, 0.07f);
	glVertex2f(-0.205f, 0.07f);
	glVertex2f(-0.205f, 0.23f);
	glEnd();

	glBegin(GL_QUADS);///white quads Left side up  window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.195f, 0.23f);
	glVertex2f(-0.195f, 0.07f);
	glVertex2f(-0.12f, 0.07f);
	glVertex2f(-0.12f, 0.23f);
	glEnd();



    glBegin(GL_QUADS);///orange middle down  window
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.1f, 0.05f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(0.1f, -0.17f);
	glVertex2f(0.1f, 0.05f);
	glEnd();

    glBegin(GL_QUADS);///white mid down quads
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.05f, -0.17f);
	glVertex2f(0.05f, -0.17f);
	glVertex2f(0.05f, 0.0f);
	glEnd();

    glBegin(GL_LINES);/// window line
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.01f);
    glVertex2f(0.0f, -0.17f);
    glEnd();


    glBegin(GL_QUADS);///mid left yellow
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.065f, 0.0f);
	glVertex2f(-0.065f, -0.17f);
	glVertex2f(-0.085f, -0.17f);
	glVertex2f(-0.085f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);///mid right yellow
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.065f, 0.0f);
	glVertex2f(0.065f, -0.17f);
	glVertex2f(0.085f, -0.17f);
	glVertex2f(0.085f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);///orange mid down  quads
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.09f, 0.0f);
	glVertex2f(-0.09f, -0.04f);
	glVertex2f(0.09f, -0.04f);
	glVertex2f(0.09f, 0.0f);
	glEnd();

    glBegin(GL_QUADS);///yellow middle window middle
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.1f, 0.09f);
	glVertex2f(-0.1f, 0.05f);
	glVertex2f(0.1f, 0.05f);
	glVertex2f(0.1f, 0.09f);
	glEnd();


	glBegin(GL_QUADS);///orange middle up  window
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.1f, 0.33f);
	glVertex2f(-0.1f, 0.09f);
	glVertex2f(0.1f, 0.09f);
	glVertex2f(0.1f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);///orange middle up  window broder
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.08f, 0.32f);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(0.08f, 0.1f);
	glVertex2f(0.08f, 0.32f);
	glEnd();


    glBegin(GL_QUADS);///right side down orange window
	glColor3f(0.9f, 0.4f, 0.0f);

    glVertex2f(0.1f, 0.01f);
	glVertex2f(0.3f, 0.01f);
	glVertex2f(0.3f, -0.17f);
	glVertex2f(0.1f, -0.17f);

	glEnd();

    glBegin(GL_QUADS);///white Left side down  window  broder
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.29f, 0.0f);
	glVertex2f(0.29f, -0.16f);
	glVertex2f(0.11f, -0.16f);
	glVertex2f(0.11f, 0.0f);
	glEnd();

    glBegin(GL_QUADS);///white Left side downe window white
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.28f, -0.01f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.205f, -0.15f);
	glVertex2f(0.205f, -0.01f);
	glEnd();

    glBegin(GL_QUADS);///white Left side down  window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.195f, -0.01f);
	glVertex2f(0.195f, -0.15f);
	glVertex2f(0.12f, -0.15f);
	glVertex2f(0.12f, -0.01f);
	glEnd();


    glBegin(GL_QUADS);///yellow right window middle
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, 0.01f);
	glVertex2f(0.1f, 0.01f);
	glVertex2f(0.1f, 0.05f);
	glEnd();

    glBegin(GL_QUADS);///orange up right window
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(0.3f, 0.25f);
	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.1f, 0.05f);
	glVertex2f(0.1f, 0.25f);
	glEnd();


	glBegin(GL_QUADS);///white Right side up  quads
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.29f, 0.24f);
	glVertex2f(0.29f, 0.06f);
	glVertex2f(0.11f, 0.06f);
	glVertex2f(0.11f, 0.24f);
	glEnd();

	glBegin(GL_QUADS);///white Right side up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.28f, 0.23f);
	glVertex2f(0.28f, 0.07f);
	glVertex2f(0.205f, 0.07f);
	glVertex2f(0.205f, 0.23f);
	glEnd();

	glBegin(GL_QUADS);///white Right side up window
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.195f, 0.23f);
	glVertex2f(0.195f, 0.07f);
	glVertex2f(0.12f, 0.07f);
	glVertex2f(0.12f, 0.23f);
	glEnd();



    glBegin(GL_QUADS);///red high
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.12f, 0.37f);
	glVertex2f(-0.12f, 0.33f);
	glVertex2f(0.12f, 0.33f);
	glVertex2f(0.12f, 0.37f);
	glEnd();


    glBegin(GL_QUADS);///red high up
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.14f, 0.41f);
	glVertex2f(-0.14f, 0.37f);
	glVertex2f(0.14f, 0.37f);
	glVertex2f(0.14f, 0.41f);
	glEnd();

    ///cloud speed
    glPushMatrix();
    glPopMatrix();
}



void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	background();

	glPushMatrix();

	glPopMatrix();


	glPushMatrix();

	glPopMatrix();

	glPushMatrix();

	glPopMatrix();


	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("A busy Street View");
	glutDisplayFunc(display);


	initGL();
	glutMainLoop();
	return 0;
}

