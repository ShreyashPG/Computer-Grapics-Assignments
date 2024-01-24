#include<GL/freeglut.h>
#include<GL/gl.h>


void points()
{

glColor3f(1.0,0.0,0.0);
glPointSize(10);
glBegin(GL_POINTS);
glVertex2f(400,400);
glVertex2f(600,400);
glVertex2f(200,400);
glVertex2f(400,200);
glVertex2f(400,600);
glEnd();


}

void square()
{

glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(600,400);
glVertex2f(400,200);
glVertex2f(200,400);

glVertex2f(400,600);
glEnd();


glColor3f(0.0,0.0,1.0);
glBegin(GL_LINE_LOOP);
glVertex2f(200,200);
glVertex2f(200,600);
glVertex2f(600,600);
glVertex2f(600,200);
glEnd();

}


void renderFunction()
{
 glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(0.0, 800.0, 0.0,800.0, 0.0,1.0);

glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(0,400);
glVertex2f(800,400);
glVertex2f(400,0);
glVertex2f(400,800);
glEnd();


 points();

 square();


glFlush();

}


int main(int argc,char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(700,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGL - First window demo");
glutDisplayFunc(renderFunction);
glutMainLoop();
return 0;

}


