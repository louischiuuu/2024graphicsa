#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��

void display()
{
    glBegin(GL_POLYGON);
    glColor3f(1,0,0); glVertex2f(0,1);
    glColor3f(0,1,0); glVertex2f(1,-0.6);
    glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///��138��Amain()�禡
{
    glutInit(&argc,argv); ///��140��A�}�� GLUT�\��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///148��A��ܳ]�w�Ҧ�
    glutCreateWindow("week02_color_teapot");///145��A�}�@��GLUT����
    glutDisplayFunc(display);///148,�n��display()�禡�ӵe��
    glutMainLoop();/// 174��A�D�n���j��A�b�o�̤@���B�@�A������

}

