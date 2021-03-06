#include <iostream>
#include <GL/freeglut.h>

float x = 0.0f;
float y = 0.0f;
float x_delta = 3.0f;
float y_delta = 5.0f;

void ketupat0() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(25, 40);
	glVertex2f(0, 80);
	glEnd();
}

void ketupat0a() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 10);
	glVertex2f(19.5, 40);
	glVertex2f(0, 70);
	glEnd();
}

void ketupat0b() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 20);
	glVertex2f(13, 40);
	glVertex2f(0, 60);
	glEnd();
}

void ketupat0c() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 30);
	glVertex2f(6.5, 40);
	glVertex2f(0, 50);
	glEnd();
}

void ketupat0d() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 35);
	glVertex2f(4, 40);
	glVertex2f(0, 45);
	glEnd();
}

void ketupat0e() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 36.5);
	glVertex2f(3, 40);
	glVertex2f(0, 43.5);
	glEnd();
}

void ketupat1() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(25, 40);
	glVertex2f(50, 0);
	glEnd();
}

void ketupat1a() {
	glBegin(GL_POLYGON);
	glVertex2f(6.5, 0);
	glVertex2f(25, 30);
	glVertex2f(43.5, 0);
	glEnd();
}

void ketupat1b() {
	glBegin(GL_POLYGON);
	glVertex2f(13, 0);
	glVertex2f(25, 20);
	glVertex2f(37, 0);
	glEnd();
}

void ketupat1c() {
	glBegin(GL_POLYGON);
	glVertex2f(19.5, 0);
	glVertex2f(25, 10);
	glVertex2f(30.5, 0);
	glEnd();
}

void ketupat1d() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(22, 0);
	glVertex2f(25, 5);
	glVertex2f(28, 0);
	glEnd();
}

void ketupat1e() {
	glBegin(GL_POLYGON);
	glVertex2f(23, 0);
	glVertex2f(25, 3.5);
	glVertex2f(27, 0);
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

void ketupat2a() {
	glBegin(GL_POLYGON);
	glVertex2f(31.5, 40);
	glVertex2f(50, 10);
	glVertex2f(68.5, 40);
	glVertex2f(50, 70);
	glEnd();
}

void ketupat2b() {
	glBegin(GL_POLYGON);
	glVertex2f(38, 40);
	glVertex2f(50, 20);
	glVertex2f(62, 40);
	glVertex2f(50, 60);
	glEnd();
}

void ketupat2c() {
	glBegin(GL_POLYGON);
	glVertex2f(44.5, 40);
	glVertex2f(50, 30);
	glVertex2f(55.5, 40);
	glVertex2f(50, 50);
	glEnd();
}

void ketupat2d() {
	glBegin(GL_LINE_LOOP);
	glVertex2f(47, 40);
	glVertex2f(50, 35);
	glVertex2f(53, 40);
	glVertex2f(50, 45);
	glEnd();
}

void ketupat2e() {
	glBegin(GL_POLYGON);
	glVertex2f(48, 40);
	glVertex2f(50, 36.5);
	glVertex2f(52, 40);
	glVertex2f(50, 43.5);
	glEnd();
}

void ketupat3() {
	glBegin(GL_POLYGON);
	glVertex2f(50, 0);
	glVertex2f(75, 40);
	glVertex2f(100, 0);
	glEnd();
}

void ketupat3a() {
	glBegin(GL_POLYGON);
	glVertex2f(56.5, 0);
	glVertex2f(75, 30);
	glVertex2f(93.5, 0);
	glEnd();
}

void ketupat3b() {
	glBegin(GL_POLYGON);
	glVertex2f(63, 0);
	glVertex2f(75, 20);
	glVertex2f(87, 0);
	glEnd();
}

void ketupat3c() {
	glBegin(GL_POLYGON);
	glVertex2f(69.5, 0);
	glVertex2f(75, 10);
	glVertex2f(80.5, 0);
	glEnd();
}

void ketupat3d() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(72, 0);
	glVertex2f(75, 5);
	glVertex2f(78, 0);
	glEnd();
}

void ketupat3e() {
	glBegin(GL_POLYGON);
	glVertex2f(73, 0);
	glVertex2f(75, 3.5);
	glVertex2f(77, 0);
	glEnd();
}

void ketupat4() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 0);
	glVertex2f(75, 40);
	glVertex2f(100, 80);
	glEnd();
}

void ketupat4a() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 10);
	glVertex2f(81.5, 40);
	glVertex2f(100, 70);
	glEnd();
}

void ketupat4b() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 20);
	glVertex2f(88, 40);
	glVertex2f(100, 60);
	glEnd();
}

void ketupat4c() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 30);
	glVertex2f(94.5, 40);
	glVertex2f(100, 50);
	glEnd();
}

void ketupat4d() {
	glBegin(GL_LINE_STRIP);
	glVertex2f(100, 35);
	glVertex2f(97, 40);
	glVertex2f(100, 45);
	glEnd();
}

void ketupat4e() {
	glBegin(GL_POLYGON);
	glVertex2f(100, 36.5);
	glVertex2f(98, 40);
	glVertex2f(100, 43.5);
	glEnd();
}

void ketupat5() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 80);
	glVertex2f(25, 120);
	glVertex2f(0, 120);
	glEnd();
}

