#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��

void display()
{
    glBegin(GL_POLYGON);
         glVertex2f((34-200)/200.0,-(48-200)/200.0);
         glVertex2f((48-200)/200.0,-(131-200)/200.0);
         glVertex2f((85-200)/200.0,-(59-200)/200.0);
    glEnd();
     glBegin(GL_POLYGON);
         glVertex2f((383-200)/200.0,-(79-200)/200.0);
         glVertex2f((348-200)/200.0,-(146-200)/200.0);
         glVertex2f((312-200)/200.0,-(55-200)/200.0);
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
