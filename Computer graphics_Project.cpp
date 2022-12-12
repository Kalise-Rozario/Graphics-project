#include <windows.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>


GLfloat cloud_position = 0.0f;
GLfloat cloud_speed = 0.01f;
int wheel_angle=0;
float car_position=0;
float car_speed=0.01;
float police_car_position=0;
float police_car_speed=0.01;


void update(int value)
{
    ///cloud translatoin
    if(cloud_position <-1.5)
        cloud_position = 1.0f;
    cloud_position -= cloud_speed;

    ///wheel angle rotatoin
    if(wheel_angle>=360)
    {
        wheel_angle=0;
    }
    wheel_angle+=10;

    if (car_position>=2)
    {
        car_position=-1;
    }
    car_position+=car_speed;

    if (police_car_position>=1.2)
    {
        police_car_position=-1;
    }
    police_car_position+=police_car_speed;

glutPostRedisplay();


glutTimerFunc(100, update, 0);
}

void initGL()
{

    glClearColor(0.0f, 0.6f, 0.9f, 0.0f);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'n':

//void initGL()

    glClearColor(0.0f, 0.0f, 0.0f,0.0f);
	glutPostRedisplay();
break;

case 'd':

//void initGL()

    glClearColor(0.0f, 0.6f, 0.9f, 0.0f);
	glutPostRedisplay();
break;


	}
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

void wheel()
{
    ///outer outer circle
        glColor3ub(150,150,150);
        circle(0,0,0.05);
        ///outer inner circle
        glColor3ub(0,0,0);
        circle(0,0,0.04);
        ///inner lines 1
        glColor3ub(250,250,250);
        glLineWidth(2);
        glBegin(GL_LINES);
        glVertex2f(-0.035,0);
        glVertex2f( 0.035,0);
        glEnd();
        ///inner lines 2
        glPushMatrix();
        glRotatef(45,0,0,1);
            glColor3ub(250,250,250);
            glLineWidth(2);
            glBegin(GL_LINES);
            glVertex2f(-0.035,0);
            glVertex2f( 0.035,0);
            glEnd();
        glPopMatrix();
        ///inner lines 3
        glPushMatrix();
        glRotatef(90,0,0,1);
            glColor3ub(250,250,250);
            glLineWidth(2);
            glBegin(GL_LINES);
            glVertex2f(-0.035,0);
            glVertex2f( 0.035,0);
            glEnd();
        glPopMatrix();
        ///inner lines 4
        glPushMatrix();
        glRotatef(135,0,0,1);
            glColor3ub(250,250,250);
            glLineWidth(2);
            glBegin(GL_LINES);
            glVertex2f(-0.035,0);
            glVertex2f( 0.035,0);
            glEnd();
        glPopMatrix();
        ///inner outer circle
        glColor3ub(150,150,150);
        circle(0,0,0.015);
        ///inner inner circle
        glColor3ub(0,0,0);
        circle(0,0,0.01);
}





void background()
{
    glBegin(GL_QUADS);///Background Road
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, -0.35f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.35f);
	glEnd();


	glLineWidth(1);
    glBegin(GL_LINES);/// last Road Line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, -0.99f);
    glVertex2f(1.0f, -0.99f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, -0.675f);
    glVertex2f(-0.8f, -0.675f);
    glEnd();

    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.7f, -0.675f);
    glVertex2f(-0.4f, -0.675f);
    glEnd();

    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, -0.675f);
    glVertex2f(-0.1f, -0.675f);
    glEnd();

    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, -0.675f);
    glVertex2f(0.3f, -0.675f);
    glEnd();

    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.4f, -0.675f);
    glVertex2f(0.6f, -0.675f);
    glEnd();

    glBegin(GL_LINES);/// Middle road line
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.7f, -0.675f);
    glVertex2f(1.0f, -0.675f);
    glEnd();

/////////////////////////////////






    /*
    glBegin(GL_QUADS);///Background 2
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.4f, -0.27f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.27f);
	glEnd();
	*/

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

	glBegin(GL_TRIANGLES);///green  left  side small triangel
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-0.45f, -0.215f);
	glVertex2f(-0.4f, -0.26f);
	glVertex2f(-0.4f,  -0.215f);
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

    glBegin(GL_TRIANGLES);///green right side side small triangel
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.45f, -0.215f);
	glVertex2f(0.4f, -0.26f);
	glVertex2f(0.4f,  -0.215f);
    glEnd();
    ////////////////

    glBegin(GL_QUADS);///Black quads building gate up second
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.35f, -0.17f);
	glVertex2f(-0.35f, -0.215f);
	glVertex2f(0.35f, -0.215f);
	glVertex2f(0.35f, -0.17f);
	glEnd();





