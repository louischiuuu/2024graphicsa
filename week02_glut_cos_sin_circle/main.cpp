#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��
#include <math.h>
void myCircle(float x,float y,float r){
        glBegin(GL_POLYGON);
        for(float a=0;a<=3.1415926*2;a+=0.1){
            glVertex2f(r*cos(a)+x,r*sin(a)+y);
        }
    glEnd();
}
void display()
{
    myCircle(0.5,0.5,0.3);
    myCircle(-0.5,0.5,0.3);
    myCircle(0,-0.1,0.6);
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
