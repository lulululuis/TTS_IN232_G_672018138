#include <iostream>
#include <GL/freeglut.h>

void ketupat0() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(25, 40);
	glVertex2f(0, 80);
	glEnd();
}

void ketupat1() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(25, 40);
	glVertex2f(50, 0);
	glEnd();
}

void ketupat2() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 40);
	glVertex2f(50, 0);
	glVertex2f(75, 40);
	glVertex2f(50, 80);
	glEnd();
}

void ketupat3() {
	glBegin(GL_POLYGON);
	glVertex2f(50, 0);
	glVertex2f(75, 40);
	glVertex2f(100, 0);
	glEnd();
}

void ketupat4() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 0);
	glVertex2f(75, 40);
	glVertex2f(100, 80);
	glEnd();
}

void ketupat5() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 80);
	glVertex2f(25, 120);
	glVertex2f(0, 120);
	glEnd();
}

void ketupat6() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 40);
	glVertex2f(0, 80);
	glVertex2f(25, 120);
	glVertex2f(50, 80);
	glEnd();
}

void ketupat7() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 120);
	glVertex2f(50, 80);
	glVertex2f(75, 120);
	glEnd();
}

void ketupat8() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 40);
	glVertex2f(50, 80);
	glVertex2f(75, 120);
	glVertex2f(100, 80);
	glEnd();
}

void ketupat9() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 120);
	glVertex2f(100, 80);
	glVertex2f(100, 120);
	glEnd();
}

void garis_atas() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(25, 40);
	glVertex2f(50, 0);
	glVertex2f(75, 40);
	glVertex2f(100, 0);
	glEnd();
}

void garis_tengah() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 80);
	glVertex2f(25, 40);
	glVertex2f(50, 80);
	glVertex2f(75, 40);
	glVertex2f(100, 80);
	glEnd();
}

void garis_bawah() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 80);
	glVertex2f(25, 120);
	glVertex2f(50, 80);
	glVertex2f(75, 120);
	glVertex2f(100, 80);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3ub(255, 69, 0);
	ketupat0();
	ketupat2();
	ketupat4();
	ketupat5();
	ketupat7();
	ketupat9();

	glColor3ub(154, 205, 50);
	ketupat6();
	ketupat8();

	glColor3ub(255, 215, 0);
	ketupat1();
	ketupat3();

	glColor3ub(0, 0, 0);
	garis_atas();
	
	glColor3ub(0, 0, 0);
	garis_tengah();
	
	glColor3ub(0, 0, 0);
	garis_bawah();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glLineWidth(10);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 100.0, 0.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Motif Buna");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}