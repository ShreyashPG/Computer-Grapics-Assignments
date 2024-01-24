#include<GL/freeglut.h>
#include<GL/gl.h>


void renderFunction()
{

glClearColor(





}



int main(int argv,char **argv)
{

glutInit(argv,**argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindows(700,700);
glutInitWindowsPosition(100,100);
glutCreateWindow("OpenGL-MY WINDOW");
glutDisplayFunc(renderFunction);
glutMainLoop();

return 0;

}
