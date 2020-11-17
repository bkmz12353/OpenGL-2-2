#include <windows.h>
#include <glut.h>   //Подключение библиотеки glut.h
#include <gl/GLU.h>
#include <stdlib.h>
#include <gl/GL.h>

void Light1()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 1.0, 0.0, 0.0, 1.0 };
    glLightfv(GL_LIGHT0, GL_DIFFUSE, color);
}
void Light2()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 0.0, 1.0, 0.0, 1.0 };
    GLfloat dif[] = { 0.0, 1.0, 0.0, 1.0 };
    
    glLightfv(GL_LIGHT0, GL_DIFFUSE, color);
    glLightfv(GL_LIGHT0, GL_POSITION, dif);
}
void Light3()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 1.0, 1.0, 0.0, 1.0 };
    glLightfv(GL_LIGHT0, GL_DIFFUSE, color);
}
void Light11()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 1.0, 0.0, 0.0, 0.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, color);
}
void Light21()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 0.0, 1.0, 0.0, 1.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, color);
}
void Light31()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 0.0, 0.0, 1.0, 1.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, color);
}
void Light12()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 1.0, 0.0, 0.0, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, color);
}
void Light22()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 0.0, 1.0, 0.0, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, color);
}
void Light32()
{
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    GLfloat color[] = { 0.0, 0.0, 1.0, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, color);
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glutSolidSphere(0.7, 50, 40);
    glFlush();
}
void Shar1()
{
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 1");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light1();
    glutDisplayFunc(Draw);
}
void Shar2()
{
    glutInitWindowPosition(300, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 2");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light2();
    glutDisplayFunc(Draw);
}
void Shar3()
{
    glutInitWindowPosition(600, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 3");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light3();
    glutDisplayFunc(Draw);
}
void Shar11()
{
    glutInitWindowPosition(0, 300);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 4");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light11();
    glutDisplayFunc(Draw);
}
void Shar21()
{
    glutInitWindowPosition(300, 300);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 5");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light21();
    glutDisplayFunc(Draw);
}
void Shar31()
{
    glutInitWindowPosition(600, 300);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 6");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light31();
    glutDisplayFunc(Draw);
}
void Shar12()
{
    glutInitWindowPosition(0, 600);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 7");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light12();
    glutDisplayFunc(Draw);
}
void Shar22()
{
    glutInitWindowPosition(300, 600);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 8");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light22();
    glutDisplayFunc(Draw);
}
void Shar32()
{
    glutInitWindowPosition(600, 600);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Шар 9");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    Light32();
    glutDisplayFunc(Draw);
}
void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);

    Shar1();
    Shar2();
    Shar3();

    Shar11();
    Shar21();
    Shar31();

    Shar12();
    Shar22();
    Shar32();


    glutMainLoop();
}