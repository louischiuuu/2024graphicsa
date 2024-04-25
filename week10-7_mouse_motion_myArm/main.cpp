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
	glPushMatrix();///�k�b��
	glTranslatef(0.3,0.3,0);///(3) ����ӤW
	glRotatef(angle,0,0,1);///(2) ����
	glTranslatef(0.15,0,0); ///(1) ����त�ߡA��b�e����������
	myArm();
	glPushMatrix();
	glTranslatef(0.15,0,0);///(3) ����ӤW
	glRotatef(angle,0,0,1);///(2) ����
	glTranslatef(0.15,0,0); ///(1) ����त�ߡA��b�e����������
	myArm();
	 glPopMatrix();
	 glPopMatrix();

	 glPushMatrix();///���b��
	glTranslatef(-0.3,0.3,0);///(3) ����ӤW
	glRotatef(angle,0,0,1);///(2) ����
	glTranslatef(-0.15,0,0); ///(1) ����त�ߡA��b�e����������
	myArm();
	glPushMatrix();
	glTranslatef(-0.15,0,0);///(3) ����ӤW
	glRotatef(angle,0,0,1);///(2) ����
	glTranslatef(-0.15,0,0); ///(1) ����त�ߡA��b�e����������
	myArm();
	 glPopMatrix();
	 glPopMatrix();

	glutSwapBuffers();
}
void motion(int x,int y){
    angle=x;
    glutPostRedisplay();///�i�Dglut�K�W�K�Q�K�A��glut���šA�n���e�e��
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10-7_glutWireCube_myBody_myArm");

	glutDisplayFunc(display);
	glutMotionFunc(motion);
	glutIdleFunc(display);
	glutMainLoop();
}
