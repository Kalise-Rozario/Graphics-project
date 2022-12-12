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
        glVertex2f (p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2)));

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


}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    background();
    glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("A Busy Street View");
	glutDisplayFunc(display);


	initGL();
	glutMainLoop();
	return 0;
}
