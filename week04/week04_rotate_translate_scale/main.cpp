#include <GL/glut.h>
#include <stdio.h>
float angle=0,oldX=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle++,0,0,1);
     glTranslated(0.8,0,0);
    glScalef(0.3,0.3,0.3);
    glColor3f(0,1,0);
    glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();

}


int main(int argc,char*argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04 keyboard mouse motion");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();

}


