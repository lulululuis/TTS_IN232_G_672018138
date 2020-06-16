#include <iostream>
#include <GL/freeglut.h>

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

	glColor3f(0.0, 0.0, 0.0);
	garis_atas();
	
	glColor3f(0.0, 0.0, 0.0);
	garis_tengah();
	
	glColor3f(0.0, 0.0, 0.0);
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