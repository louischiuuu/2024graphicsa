#include <GL/glut.h> ///��18��d�U�ӡA�ϥ� GLUT�~��
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle =0;
int method=1;
int oldX=0,oldY=0;
void mouse(int button,int state,int x,int y){
    ///printf("%d %d %d %d\n",button,state,x,y);
   oldX=x;///teapotX=(x-150)/150.0;
   oldY=y;///teapotY=-(y-150)/150.0;
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX,teapotY,0);
       glRotatef(angle,0,0,1);///��z�b��
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y){
    if(method==1){
        angle+=x-oldX;
       }else if(method==2){
            teapotX +=(x-oldX)/150.0;
            teapotY -=(y-oldY)/150.0;
       }
    oldX=x;
    oldY=y;
    display();
}
void keyboard(unsigned char key,int x,int y){
    if(key=='e') method=1;
    if(key=='w') method=2;

}
int main(int argc, char *argv[]) ///��138��Amain()�禡
{
    glutInit(&argc,argv); ///��140��A�}�� GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148��A��ܳ]�w�Ҧ�
    glutCreateWindow("week02 mouse");///145��A�}�@��GLUT����
    glutDisplayFunc(display);///148,�n��display()�禡�ӵe��
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    glutMainLoop();/// 174��A�D�n���j��A�b�o�̤@���B�@�A������

}
