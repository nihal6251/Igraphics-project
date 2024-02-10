#include "iGraphics.h"

int i = 0;
int a = 0;
int r = 0;
int bfr = 0;
/*
	function iDraw() is called again and again by the system.

	*/
int x, y;

void homescreen()
{
	iShowBMP(0, 0, "Homepage.bmp");
}
void rooms1()
{

	iShowBMP(0, 0, "rooms1.bmp");
}
void rooms2()
{

	iShowBMP(0, 0, "rooms2.bmp");
}
void homefromroom()
{

	iShowBMP(0, 0, "Homepage.bmp");
}
void hometorestaurant()
{
	iShowBMP(0, 0, "restaurant.bmp");
}
void type()
{
	iText(489, 360, "Nihal", GLUT_BITMAP_TIMES_ROMAN_24);
}

void iDraw()
{
	// place your drawing codes here
	iClear();
	homescreen();
	if (i == 1)
	{
		rooms1();
	}
	if (i == 2)
	{
		rooms2();
	}
	if (i == 3)
	{
		homefromroom();
	}
	if (i == 4)
	{
		hometorestaurant();
	}
	if (i == 5)
	{
		homescreen();
	}
	
	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 966 && mx <= 1160 && my >= 505 && my <= 552) // rooms 1
		{
			i = 1;
			a = 1;
			
		}
		
		if (a == 1 && mx >= 724 && mx <= 967 && my >= 53 && my <= 120) // rooms 2
		{
			i = 2;
			a = 2;
		}

		if (a == 2 && mx >= 472 && mx <= 727 && my >= 33 && my <= 97) // homefromroom
		{
			i = 3;
			a = 0;
		}
		if (mx >= 963 && mx <= 1161 && my >= 313 && my <= 367) // hometorestaurant
		{
			i = 4;
			r = 1;
		}
		if (r == 1 && mx >= 498 && mx <= 754 && my >= 39 && my <= 101) // hometorestaurant
		{
			i = 5;
			r = 0;
		}

		// place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	if (key == '\n')
	{
		type();
	}
	// place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	// place your codes for other keys here
}

int main()
{
	// place your own initialization codes here.
	iInitialize(1200, 700, "Hotel management");
	return 0;
}