void ketupat5a() {
	glBegin(GL_POLYGON);
	glVertex2f(0, 90);
	glVertex2f(19.5, 120);
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

void ketupat6a() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 50);
	glVertex2f(6.5, 80);
	glVertex2f(25, 110);
	glVertex2f(43.5, 80);
	glEnd();
}

void ketupat6b() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 60);
	glVertex2f(13, 80);
	glVertex2f(25, 100);
	glVertex2f(37, 80);
	glEnd();
}

void ketupat6c() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 70);
	glVertex2f(19.5, 80);
	glVertex2f(25, 90);
	glVertex2f(30.5, 80);
	glEnd();
}

void ketupat6d() {
	glBegin(GL_LINE_LOOP);
	glVertex2f(25, 75);
	glVertex2f(22, 80);
	glVertex2f(25, 85);
	glVertex2f(28, 80);
	glEnd();
}

void ketupat6e() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 76.5);
	glVertex2f(23, 80);
	glVertex2f(25, 83.5);
	glVertex2f(27, 80);
	glEnd();
}

void ketupat7() {
	glBegin(GL_POLYGON);
	glVertex2f(25, 120);
	glVertex2f(50, 80);
	glVertex2f(75, 120);
	glEnd();
}

void ketupat7a() {
	glBegin(GL_POLYGON);
	glVertex2f(31.5, 120);
	glVertex2f(50, 90);
	glVertex2f(68.5, 120);
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

void ketupat8a() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 50);
	glVertex2f(56.5, 80);
	glVertex2f(75, 110);
	glVertex2f(93.5, 80);
	glEnd();
}

void ketupat8b() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 60);
	glVertex2f(63, 80);
	glVertex2f(75, 100);
	glVertex2f(87, 80);
	glEnd();
}

void ketupat8c() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 70);
	glVertex2f(69.5, 80);
	glVertex2f(75, 90);
	glVertex2f(80.5, 80);
	glEnd();
}

void ketupat8d() {
	glBegin(GL_LINE_LOOP);
	glVertex2f(75, 75);
	glVertex2f(72, 80);
	glVertex2f(75, 85);
	glVertex2f(78, 80);
	glEnd();
}

void ketupat8e() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 76.5);
	glVertex2f(73, 80);
	glVertex2f(75, 83.5);
	glVertex2f(77, 80);
	glEnd();
}

void ketupat9() {
	glBegin(GL_POLYGON);
	glVertex2f(75, 120);
	glVertex2f(100, 80);
	glVertex2f(100, 120);
	glEnd();
}

