#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��

void display()
{
    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot(0.3);
    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);

    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///��138��Amain()�禡
{
    glutInit(&argc,argv); ///��140��A�}�� GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148��A��ܳ]�w�Ҧ�
    glutCreateWindow("2024�q���Ͼǲ�01�g");///145��A�}�@��GLUT����
    glutDisplayFunc(display);///148,�n��display()�禡�ӵe��
    glutMainLoop();/// 174��A�D�n���j��A�b�o�̤@���B�@�A������

}