///////////////////////////
	glBegin(GL_QUADS);///left side under the tree green quard
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-1.0f, -0.17f);
	glVertex2f(-1.0f, -0.215f);
	glVertex2f(-0.35f, -0.215f);
	glVertex2f(-0.35f, -0.17f);
	glEnd();

//
	glBegin(GL_QUADS);///Right side under the tree green quard
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(1.0f, -0.17f);
	glVertex2f(1.0f, -0.215f);
	glVertex2f(0.35f, -0.215f);
	glVertex2f(0.35f, -0.17f);
	glEnd();
/////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////
    glBegin(GL_QUADS);///white quads left side
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-1.0f, 0.23f);
	glVertex2f(-1.0f, -0.17f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(-0.1f, 0.23f);
	glEnd();
	    glBegin(GL_QUADS);///left side tree body
	glColor3f(0.5f, 0.0f, 0.0f);

	glVertex2f(-0.43f, -0.06f);
	glVertex2f(-0.43f, -0.215f);
	glVertex2f(-0.41f, -0.215f);
	glVertex2f(-0.41f, -0.06f);
	glEnd();

		glBegin(GL_TRIANGLES);///Greed tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.5f, -0.06f);
	glVertex2f(-0.34f, -0.06f);
	glVertex2f(-0.42f,  0.1f);
    glEnd();

    		glBegin(GL_TRIANGLES);///Greed tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.495f, -0.02f);
	glVertex2f(-0.345f, -0.02f);
	glVertex2f(-0.42f,  0.17f);
    glEnd();

        		glBegin(GL_TRIANGLES);///Greed tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.49f, 0.02f);
	glVertex2f(-0.35f, 0.02f);
	glVertex2f(-0.42f,  0.2f);
    glEnd();

///////////////////////////////////////////////////////////////////////////
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

        glBegin(GL_QUADS);///lamp post right side sky blue quads
	glColor3f(0.0f, 0.8f, 0.8f);
    glVertex2f(-0.675f, 0.265f);
    glVertex2f(-0.675f, 0.14f);
    glVertex2f(-0.52f, 0.14f);
    glVertex2f(-0.52f, 0.265f);
    glEnd();

            glBegin(GL_QUADS);///lamp post right side sky blue quads
	glColor3f(0.0f, 0.8f, 0.8f);
    glVertex2f(-0.675f, 0.11f);
    glVertex2f(-0.675f, -0.02f);
    glVertex2f(-0.52f, -0.02f);
    glVertex2f(-0.52f, 0.11f);
    glEnd();

                glBegin(GL_QUADS);///lamp post right side sky blue quads
	glColor3f(0.0f, 0.8f, 0.8f);
    glVertex2f(-0.675f, -0.05f);
    glVertex2f(-0.675f, -0.19f);
    glVertex2f(-0.52f, -0.19f);
    glVertex2f(-0.52f, -0.05f);
    glEnd();
    //////////////////////////////////////////////////
    /////////////////////////////////////////
    ///////////////////////////
    ////////////////////

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


			    glBegin(GL_QUADS);///lamp post left
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.71f, 0.03f);
	glVertex2f(-0.71f, -0.215f);
	glVertex2f(-0.696f, -0.215f);
	glVertex2f(-0.696f, 0.03f);
	glEnd();

				    glBegin(GL_QUADS);///lamp post left
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.72f, 0.07f);
	glVertex2f(-0.71f, 0.03f);
	glVertex2f(-0.696f, 0.03f);
	glVertex2f(-0.685f, 0.07f);
	glEnd();

	glBegin(GL_TRIANGLES);///lamp post left
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.72f, 0.07f);
	glVertex2f(-0.685f, 0.07f);
	glVertex2f(-0.7f,  0.09f);


	glEnd();

	//////////////////////////////////////
	////////////////////////////
	/////////////////////////////////////////start



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

			    glBegin(GL_QUADS);///lamp post right
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.71f, 0.03f);
	glVertex2f(0.71f, -0.215f);
	glVertex2f(0.696f, -0.215f);
	glVertex2f(0.696f, 0.03f);
	glEnd();

				    glBegin(GL_QUADS);///lamp post right
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.72f, 0.07f);
	glVertex2f(0.71f, 0.03f);
	glVertex2f(0.696f, 0.03f);
	glVertex2f(0.685f, 0.07f);
	glEnd();

	glBegin(GL_TRIANGLES);///lamp post right
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.72f, 0.07f);
	glVertex2f(0.685f, 0.07f);
	glVertex2f(0.7f,  0.09f);


	glEnd();

	glBegin(GL_QUADS);///right side tree body
	glColor3f(0.5f, 0.0f, 0.0f);

	glVertex2f(0.43f, -0.06f);
	glVertex2f(0.43f, -0.215f);
	glVertex2f(0.41f, -0.215f);
	glVertex2f(0.41f, -0.06f);
	glEnd();

		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.5f, -0.06f);
	glVertex2f(0.34f, -0.06f);
	glVertex2f(0.42f,  0.1f);
    glEnd();

    		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.495f, -0.02f);
	glVertex2f(0.345f, -0.02f);
	glVertex2f(0.42f,  0.17f);
    glEnd();

          		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.49f, 0.02f);
	glVertex2f(0.35f, 0.02f);
	glVertex2f(0.42f,  0.2f);
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
        glTranslatef(cloud_position,0.0f, 0.0f);
        cloud(0.5f, 0.8f);
        cloud(-0.0f, 0.8f);
    glPopMatrix();
}

