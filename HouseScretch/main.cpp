#include <GL/glut.h>
int x1=5, y1 = 10, x2 = 10, y2 = 10, x3 = 10, y3 = 25, x4 = 7, y4 = 24, x5 = 10, y5 = 27, x6= 23, y6 = 40, x7= 10, y7 = 34, x8 = 14, y8 = 34, x9 = 14, y9 = 31;
int x10 = 23, y10 = 40, x11 = 34, y11 = 24, x12 = 26, y12 = 35, x13 = 39, y13 = 47, x14 = 57, y14 = 34, x15 = 50, y15 = 39, x16 = 50, y16 = 44, x17 = 53, y17 = 44;
int x18 = 53, y18 = 37, x19 = 53, y19 = 34, x20 = 53, y20 = 27, x21 = 30, y21 = 20, x22 = 45, y22 = 35, x23 = 60, y23 = 20, x24 = 55, y24 = 20, x25 = 55, y25 = 10, x26 = 62, y26 = 10, x27 = 17, y27 = 13, x28 = 17, y28=16, x29=21,y29=16,x30=21,y30=13,x31=23,y31=13,x32=23,y32=16,x33=27,y33=16,x34=27,y34=13, x35=17,y35=18,x36=17, y36=21,x37=21,y37=21,x38=21,y38=18,x40=23,y40=21,x41=27,y41=21,x42=27,y42=18,x39=23,y39=18,x43=41,y43=12,x44=41,y44=15,x45=45,y45=15,x46=45,y46=12,x47=41,y47=17,x48=41,y48=20,x49=45,y49=20,x50=45,y50=17,x52=47,y52=20,x53=51,y53=20,x54=51,y54=17,x51=47,y51=17,x57=51,y57=15,x56=47,y56=15,x55=47,y55=12,x58=51,y58=12;
int x59=36, y59=31,x60=36, y60=34, x61=40, y61=34, x62=40, y62=31, x63=36, y63=36, x64= 36, y64=39, x65=40, y65=39, x66= 40, y66=36, x67=42, y67=36, x68=42, y68=39,x69=46, y69=39, x70=46, y70=36, x71=42, y71=32, x72=42, y72=34, x73=44, y73=34 ;

void init(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}


void drawHouse(){
    glBegin(GL_LINES);

    glVertex2i(x1,y1);
    glVertex2i(x2,y2);

    glVertex2i(x2,y2);
    glVertex2i(x3, y3);

    glVertex2i(x3, y3);
    glVertex2i(x4, y4);


    glVertex2i(x4, y4);
    glVertex2i(x10,y10);

    glVertex2i(x5,y5);
    glVertex2i(x7,y7);


    glVertex2i(x7,y7);
    glVertex2i(x8,y8);

    glVertex2i(x8,y8);
    glVertex2i(x9,y9);

    glVertex2i(x10,y10);
    glVertex2i(x11,y11);

    glVertex2i(x12,y12);
    glVertex2i(x13,y13);

    glVertex2i(x13,y13);
    glVertex2i(x14,y14);

    glVertex2i(x14,y14);
    glVertex2i(x19,y19);

    glVertex2i(x15,y15);
    glVertex2i(x16,y16);

    glVertex2i(x16,y16);
    glVertex2i(x17,y17);

    glVertex2i(x17,y17);
    glVertex2i(x18,y18);

    glVertex2i(x19,y19);
    glVertex2i(x20,y20);

    glVertex2i(x21,y21);
    glVertex2i(x22,y22);

    glVertex2i(x22,y22);
    glVertex2i(x23,y23);

    glVertex2i(x23,y23);
    glVertex2i(x24,y24);

    glVertex2i(x24,y24);
    glVertex2i(x25,y25);

    glVertex2i(x25,y25);
    glVertex2i(x26,y26);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x27,y27);
    glVertex2i(x28,y28);
    glVertex2i(x29,y29);
    glVertex2i(x30,y30);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x31,y31);
    glVertex2i(x32,y32);
    glVertex2i(x33,y33);
    glVertex2i(x34,y34);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x35,y35);
    glVertex2i(x36,y36);
    glVertex2i(x37,y37);
    glVertex2i(x38,y38);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x39,y39);
    glVertex2i(x40,y40);
    glVertex2i(x41,y41);
    glVertex2i(x42,y42);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x43,y43);
    glVertex2i(x44,y44);
    glVertex2i(x45,y45);
    glVertex2i(x46,y46);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x47,y47);
    glVertex2i(x48,y48);
    glVertex2i(x49,y49);
    glVertex2i(x50,y50);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x51,y51);
    glVertex2i(x52,y52);
    glVertex2i(x53,y53);
    glVertex2i(x54,y54);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x55,y55);
    glVertex2i(x56,y56);
    glVertex2i(x57,y57);
    glVertex2i(x58,y58);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x59,y59);
    glVertex2i(x60,y60);
    glVertex2i(x61,y61);
    glVertex2i(x62,y62);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x63,y63);
    glVertex2i(x64,y64);
    glVertex2i(x65,y65);
    glVertex2i(x66,y66);
     glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(x67,y67);
    glVertex2i(x68,y68);
    glVertex2i(x69,y69);
    glVertex2i(x70,y70);

    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2i(x71,y71);
    glVertex2i(x72,y72);
    glVertex2i(x73,y73);

    glEnd();
    glFlush();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawHouse();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("House Shape");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
