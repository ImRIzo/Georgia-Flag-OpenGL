#include<windows.h>
#include <GL/glut.h>
void init(){
    glClearColor(0,0,0,0);
    glOrtho(-30, 30, -25, 25, -10, 10);
}

void blabla(int x, int y){
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(x-1.5, y+3.8);   //full quad
        glVertex2f(x+1.5, y+3.8);
        glVertex2f(x+1, y+0);
        glVertex2f(x-1, y+0);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(x-1, y+0);   //full quad
        glVertex2f(x+1, y+0);
        glVertex2f(x+1.5, y-3.8);
        glVertex2f(x-1.5, y-3.8);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(x+0, y+1);   //full quad
        glVertex2f(x+3.8, y+1.5);
        glVertex2f(x+3.8, y-1.5);
        glVertex2f(x+0, y-1);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(x+0, y+1);   //full quad
        glVertex2f(x-3.8, y+1.5);
        glVertex2f(x-3.8, y-1.5);
        glVertex2f(x+0, y-1);
    glEnd();
    glFlush();
}

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-25, 15);   //full quad
        glVertex2f(25, 15);
        glVertex2f(25, -15);
        glVertex2f(-25, -15);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-25, 4);   //full quad
        glVertex2f(25, 4);
        glVertex2f(25, -4);
        glVertex2f(-25, -4);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-4, 15);   //full quad
        glVertex2f(4, 15);
        glVertex2f(4, -15);
        glVertex2f(-4, -15);
    glEnd();
    glFlush();

    blabla(-15,9.8);
    blabla(15,9.8);
    blabla(15,-9.8);
    blabla(-15,-9.8);

    glutSwapBuffers();
}
int main(){
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 700);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Georgia");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