void car()
{
    /// car
    glBegin(GL_QUADS);/// white car down body
	glColor3f(1.0f, 0.0f, 1.0f);

    glVertex2f(-0.7f, -0.35f);
	glVertex2f(-0.7f, -0.45f);
    glVertex2f(-0.35f, -0.45f);
	glVertex2f(-0.36f, -0.35f);
    glEnd();

    	     glBegin(GL_QUADS);/// yellow quads
	glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.39f, -0.35f);
	glVertex2f(-0.39f, -0.37f);
    glVertex2f(-0.357f, -0.37f);
	glVertex2f(-0.36f, -0.35f);
    glEnd();

    	     glBegin(GL_QUADS);/// black car start
	glColor3f(1.0f, 0.0f, 1.0f);

    glVertex2f(-0.71f, -0.43f);
	glVertex2f(-0.71f, -0.45f);
    glVertex2f(-0.69f, -0.45f);
	glVertex2f(-0.69f, -0.43f);
    glEnd();

        	     glBegin(GL_QUADS);/// black car end
	glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(-0.36f, -0.43f);
	glVertex2f(-0.36f, -0.45f);
    glVertex2f(-0.34f, -0.45f);
	glVertex2f(-0.34f, -0.43f);
    glEnd();

    	     glBegin(GL_QUADS);/// red car middle line
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.7f, -0.343f);
	glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.36f, -0.35f);
	glVertex2f(-0.363f, -0.343f);
    glEnd();

        	     glBegin(GL_QUADS);/// white car middle body
	glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.7f, -0.31f);
	glVertex2f(-0.7f, -0.343f);
    glVertex2f(-0.363f, -0.343f);
	glVertex2f(-0.39f, -0.31f);
    glEnd();

        	     glBegin(GL_QUADS);/// red car middle body end
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.7f, -0.31f);
	glVertex2f(-0.7f, -0.343f);
    glVertex2f(-0.69f, -0.343f);
	glVertex2f(-0.69f, -0.31f);
    glEnd();



    	     glBegin(GL_QUADS);/// white car up body
	glColor3f(1.0f, 0.0f, 1.0f);

    glVertex2f(-0.65f, -0.17f);
	glVertex2f(-0.7f, -0.31f);
    glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.43f, -0.17f);
    glEnd();

    	     glBegin(GL_QUADS);/// white car up body blue right quads
	glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.49f, -0.19f);
	glVertex2f(-0.49f, -0.31f);
    glVertex2f(-0.41f, -0.31f);
	glVertex2f(-0.45f, -0.19f);
    glEnd();

        	     glBegin(GL_QUADS);/// white car up body blue left quads
	glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.57f, -0.19f);
	glVertex2f(-0.57f, -0.31f);
    glVertex2f(-0.5f, -0.31f);
	glVertex2f(-0.5f, -0.19f);
    glEnd();



    ///Left wheel
    glPushMatrix();
    glTranslatef(-0.6,-0.45,0);
    glRotatef(-wheel_angle,0,0,1);
        wheel();
    glPopMatrix();
    ///Right wheel
    glPushMatrix();
    glTranslatef(-0.45,-0.45,0);
        glRotatef(-wheel_angle,0,0,1);
        wheel();
    glPopMatrix();

}