void ketupat9a() {
	glBegin(GL_POLYGON);
	glVertex2f(81.5, 120);
	glVertex2f(100, 90);
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

void garis() {
	glLineWidth(10);
	glColor3ub(0, 0, 0);
	garis_atas();
	garis_tengah();
	garis_bawah();

	glBegin(GL_LINE_STRIP);//0a
	glVertex2f(0, 10);
	glVertex2f(19.5, 40);
	glVertex2f(0, 70);
	glEnd();

	glBegin(GL_LINE_STRIP);//0b
	glVertex2f(0, 20);
	glVertex2f(13, 40);
	glVertex2f(0, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);//1a
	glVertex2f(6.5, 0);
	glVertex2f(25, 30);
	glVertex2f(43.5, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);//1b
	glVertex2f(13, 0);
	glVertex2f(25, 20);
	glVertex2f(37, 0);
	glEnd();

	glBegin(GL_LINE_LOOP);//2a
	glVertex2f(31.5, 40);
	glVertex2f(50, 10);
	glVertex2f(68.5, 40);
	glVertex2f(50, 70);
	glEnd();

	glBegin(GL_LINE_LOOP);//2b
	glVertex2f(38, 40);
	glVertex2f(50, 20);
	glVertex2f(62, 40);
	glVertex2f(50, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);//3a
	glVertex2f(56.5, 0);
	glVertex2f(75, 30);
	glVertex2f(93.5, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);//3b
	glVertex2f(63, 0);
	glVertex2f(75, 20);
	glVertex2f(87, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);//4a
	glVertex2f(100, 10);
	glVertex2f(81.5, 40);
	glVertex2f(100, 70);
	glEnd();

	glBegin(GL_LINE_STRIP);//4b
	glVertex2f(100, 20);
	glVertex2f(88, 40);
	glVertex2f(100, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);//5a
	glVertex2f(0, 90);
	glVertex2f(19.5, 120);
	glVertex2f(0, 120);
	glEnd();

	glBegin(GL_LINE_LOOP);//6a
	glVertex2f(25, 50);
	glVertex2f(6.5, 80);
	glVertex2f(25, 110);
	glVertex2f(43.5, 80);
	glEnd();

	glBegin(GL_LINE_LOOP);//6b
	glVertex2f(25, 60);
	glVertex2f(13, 80);
	glVertex2f(25, 100);
	glVertex2f(37, 80);
	glEnd();

	glBegin(GL_LINE_STRIP);//7a
	glVertex2f(31.5, 120);
	glVertex2f(50, 90);
	glVertex2f(68.5, 120);
	glEnd();

	glBegin(GL_LINE_LOOP);//8a
	glVertex2f(75, 50);
	glVertex2f(56.5, 80);
	glVertex2f(75, 110);
	glVertex2f(93.5, 80);
	glEnd();

	glBegin(GL_LINE_LOOP);//8b
	glVertex2f(75, 60);
	glVertex2f(63, 80);
	glVertex2f(75, 100);
	glVertex2f(87, 80);
	glEnd();

	glBegin(GL_LINE_STRIP);//9a
	glVertex2f(100, 90);
	glVertex2f(81.5, 120);
	glVertex2f(100, 120);
	glEnd();
}

void ketupat() {
	glColor3ub(255, 140, 0);
	ketupat0();
	ketupat2();
	ketupat4();
	ketupat5();
	ketupat7();
	ketupat9();

	glColor3ub(107, 142, 35);
	ketupat6();
	ketupat8();

	glColor3ub(255, 215, 0);
	ketupat1();
	ketupat3();
}

void ketupata() {
	glColor3ub(0, 206, 209);
	ketupat0a();
	ketupat2a();
	ketupat4a();

	glColor3ub(255, 0, 0);
	ketupat1a();
	ketupat3a();

	glColor3ub(255, 215, 0);
	ketupat6a();
	ketupat8a();

	glColor3ub(245, 245, 245);
	ketupat5a();
	ketupat7a();
	ketupat9a();
}

void ketupatb() {
	glColor3ub(245, 245, 245);
	ketupat0b();
	ketupat2b();
	ketupat4b();

	glColor3ub(154, 205, 50);
	ketupat1b();
	ketupat3b();

	glColor3ub(220, 20, 60);
	ketupat6b();
	ketupat8b();
}

void ketupatc() {
	glColor3ub(0, 0, 0);
	ketupat0c();
	ketupat1c();
	ketupat2c();
	ketupat3c();
	ketupat4c();
	ketupat6c();
	ketupat8c();
}

void ketupatd() {
	glLineWidth(2);
	glColor3ub(255, 0, 0);
	ketupat0d();
	ketupat2d();
	ketupat4d();

	glColor3ub(255, 105, 180);
	ketupat1d();
	ketupat3d();
	ketupat6d();
	ketupat8d();
}

void ketupate() {
	glColor3ub(255, 215, 0);
	ketupat0e();
	ketupat2e();
	ketupat4e();

	glColor3ub(0, 206, 209);
	ketupat6e();
	ketupat8e();
	ketupat1e();
	ketupat3e();
}

void ketupat_kecil() {
	glBegin(GL_POLYGON);//2a
	glVertex2f(50, 10);
	glVertex2f(48, 7.5);
	glVertex2f(50, 5);
	glVertex2f(52, 7.5);
	glEnd();

	glBegin(GL_POLYGON);//6c
	glVertex2f(25, 70);
	glVertex2f(27, 67.5);
	glVertex2f(25, 65);
	glVertex2f(23, 67.5);
	glEnd();

	glBegin(GL_POLYGON);//6c
	glVertex2f(25, 90);
	glVertex2f(27, 92.5);
	glVertex2f(25, 95);
	glVertex2f(23, 92.5);
	glEnd();

	glBegin(GL_POLYGON);//8c
	glVertex2f(75, 70);
	glVertex2f(77, 67.5);
	glVertex2f(75, 65);
	glVertex2f(73, 67.5);
	glEnd();

	glBegin(GL_POLYGON);//8c
	glVertex2f(75, 90);
	glVertex2f(77, 92.5);
	glVertex2f(75, 95);
	glVertex2f(73, 92.5);
	glEnd();
	
	glColor3ub(255, 105, 180);
	glBegin(GL_POLYGON);//2a
	glVertex2f(50, 70);
	glVertex2f(48, 72.5);
	glVertex2f(50, 75);
	glVertex2f(52, 72.5);
	glEnd();

	glBegin(GL_POLYGON);//2c
	glVertex2f(48, 27.5);
	glVertex2f(50, 30);
	glVertex2f(52, 27.5);
	glVertex2f(50, 25);
	glEnd();

	glBegin(GL_POLYGON);//2c
	glVertex2f(48, 52.5);
	glVertex2f(50, 55);
	glVertex2f(52, 52.5);
	glVertex2f(50, 50);
	glEnd();

	glBegin(GL_POLYGON);//1a
	glVertex2f(23, 32.5);
	glVertex2f(25, 30);
	glVertex2f(27, 32.5);
	glVertex2f(25, 35);
	glEnd();

	glBegin(GL_POLYGON);//3a
	glVertex2f(73, 32.5);
	glVertex2f(75, 30);
	glVertex2f(77, 32.5);
	glVertex2f(75, 35);
	glEnd();

	glBegin(GL_POLYGON);//4a
	glVertex2f(100, 10);
	glVertex2f(98, 7.5);
	glVertex2f(100, 5);
	glEnd();

	glBegin(GL_POLYGON);//4a
	glVertex2f(100, 75);
	glVertex2f(98, 72.5);
	glVertex2f(100, 70);
	glEnd();

	glBegin(GL_POLYGON);//4c
	glVertex2f(100, 30);
	glVertex2f(98, 27.5);
	glVertex2f(100, 25);
	glEnd();
	
	glBegin(GL_POLYGON);//4c
	glVertex2f(100, 55);
	glVertex2f(98, 52.5);
	glVertex2f(100, 50);
	glEnd();

	glBegin(GL_POLYGON);//5a
	glVertex2f(0, 90);
	glVertex2f(2, 87.5);
	glVertex2f(0, 85);
	glEnd();

	glBegin(GL_POLYGON);//6a
	glVertex2f(25, 50);
	glVertex2f(27, 47.5);
	glVertex2f(25, 45);
	glVertex2f(23, 47.5);
	glEnd();

	glBegin(GL_POLYGON);//8a
	glVertex2f(75, 50);
	glVertex2f(77, 47.5);
	glVertex2f(75, 45);
	glVertex2f(73, 47.5);
	glEnd();

	glBegin(GL_POLYGON);//9a
	glVertex2f(100, 85);
	glVertex2f(98, 87.5);
	glVertex2f(100, 90);
	glEnd();

	glBegin(GL_POLYGON);//0a
	glVertex2f(0, 10);
	glVertex2f(0, 5);
	glVertex2f(2, 7.5);
	glEnd();
	
	glBegin(GL_POLYGON);//0a
	glVertex2f(0, 70);
	glVertex2f(0, 75);
	glVertex2f(2, 72.5);
	glEnd();

	glBegin(GL_POLYGON);//0c
	glVertex2f(0, 30);
	glVertex2f(2, 27.5);
	glVertex2f(0, 25);
	glEnd();
	
	glBegin(GL_POLYGON);//0c
	glVertex2f(0, 55);
	glVertex2f(2, 52.5);
	glVertex2f(0, 50);
	glEnd();

	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);//2b
	glVertex2f(48, 17.5);
	glVertex2f(50, 20);
	glVertex2f(52, 17.5);
	glVertex2f(50, 15);
	glEnd();

	glBegin(GL_POLYGON);//2b
	glVertex2f(48, 62.5);
	glVertex2f(50, 65);
	glVertex2f(52, 62.5);
	glVertex2f(50, 60);
	glEnd();

	glBegin(GL_POLYGON);//4b
	glVertex2f(100, 20);
	glVertex2f(98, 17.5);
	glVertex2f(100, 15);
	glEnd();
	
	glBegin(GL_POLYGON);//4b
	glVertex2f(100, 65);
	glVertex2f(98, 62.5);
	glVertex2f(100, 60);
	glEnd();

	glColor3ub(107, 142, 35);
	glBegin(GL_POLYGON);//1b
	glVertex2f(23, 22.5);
	glVertex2f(25, 20);
	glVertex2f(27, 22.5);
	glVertex2f(25, 25);
	glEnd();

	glBegin(GL_POLYGON);//3b
	glVertex2f(73, 22.5);
	glVertex2f(75, 20);
	glVertex2f(77, 22.5);
	glVertex2f(75, 25);
	glEnd();

	glBegin(GL_POLYGON);//7a
	glVertex2f(48, 87.5);
	glVertex2f(50, 90);
	glVertex2f(52, 87.5);
	glVertex2f(50, 85);
	glEnd();

	glColor3ub(255, 165, 0);
	glBegin(GL_POLYGON);//1c
	glVertex2f(23, 12.5);
	glVertex2f(25, 10);
	glVertex2f(27, 12.5);
	glVertex2f(25, 15);
	glEnd();

	glBegin(GL_POLYGON);//3c
	glVertex2f(73, 12.5);
	glVertex2f(75, 10);
	glVertex2f(77, 12.5);
	glVertex2f(75, 15);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);//6b
	glVertex2f(25, 60);
	glVertex2f(27, 57.5);
	glVertex2f(25, 55);
	glVertex2f(23, 57.5);
	glEnd();

	glBegin(GL_POLYGON);//8b
	glVertex2f(75, 60);
	glVertex2f(77, 57.5);
	glVertex2f(75, 55);
	glVertex2f(73, 57.5);
	glEnd();

	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);//0b
	glVertex2f(0, 20);
	glVertex2f(2, 17.5);
	glVertex2f(0, 15);
	glEnd();
	
	glBegin(GL_POLYGON);//0b
	glVertex2f(0, 65);
	glVertex2f(2, 62.5);
	glVertex2f(0, 60);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);//0a
	glVertex2f(22, 42.5);
	glVertex2f(20.5, 40);
	glVertex2f(22, 37.5);
	glVertex2f(23.5, 40);
	glEnd();

	glBegin(GL_POLYGON);//0b
	glVertex2f(15.5, 42.5);
	glVertex2f(14, 40);
	glVertex2f(15.5, 37.5);
	glVertex2f(17, 40);
	glEnd();

	glBegin(GL_POLYGON);//4a
	glVertex2f(79, 42.5);
	glVertex2f(80.5, 40);
	glVertex2f(79, 37.5);
	glVertex2f(77.5, 40);
	glEnd();

	glBegin(GL_POLYGON);//4b
	glVertex2f(85.5, 42.5);
	glVertex2f(87, 40);
	glVertex2f(85.5, 37.5);
	glVertex2f(84, 40);
	glEnd();
}

