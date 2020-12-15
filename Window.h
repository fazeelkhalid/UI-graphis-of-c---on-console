#ifndef WINDOW_H
#define WINDOW_H
#include<cstring>
#include<conio.h>
#include<Windows.h>
#include <time.h>


class window
{
private:
	int height;
	int width;
	char* title;
public:
	window();
	window(int h, int w, char* t);
	BOOL setxy(int x, int y) {// this will set cursor position
		COORD c = { x,y };
		return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	}
	void printUpperLine();
	void leftLine();
	void rightLine();
	void printBottomLines();
	
	


};
#endif