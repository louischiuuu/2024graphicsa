#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��
#include <stdio.h>
void mouse(int button,int state,int x,int y){
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN)
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
}
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///��138��Amain()�禡
{
    glutInit(&argc,argv); ///��140��A�}�� GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148��A��ܳ]�w�Ҧ�
    glutCreateWindow("week02 mouse");///145��A�}�@��GLUT����
    glutDisplayFunc(display);///148,�n��display()�禡�ӵe��
    glutMouseFunc(mouse);
    glutMainLoop();/// 174��A�D�n���j��A�b�o�̤@���B�@�A������

}
