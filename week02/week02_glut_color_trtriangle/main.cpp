#include <GL/glut.h> ///第18行留下來，使用 GLUT外掛

void display()
{
    glBegin(GL_POLYGON);
    glColor3f(1,0,0); glVertex2f(0,1);
    glColor3f(0,1,0); glVertex2f(1,-0.6);
    glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///第138行，main()函式
{
    glutInit(&argc,argv); ///第140行，開啟 GLUT功能
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///148行，顯示設定模式
    glutCreateWindow("week02_color_teapot");///145行，開一個GLUT視窗
    glutDisplayFunc(display);///148,要用display()函式來畫圖
    glutMainLoop();/// 174行，主要的迴圈，在這裡一直運作，不結束

}

