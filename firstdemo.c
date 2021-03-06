#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


char ch = '\n';
int win = 0;
int step = 0;


int ibspx = 200;
int ibspy = 1300;

int arr[9];


void drawString(int x, int y, char *string)
{
	char *c;
	glRasterPos2i(x, y);
	for (c = string; *c != '\0'; c++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
}

void frontscreen(void)
{
	//glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(0, 1500);
	glVertex2f(750, 750);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1500, 0);
	glVertex2f(1500, 1500);
	glVertex2f(750, 750);
	glEnd();

	glColor3f(0.0, 0.0, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(0, 1500);
	glVertex2f(1500, 1500);
	glVertex2f(750, 750);
	glEnd();

	glColor3f(.780, 0.0, 0.520);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(1500, 0);
	glVertex2f(750, 750);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawString(400, 1400, "PES INSTITUTE OF TECHNOLOGY");
	//drawString(100,1000,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	drawString(450, 1200, "A MINI PROJECT ON");
	drawString(350, 1100, "8 PUZZLE PROBLEM USING OPENGL");
	drawString(100, 950, "implemented in partial fulfillment of the requirements for the VI semester");
	drawString(200, 850, "CG LABORATORY WITH MINI PROJECT (15CSL68)");
	drawString(500, 700, "Bachelor Of Engineering ");
	drawString(720, 650, "IN");
	drawString(400, 600, "Computer Science And Engineering");
	drawString(500, 450, "For Academic Year: 2019");
	drawString(280, 380, "BY:");
	drawString(280, 300, "Anushka Vuppala");
	drawString(900, 300, "1PE16CS026");
	drawString(280, 250, "Anushri Nayak");
	drawString(900, 250, "1PE16CS027");
	drawString(500, 100, "PRESS ENTER TO START");
	glFlush();
}

void menuscreen()
{
	glClearColor(1.0, 0.34, 0.266, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	drawString(400, 1000, "LEVEL OF DIFFICULTY");
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(300, 900);
	glVertex2f(1000, 900);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	drawString(400, 750, "1) EASY");
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(450, 740);
	glVertex2f(478, 740);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	drawString(400, 550, "2) HARD");
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(450, 540);
	glVertex2f(479, 540);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	drawString(1000, 150, "Press 1 for Easy!");
	glColor3f(1.0, 1.0, 0.0);
	drawString(1000, 60, "Press 2 for Hard!");
	glFlush();
}
void input()
{
	arr[0] = 0;
	srand(time(NULL));
	int RandIndex = rand() % 10;
	switch (RandIndex)
	{
	case 0:
		//int arr1[9] = { 0,6,8,3,7,1,5,4,2 };
		arr[1] = 6; arr[2] = 8; arr[3] = 3; arr[4] = 7; arr[5] = 1; arr[6] = 5; arr[7] = 4; arr[8] = 2;
		break;
	case 1:
		//int arr2[9]= {0,4,5,2,1,7,6,3,8};
		arr[1] = 4; arr[2] = 5; arr[3] = 2; arr[4] = 1; arr[5] = 7; arr[6] = 6; arr[7] = 3; arr[8] = 8;
		break;
	case 2:
		//int arr3[9] = { 0,8,1,7,6,5,2,4,3 };
		arr[1] = 8; arr[2] = 1; arr[3] = 7; arr[4] = 6; arr[5] = 5; arr[6] = 2; arr[7] = 4; arr[8] = 3;
		break;
	case 3:
		//int arr4[9] = { 0,2,3,7,4,6,5,1,8 };
		arr[1] = 2; arr[2] = 3; arr[3] = 7; arr[4] = 4; arr[5] = 6; arr[6] = 5; arr[7] = 1; arr[8] = 8;
		break;
	case 4:
		//int arr5[9] = { 0,7,8,4,2,6,1,5,3 };
		arr[1] = 7; arr[2] = 8; arr[3] = 4; arr[4] = 2; arr[5] = 6; arr[6] = 1; arr[7] = 5; arr[8] = 3;
		break;
	case 5:
		//int arr6[9] = { 0,7,4,1,2,3,6,5,8 };
		arr[1] = 7; arr[2] = 4; arr[3] = 1; arr[4] = 2; arr[5] = 3; arr[6] = 6; arr[7] = 5; arr[8] = 8;
		break;
	case 6:
		//int arr7[9] = { 0,3,2,5,1,6,4,7,8 };
		arr[1] = 3; arr[2] = 2; arr[3] = 5; arr[4] = 1; arr[5] = 6; arr[6] = 4; arr[7] = 7; arr[8] = 8;
		break;
	case 7:
		//int arr8[9] = { 0,1,5,2,7,8,6,4,3 };
		arr[1] = 1; arr[2] = 5; arr[3] = 2; arr[4] = 7; arr[5] = 8; arr[6] = 6; arr[7] = 4; arr[8] = 3;
		break;
	case 8:
		//int arr9[9] = { 0,6,8,4,7,1,2,3,5 };
		arr[1] = 6; arr[2] = 8; arr[3] = 4; arr[4] = 7; arr[5] = 1; arr[6] = 2; arr[7] = 3; arr[8] = 5;
		break;
	case 9:
		//int arr10[9] = { 0,6,1,5,8,3,4,2,7 };
		arr[1] = 6; arr[2] = 1; arr[3] = 5; arr[4] = 8; arr[5] = 3; arr[6] = 4; arr[7] = 2; arr[8] = 7;
		break;
	}
}
void draw_block(int x, int y)
{
	for (int i = y; i > y - 320; i--)
	{
		glVertex2i(x, i);
		glVertex2i(x + 320, i);
	}
}



void setpixel()
{
	//input();
	glClearColor(1.0, 0.6, 0.7, 0.0);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(-1500, 1500, -1500, 1500);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(100, 1400);               // top line             
	glVertex2i(1400, 1400);

	glVertex2i(100, 1400);               // left line
	glVertex2i(100, 100);

	glVertex2i(1400, 1400);                // right line
	glVertex2i(1400, 100);

	glVertex2i(100, 100);      		// bottom line
	glVertex2i(1400, 100);
	glColor3f(0.0, 0.0, 0.0);
	int x = ibspx;
	int y = ibspy;
	int k = 1;
	for (int i = 0, x = ibspx; i < 3; i++, y = y - 380)
	{
		for (int j = 0; j < 3; j++, x = x + 380)
		{
			if (arr[k] != 0)
			{
				draw_block(x, y); k++;
			}

		}
		x = ibspx;
	}
	glColor3f(1.0, 1.0, 1.0);
	glEnd();

	glFlush();
}
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 1500, 0, 1500);
}


void display()
{
	frontscreen();
	glFlush();
}

void keys(unsigned char key, int x, int y)
{
	if (key == 13)
		menuscreen();
	if (key == '1')
	{
		input();
		setpixel();
	}
	if (key == '2')
	{
		arr[1] = 1; arr[2] = 3; arr[3] = 2; arr[4] = 4; arr[5] = 6; arr[6] = 5; arr[7] = 8; arr[8] = 7;
		setpixel();
	}
}
void mymenu(int id)
{
	switch (id)
	{
	case 1: exit(0);
	}
}
int main(int argc, char **argv)
{
	int win = 0;
	glutInit(&argc, argv);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("8 Block Puzzle");
	//	gluOrtho2d(0.0,800.0,0.0,600.0);
	glutCreateMenu(mymenu);
	glutAddMenuEntry("exit", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);

	glutMainLoop();
}