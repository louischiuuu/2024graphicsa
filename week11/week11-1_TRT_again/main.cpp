#include <GL/glut.h>
void myBody(){
    glPushMatrix();
        glColor3f(1,0,0);///red
        glutWireCube(0.6);///myBody()
    glPopMatrix();
}
void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);///green
        glScalef(1,0.4,0.4);
        glutWireCube(0.3);///myArm();
    glPopMatrix();
}
float angle=0;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	myBody();
    glPushMatrix();
        ///glTranslatef();
        glRotatef(angle++,0,0,1);
        glTranslatef(0.15,0,0);///把旋轉中心放到正中心
	myArm();
	glPopMatrix();
	glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10-1_glutWireCube_myBody_myArm");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
}
