#include <GL/freeglut.h>
#include <GL/gl.h>


void tree()
{


glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,150);
glVertex2f(520, 150);
glVertex2f(520, 230);
glVertex2f(500, 230);
glEnd();

glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,230);
glVertex2f(520, 230);
glVertex2f(600, 260);
glVertex2f(580, 280);
glEnd();

glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,230);
glVertex2f(520, 230);
glVertex2f(580, 300);
glVertex2f(560, 320);
glEnd();

glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,230);
glVertex2f(520, 230);
glVertex2f(520, 330);
glVertex2f(500, 330);
glEnd();

glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,230);
glVertex2f(520, 230);
glVertex2f(440, 280);
glVertex2f(420, 260);
glEnd();

glColor3f(0.0, 1.0, 0.2);
glBegin(GL_POLYGON);
glVertex2f(500,230);
glVertex2f(520, 230);
glVertex2f(460, 320);
glVertex2f(440, 300);
glEnd();






}

void house()
{

glColor3f(0.5, 0.6, 0.4);
glBegin(GL_TRIANGLES);
glVertex2f(200,250);
glVertex2f(300, 250);
glVertex2f(250, 300);

glEnd();



glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2f(200,250);
glVertex2f(300, 250);
glVertex2f(300, 150);
glVertex2f(200, 150);
glEnd();


glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2f(225,150);
glVertex2f(275, 150);
glVertex2f(275, 200);
glVertex2f(225, 200);
glEnd();

}

void points()
{
glColor3f(1.0, 0.4, 0.0);
glBegin(GL_POINTS);
glVertex2f(500,500);

glEnd();


}


void lines()
{

glColor3f(0.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(150,150);
glVertex2f(350,150);


glEnd();


}


void lineLoop()
{
glColor3f(0.0, 1.0, 1.0);
glBegin(GL_LINE_LOOP);
glVertex2f(50,100);
glVertex2f(100,100);
glVertex2f(100,150);
glVertex2f(50,150);

glEnd();







}




void renderFunction()
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(0.0, 800.0, 0.0,800.0, 0.0, 800.0);


house();
tree();             
points();
lines();
lineLoop();



glFlush();










}






int main(int argc,char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGL - First window demo");
glutDisplayFunc(renderFunction);
glutMainLoop();
return 0;

}