void policeCar()
{
    ///police car

    	     glBegin(GL_QUADS);/// white police car down body
	glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.37f, -0.77f);
	glVertex2f(0.35f, -0.89f);
    glVertex2f(0.7f, -0.89f);
	glVertex2f(0.69f, -0.77f);
    glEnd();

       	     glBegin(GL_QUADS);/// black police car down start line
	glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(0.34f, -0.87f);
	glVertex2f(0.34f, -0.89f);
    glVertex2f(0.37f, -0.89f);
	glVertex2f(0.37f, -0.87f);
    glEnd();

           	     glBegin(GL_QUADS);/// black police car down end line
	glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(0.68f, -0.87f);
	glVertex2f(0.68f, -0.89f);
    glVertex2f(0.72f, -0.89f);
	glVertex2f(0.72f, -0.87f);
    glEnd();



     	     glBegin(GL_QUADS);/// red police car middle line
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.366f, -0.79f);
	glVertex2f(0.363f, -0.81f);
    glVertex2f(0.39f, -0.81f);
	glVertex2f(0.39f, -0.79f);
    glEnd();

    	     glBegin(GL_QUADS);/// blue police car middle line
	glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(0.4f, -0.79f);
	glVertex2f(0.4f, -0.81f);
    glVertex2f(0.66f, -0.81f);
	glVertex2f(0.66f, -0.79f);
    glEnd();

        	     glBegin(GL_QUADS);/// red police car middle line
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.67f, -0.79f);
	glVertex2f(0.67f, -0.81f);
    glVertex2f(0.695f, -0.81f);
	glVertex2f(0.693f, -0.79f);
    glEnd();

        	     glBegin(GL_QUADS);/// white police car up body
	glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.46f, -0.7f);
	glVertex2f(0.41f, -0.77f);
    glVertex2f(0.65f, -0.77f);
	glVertex2f(0.62f, -0.7f);
    glEnd();

            	     glBegin(GL_QUADS);/// sky blue police car up body
	glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(0.465f, -0.715f);
	glVertex2f(0.42f, -0.77f);
    glVertex2f(0.52f, -0.77f);
	glVertex2f(0.52f, -0.715f);
    glEnd();

           	     glBegin(GL_QUADS);/// sky blue car up body
	glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(0.53f, -0.715f);
	glVertex2f(0.53f, -0.77f);
    glVertex2f(0.64f, -0.77f);
	glVertex2f(0.615f, -0.715f);
    glEnd();



            	     glBegin(GL_QUADS);/// red car upper light
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.475f, -0.68f);
	glVertex2f(0.475f, -0.7f);
    glVertex2f(0.49f, -0.7f);
	glVertex2f(0.49f, -0.68f);
    glEnd();

                	     glBegin(GL_QUADS);/// blue car upper light
	glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(0.49f, -0.68f);
	glVertex2f(0.49f, -0.7f);
    glVertex2f(0.505f, -0.7f);
	glVertex2f(0.505f, -0.68f);
    glEnd();

                    	     glBegin(GL_QUADS);/// red car upper light
	glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.505f, -0.68f);
	glVertex2f(0.505f, -0.7f);
    glVertex2f(0.52f, -0.7f);
	glVertex2f(0.52f, -0.68f);
    glEnd();
    ///left wheel
    glPushMatrix();
    glTranslatef(0.45,-0.9,0);
    glRotatef(wheel_angle,0,0,1);
        wheel();
    glPopMatrix();
    ///right wheel
    glPushMatrix();
    glTranslatef(0.6,-0.9,0);
    glRotatef(wheel_angle,0,0,1);
        wheel();
    glPopMatrix();

}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	background();

	glPushMatrix();
        glTranslatef(car_position,0,0);
        car();
	glPopMatrix();


	glPushMatrix();
        glTranslatef(-police_car_position,0,0);
        policeCar();
	glPopMatrix();

	glPushMatrix();
        glTranslatef(0.6+car_position,-0.15,0);
        car();
	glPopMatrix();


	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("A Busy Street view");
	glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);

	initGL();
    glutKeyboardFunc(handleKeypress);

	glutMainLoop();
	return 0;
}