void garis_ketupat_kecil() {
	glColor3ub(0, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);//0a
	glVertex2f(0, 10);
	glVertex2f(2, 7.5);
	glVertex2f(0, 5);
	glEnd();

	glBegin(GL_LINE_STRIP);//0a
	glVertex2f(0, 70);
	glVertex2f(2, 72.5);
	glVertex2f(0, 75);
	glEnd();

	glBegin(GL_LINE_STRIP);//0b
	glVertex2f(0, 20);
	glVertex2f(2, 17.5);
	glVertex2f(0, 15);
	glEnd();

	glBegin(GL_LINE_STRIP);//0b
	glVertex2f(0, 65);
	glVertex2f(2, 62.5);
	glVertex2f(0, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);//0c
	glVertex2f(0, 30);
	glVertex2f(2, 27.5);
	glVertex2f(0, 25);
	glEnd();

	glBegin(GL_LINE_STRIP);//0c
	glVertex2f(0, 55);
	glVertex2f(2, 52.5);
	glVertex2f(0, 50);
	glEnd();

	glBegin(GL_LINE_LOOP);//1a
	glVertex2f(23, 32.5);
	glVertex2f(25, 30);
	glVertex2f(27, 32.5);
	glVertex2f(25, 35);
	glEnd();

	glBegin(GL_LINE_LOOP);//1b
	glVertex2f(23, 22.5);
	glVertex2f(25, 20);
	glVertex2f(27, 22.5);
	glVertex2f(25, 25);
	glEnd();

	glBegin(GL_LINE_LOOP);//1c
	glVertex2f(23, 12.5);
	glVertex2f(25, 10);
	glVertex2f(27, 12.5);
	glVertex2f(25, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);//2a
	glVertex2f(50, 10);
	glVertex2f(48, 7.5);
	glVertex2f(50, 5);
	glVertex2f(52, 7.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//2a
	glVertex2f(50, 70);
	glVertex2f(48, 72.5);
	glVertex2f(50, 75);
	glVertex2f(52, 72.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//2b
	glVertex2f(48, 17.5);
	glVertex2f(50, 20);
	glVertex2f(52, 17.5);
	glVertex2f(50, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);//2b
	glVertex2f(48, 62.5);
	glVertex2f(50, 65);
	glVertex2f(52, 62.5);
	glVertex2f(50, 60);
	glEnd();

	glBegin(GL_LINE_LOOP);//2c
	glVertex2f(48, 27.5);
	glVertex2f(50, 30);
	glVertex2f(52, 27.5);
	glVertex2f(50, 25);
	glEnd();

	glBegin(GL_LINE_LOOP);//2c
	glVertex2f(48, 52.5);
	glVertex2f(50, 55);
	glVertex2f(52, 52.5);
	glVertex2f(50, 50);
	glEnd();

	glBegin(GL_LINE_LOOP);//3a
	glVertex2f(73, 32.5);
	glVertex2f(75, 30);
	glVertex2f(77, 32.5);
	glVertex2f(75, 35);
	glEnd();

	glBegin(GL_LINE_LOOP);//3b
	glVertex2f(73, 22.5);
	glVertex2f(75, 20);
	glVertex2f(77, 22.5);
	glVertex2f(75, 25);
	glEnd();

	glBegin(GL_LINE_LOOP);//3c
	glVertex2f(73, 12.5);
	glVertex2f(75, 10);
	glVertex2f(77, 12.5);
	glVertex2f(75, 15);
	glEnd();

	glBegin(GL_LINE_STRIP);//4a
	glVertex2f(100, 10);
	glVertex2f(98, 7.5);
	glVertex2f(100, 5);
	glEnd();

	glBegin(GL_LINE_STRIP);//4a
	glVertex2f(100, 75);
	glVertex2f(98, 72.5);
	glVertex2f(100, 70);
	glEnd();

	glBegin(GL_LINE_STRIP);//4b
	glVertex2f(100, 20);
	glVertex2f(98, 17.5);
	glVertex2f(100, 15);
	glEnd();

	glBegin(GL_LINE_STRIP);//4b
	glVertex2f(100, 65);
	glVertex2f(98, 62.5);
	glVertex2f(100, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);//4c
	glVertex2f(100, 30);
	glVertex2f(98, 27.5);
	glVertex2f(100, 25);
	glEnd();

	glBegin(GL_LINE_STRIP);//4c
	glVertex2f(100, 55);
	glVertex2f(98, 52.5);
	glVertex2f(100, 50);
	glEnd();

	glBegin(GL_LINE_STRIP);//5a
	glVertex2f(0, 90);
	glVertex2f(2, 87.5);
	glVertex2f(0, 85);
	glEnd();

	glBegin(GL_LINE_LOOP);//6a
	glVertex2f(25, 50);
	glVertex2f(27, 47.5);
	glVertex2f(25, 45);
	glVertex2f(23, 47.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//6b
	glVertex2f(25, 60);
	glVertex2f(27, 57.5);
	glVertex2f(25, 55);
	glVertex2f(23, 57.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//6c
	glVertex2f(25, 70);
	glVertex2f(27, 67.5);
	glVertex2f(25, 65);
	glVertex2f(23, 67.5);
	glEnd();
	
	glBegin(GL_LINE_LOOP);//6c
	glVertex2f(25, 90);
	glVertex2f(27, 92.5);
	glVertex2f(25, 95);
	glVertex2f(23, 92.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//7a
	glVertex2f(48, 87.5);
	glVertex2f(50, 90);
	glVertex2f(52, 87.5);
	glVertex2f(50, 85);
	glEnd();

	glBegin(GL_LINE_LOOP);//8a
	glVertex2f(75, 50);
	glVertex2f(77, 47.5);
	glVertex2f(75, 45);
	glVertex2f(73, 47.5);
	glEnd();	
	
	glBegin(GL_LINE_LOOP);//8b
	glVertex2f(75, 60);
	glVertex2f(77, 57.5);
	glVertex2f(75, 55);
	glVertex2f(73, 57.5);
	glEnd();

	glBegin(GL_LINE_LOOP);//8c
	glVertex2f(75, 70);
	glVertex2f(77, 67.5);
	glVertex2f(75, 65);
	glVertex2f(73, 67.5);
	glEnd();
	
	glBegin(GL_LINE_LOOP);//8c
	glVertex2f(75, 90);
	glVertex2f(77, 92.5);
	glVertex2f(75, 95);
	glVertex2f(73, 92.5);
	glEnd();

	glBegin(GL_LINE_STRIP);//9a
	glVertex2f(100, 85);
	glVertex2f(98, 87.5);
	glVertex2f(100, 90);
	glEnd();
}

void garis_motif0() {
	for (int i = 0; i <= 1 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(4.5 - x, 40 - y);
		glVertex2f(7.5 - x, 35 - y);
		glVertex2f(6 - x, 32.5 - y);
		glVertex2f(4.5 - x, 35 - y);
		glVertex2f(5.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 3 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(11.5 - x, 40 - y);
		glVertex2f(14.5 - x, 35 - y);
		glVertex2f(13 - x, 32.5 - y);
		glVertex2f(11.5 - x, 35 - y);
		glVertex2f(12.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 5 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(18.5 - x, 40 - y);
		glVertex2f(21.5 - x, 35 - y);
		glVertex2f(20 - x, 32.5 - y);
		glVertex2f(18.5 - x, 35 - y);
		glVertex2f(19.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(5.5 - x, 40 + y);
		glVertex2f(8.5 - x, 45 + y);
		glVertex2f(7 - x, 47.5 + y);
		glVertex2f(5.5 - x, 45 + y);
		glVertex2f(6.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(12.5 - x, 40 + y);
		glVertex2f(15.5 - x, 45 + y);
		glVertex2f(14 - x, 47.5 + y);
		glVertex2f(12.5 - x, 45 + y);
		glVertex2f(13.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(18.5 - x, 40 + y);
		glVertex2f(21.5 - x, 45 + y);
		glVertex2f(20 - x, 47.5 + y);
		glVertex2f(18.5 - x, 45 + y);
		glVertex2f(19.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif1() {
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(20.5 + x, 0 + y);
		glVertex2f(17.5 + x, 5 + y);
		glVertex2f(19 + x, 7.5 + y);
		glVertex2f(20.5 + x, 5 + y);
		glVertex2f(19.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	
	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(13.5 + x, 0 + y);
		glVertex2f(10.5 + x, 5 + y);
		glVertex2f(12 + x, 7.5 + y);
		glVertex2f(13.5 + x, 5 + y);
		glVertex2f(12.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(6.5 + x, 0 + y);
		glVertex2f(3.5 + x, 5 + y);
		glVertex2f(5 + x, 7.5 + y);
		glVertex2f(6.5 + x, 5 + y);
		glVertex2f(5.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(29.5 - x, 0 + y);
		glVertex2f(32.5 - x, 5 + y);
		glVertex2f(31 - x, 7.5 + y);
		glVertex2f(29.5 - x, 5 + y);
		glVertex2f(30.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	
	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(36.5 - x, 0 + y);
		glVertex2f(39.5 - x, 5 + y);
		glVertex2f(38 - x, 7.5 + y);
		glVertex2f(36.5 - x, 5 + y);
		glVertex2f(37.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(43.5 - x, 0 + y);
		glVertex2f(46.5 - x, 5 + y);
		glVertex2f(45 - x, 7.5 + y);
		glVertex2f(43.5 - x, 5 + y);
		glVertex2f(44.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif2() {
	x = 0;
	y = 0;
	for (int i = 0; i <= 1 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(54.5 - x, 40 - y);
		glVertex2f(57.5 - x, 35 - y);
		glVertex2f(56 - x, 32.5 - y);
		glVertex2f(54.5 - x, 35 - y);
		glVertex2f(55.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 3 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(61.5 - x, 40 - y);
		glVertex2f(64.5 - x, 35 - y);
		glVertex2f(63 - x, 32.5 - y);
		glVertex2f(61.5 - x, 35 - y);
		glVertex2f(62.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 5 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(68.5 - x, 40 - y);
		glVertex2f(71.5 - x, 35 - y);
		glVertex2f(70 - x, 32.5 - y);
		glVertex2f(68.5 - x, 35 - y);
		glVertex2f(69.5 - x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;
	for (int i = 0; i <= 1 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(45.5 + x, 40 - y);
		glVertex2f(42.5 + x, 35 - y);
		glVertex2f(44 + x, 32.5 - y);
		glVertex2f(45.5 + x, 35 - y);
		glVertex2f(44.5 + x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 3 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(38.5 + x, 40 - y);
		glVertex2f(35.5 + x, 35 - y);
		glVertex2f(37 + x, 32.5 - y);
		glVertex2f(38.5 + x, 35 - y);
		glVertex2f(37.5 + x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 5 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(31.5 + x, 40 - y);
		glVertex2f(28.5 + x, 35 - y);
		glVertex2f(30 + x, 32.5 - y);
		glVertex2f(31.5 + x, 35 - y);
		glVertex2f(30.5 + x, 37 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;
	for (int i = 0; i <= 1 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(45.5 + x, 40 + y);
		glVertex2f(42.5 + x, 45 + y);
		glVertex2f(44 + x, 47.5 + y);
		glVertex2f(45.5 + x, 45 + y);
		glVertex2f(44.5 + x, 43 + y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 3 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(38.5 + x, 40 + y);
		glVertex2f(35.5 + x, 45 + y);
		glVertex2f(37 + x, 47.5 + y);
		glVertex2f(38.5 + x, 45 + y);
		glVertex2f(37.5 + x, 43 + y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 5 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(31.5 + x, 40 + y);
		glVertex2f(28.5 + x, 45 + y);
		glVertex2f(30 + x, 47.5 + y);
		glVertex2f(31.5 + x, 45 + y);
		glVertex2f(30.5 + x, 43 + y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(54.5 - x, 40 + y);
		glVertex2f(57.5 - x, 45 + y);
		glVertex2f(56 - x, 47.5 + y);
		glVertex2f(54.5 - x, 45 + y);
		glVertex2f(55.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(61.5 - x, 40 + y);
		glVertex2f(64.5 - x, 45 + y);
		glVertex2f(63 - x, 47.5 + y);
		glVertex2f(61.5 - x, 45 + y);
		glVertex2f(62.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(68.5 - x, 40 + y);
		glVertex2f(71.5 - x, 45 + y);
		glVertex2f(70 - x, 47.5 + y);
		glVertex2f(68.5 - x, 45 + y);
		glVertex2f(69.5 - x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif3() {
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(70.5 + x, 0 + y);
		glVertex2f(67.5 + x, 5 + y);
		glVertex2f(69 + x, 7.5 + y);
		glVertex2f(70.5 + x, 5 + y);
		glVertex2f(69.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(63.5 + x, 0 + y);
		glVertex2f(60.5 + x, 5 + y);
		glVertex2f(62 + x, 7.5 + y);
		glVertex2f(63.5 + x, 5 + y);
		glVertex2f(62.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(56.5 + x, 0 + y);
		glVertex2f(53.5 + x, 5 + y);
		glVertex2f(55 + x, 7.5 + y);
		glVertex2f(56.5 + x, 5 + y);
		glVertex2f(55.5 + x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(79.5 - x, 0 + y);
		glVertex2f(82.5 - x, 5 + y);
		glVertex2f(81 - x, 7.5 + y);
		glVertex2f(79.5 - x, 5 + y);
		glVertex2f(80.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(86.5 - x, 0 + y);
		glVertex2f(89.5 - x, 5 + y);
		glVertex2f(88 - x, 7.5 + y);
		glVertex2f(86.5 - x, 5 + y);
		glVertex2f(87.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(93.5 - x, 0 + y);
		glVertex2f(96.5 - x, 5 + y);
		glVertex2f(95 - x, 7.5 + y);
		glVertex2f(93.5 - x, 5 + y);
		glVertex2f(94.5 - x, 3 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif4() {
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(95.5 + x, 40 - y);
		glVertex2f(92.5 + x, 35 - y);
		glVertex2f(94 + x, 32.5 - y);
		glVertex2f(95.5 + x, 35 - y);
		glVertex2f(94.5 + x, 37 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(88.5 + x, 40 - y);
		glVertex2f(85.5 + x, 35 - y);
		glVertex2f(87 + x, 32.5 - y);
		glVertex2f(88.5 + x, 35 - y);
		glVertex2f(87.5 + x, 37 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(81.5 + x, 40 - y);
		glVertex2f(78.5 + x, 35 - y);
		glVertex2f(80 + x, 32.5 - y);
		glVertex2f(81.5 + x, 35 - y);
		glVertex2f(80.5 + x, 37 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(95.5 + x, 40 + y);
		glVertex2f(92.5 + x, 45 + y);
		glVertex2f(94 + x, 47.5 + y);
		glVertex2f(95.5 + x, 45 + y);
		glVertex2f(94.5 + x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(88.5 + x, 40 + y);
		glVertex2f(85.5 + x, 45 + y);
		glVertex2f(87 + x, 47.5 + y);
		glVertex2f(88.5 + x, 45 + y);
		glVertex2f(87.5 + x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(81.5 + x, 40 + y);
		glVertex2f(78.5 + x, 45 + y);
		glVertex2f(80 + x, 47.5 + y);
		glVertex2f(81.5 + x, 45 + y);
		glVertex2f(80.5 + x, 43 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif6() {
	x = 0;
	y = 0;

	for (int i = 0; i <= 1 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(29.5 - x, 80 - y);
		glVertex2f(32.5 - x, 75 - y);
		glVertex2f(31 - x, 72.5 - y);
		glVertex2f(29.5 - x, 75 - y);
		glVertex2f(30.5 - x, 77 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 3 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(36.5 - x, 80 - y);
		glVertex2f(39.5 - x, 75 - y);
		glVertex2f(38 - x, 72.5 - y);
		glVertex2f(36.5 - x, 75 - y);
		glVertex2f(37.5 - x, 77 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;

	for (int i = 0; i <= 5 ; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(43.5 - x, 80 - y);
		glVertex2f(46.5 - x, 75 - y);
		glVertex2f(45 - x, 72.5 - y);
		glVertex2f(43.5 - x, 75 - y);
		glVertex2f(44.5 - x, 77 - y);
		glEnd();
		
		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(20.5 + x, 80 - y);
		glVertex2f(17.5 + x, 75 - y);
		glVertex2f(19 + x, 72.5 - y);
		glVertex2f(20.5 + x, 75 - y);
		glVertex2f(19.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(13.5 + x, 80 - y);
		glVertex2f(10.5 + x, 75 - y);
		glVertex2f(12 + x, 72.5 - y);
		glVertex2f(13.5 + x, 75 - y);
		glVertex2f(12.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(6.5 + x, 80 - y);
		glVertex2f(3.5 + x, 75 - y);
		glVertex2f(5 + x, 72.5 - y);
		glVertex2f(6.5 + x, 75 - y);
		glVertex2f(5.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(20.5 + x, 80 + y);
		glVertex2f(17.5 + x, 85 + y);
		glVertex2f(19 + x, 87.5 + y);
		glVertex2f(20.5 + x, 85 + y);
		glVertex2f(19.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(13.5 + x, 80 + y);
		glVertex2f(10.5 + x, 85 + y);
		glVertex2f(12 + x, 87.5 + y);
		glVertex2f(13.5 + x, 85 + y);
		glVertex2f(12.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(6.5 + x, 80 + y);
		glVertex2f(3.5 + x, 85 + y);
		glVertex2f(5 + x, 87.5 + y);
		glVertex2f(6.5 + x, 85 + y);
		glVertex2f(5.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(29.5 - x, 80 + y);
		glVertex2f(32.5 - x, 85 + y);
		glVertex2f(31 - x, 87.5 + y);
		glVertex2f(29.5 - x, 85 + y);
		glVertex2f(30.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(36.5 - x, 80 + y);
		glVertex2f(39.5 - x, 85 + y);
		glVertex2f(38 - x, 87.5 + y);
		glVertex2f(36.5 - x, 85 + y);
		glVertex2f(37.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(43.5 - x, 80 + y);
		glVertex2f(46.5 - x, 85 + y);
		glVertex2f(45 - x, 87.5 + y);
		glVertex2f(43.5 - x, 85 + y);
		glVertex2f(44.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif8() {
	x = 0;
	y = 0;

	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(79.5 - x, 80 - y);
		glVertex2f(82.5 - x, 75 - y);
		glVertex2f(81 - x, 72.5 - y);
		glVertex2f(79.5 - x, 75 - y);
		glVertex2f(80.5 - x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(86.5 - x, 80 - y);
		glVertex2f(89.5 - x, 75 - y);
		glVertex2f(88 - x, 72.5 - y);
		glVertex2f(86.5 - x, 75 - y);
		glVertex2f(87.5 - x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(93.5 - x, 80 - y);
		glVertex2f(96.5 - x, 75 - y);
		glVertex2f(95 - x, 72.5 - y);
		glVertex2f(93.5 - x, 75 - y);
		glVertex2f(94.5 - x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(70.5 + x, 80 - y);
		glVertex2f(67.5 + x, 75 - y);
		glVertex2f(69 + x, 72.5 - y);
		glVertex2f(70.5 + x, 75 - y);
		glVertex2f(69.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(63.5 + x, 80 - y);
		glVertex2f(60.5 + x, 75 - y);
		glVertex2f(62 + x, 72.5 - y);
		glVertex2f(63.5 + x, 75 - y);
		glVertex2f(62.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(56.5 + x, 80 - y);
		glVertex2f(53.5 + x, 75 - y);
		glVertex2f(55 + x, 72.5 - y);
		glVertex2f(56.5 + x, 75 - y);
		glVertex2f(55.5 + x, 77 - y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
	
	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(70.5 + x, 80 + y);
		glVertex2f(67.5 + x, 85 + y);
		glVertex2f(69 + x, 87.5 + y);
		glVertex2f(70.5 + x, 85 + y);
		glVertex2f(69.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(63.5 + x, 80 + y);
		glVertex2f(60.5 + x, 85 + y);
		glVertex2f(62 + x, 87.5 + y);
		glVertex2f(63.5 + x, 85 + y);
		glVertex2f(62.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(56.5 + x, 80 + y);
		glVertex2f(53.5 + x, 85 + y);
		glVertex2f(55 + x, 87.5 + y);
		glVertex2f(56.5 + x, 85 + y);
		glVertex2f(55.5 + x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;
	for (int i = 0; i <= 1; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(79.5 - x, 80 + y);
		glVertex2f(82.5 - x, 85 + y);
		glVertex2f(81 - x, 87.5 + y);
		glVertex2f(79.5 - x, 85 + y);
		glVertex2f(80.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 3; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(86.5 - x, 80 + y);
		glVertex2f(89.5 - x, 85 + y);
		glVertex2f(88 - x, 87.5 + y);
		glVertex2f(86.5 - x, 85 + y);
		glVertex2f(87.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}

	x = 0;
	y = 0;

	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2f(93.5 - x, 80 + y);
		glVertex2f(96.5 - x, 85 + y);
		glVertex2f(95 - x, 87.5 + y);
		glVertex2f(93.5 - x, 85 + y);
		glVertex2f(94.5 - x, 83 + y);
		glEnd();

		x += x_delta;
		y += y_delta;
	}
}

void garis_motif() {
	glLineWidth(3);
	garis_motif0();
	garis_motif1();
	garis_motif2();
	garis_motif3();
	garis_motif4();
	garis_motif6();
	garis_motif8();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	ketupat();
	ketupata();
	ketupatb();
	ketupatc();
	ketupatd();
	ketupate();
	ketupat_kecil();
	garis();
	garis_motif();
	garis_ketupat_kecil();

	x = 0;
	y = 0;
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
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