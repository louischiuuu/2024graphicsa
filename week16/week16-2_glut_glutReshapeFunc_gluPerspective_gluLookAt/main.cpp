#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void reshape(int w,int h){///�[�o�q
    glViewport(0,0,w,h); ///�]�w�����|�ݨ쪺�ϰ�
    float ar =w/(float)h; ///������v�x�}
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,ar,0.01,100); ///����model view�x�}

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,-2,0,0,0,0,1,0);

}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
     glutInitWindowSize(300,480);
    glutCreateWindow("week16-2");
    glutReshapeFunc(reshape); ///�[�o��
    glutDisplayFunc(display);
    glutMainLoop();
}
