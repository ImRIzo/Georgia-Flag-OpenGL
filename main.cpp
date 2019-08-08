#include<windows.h>
#include <GL/glut.h>
void init(){
    glClearColor(0,0,0,0);
    glOrtho(-30, 30, -25, 25, -10, 10);
}

void triangle(float a,float b,float c, float d, float e, float f){
    glBegin(GL_TRIANGLES);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
    glEnd();
    glFlush();
}

void star(float x, float y){
    triangle(x-5,y+3, x+5,y+3, x+0,y-1.3 );
    triangle(x-4,y-4, x+2,y+0, x+0,y+6 );
    triangle(x+4,y-4, x-2,y+0, x+0,y+6 );
}

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0.149, 0.564);
    glBegin(GL_QUADS);
        glVertex2f(-25, 15);   //full quad
        glVertex2f(25, 15);
        glVertex2f(25, -15);
        glVertex2f(-25, -15);
    glEnd();
    glFlush();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
        glVertex2f(-25, 9);   //full quad
        glVertex2f(25, 9);
        glVertex2f(25, 3);
        glVertex2f(-25,3);
    glEnd();
    glFlush();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
        glVertex2f(-25, -3);   //full quad
        glVertex2f(25, -3);
        glVertex2f(25, -9);
        glVertex2f(-25, -9);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.047, 0.152);
    triangle(-25,15, -2,0, -25,-15);

    //star
    glColor3f(1,1,1);
    star(-17,0);

    glutSwapBuffers();
}
int main(){
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 700);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Cuba");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
