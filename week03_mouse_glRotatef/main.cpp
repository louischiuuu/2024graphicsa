#include <GL/glut.h> ///第18行留下來，使用 GLUT外掛
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle =0;
void mouse(int button,int state,int x,int y){
    ///printf("%d %d %d %d\n",button,state,x,y);
   teapotX=(x-150)/150.0;
   teapotY=-(y-150)/150.0;
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
       /// glTranslatef(teapotX,teapotY,0);
       glRotatef(angle,0,0,1);///對z軸轉
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y){
        angle=x;
        display();
}
int main(int argc, char *argv[]) ///第138行，main()函式
{
    glutInit(&argc,argv); ///第140行，開啟 GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148行，顯示設定模式
    glutCreateWindow("week02 mouse");///145行，開一個GLUT視窗
    glutDisplayFunc(display);///148,要用display()函式來畫圖
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();/// 174行，主要的迴圈，在這裡一直運作，不結束

}
