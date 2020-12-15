#include "Window.h"
#include<iostream>
using namespace std;

window::window()
{
	height = 0;
	width = 0;
	title = NULL;
}
window::window(int h, int w, char* t)
{
	height = h;
	width = w;
	title = new char[strlen(t) + 1];
	int i = 0;
	for (; i <= strlen(t); i++) {
		title[i] = t[i];
	}

}
void window::printUpperLine() {
	int size = strlen(title);
	int tempWidth = (width - size)/2;
//____________|dfsdeeeee|
	setxy(0, 0); cout << char(218);
	if (tempWidth % 2) {
		for (int i = 1; i < tempWidth; i++) {
			setxy(i, 0); cout << char(196);
		}
	}
	else {
		for (int i = 1; i < tempWidth - 1; i++) {
			setxy(i, 0); cout << char(196);
		}
	}

	cout << char(182);
	cout << title;
	cout << char(199);
	
	for (int i = tempWidth + size+2; i < width; i++) {
		setxy(i, 0); cout << char(196);
	}
	setxy(width - 1, 0); cout << char(191);
	
}


void window::printBottomLines()
{
	setxy(0,height); cout << char(192);
	for (int i = 1; i < width; i++) {
		setxy(i, height); cout << char(196);
	}
	setxy(width-1,height); cout << char(217);
}
void window::leftLine() {
	for (int i = 1; i < height; i++) {
		setxy(0, i); cout << char(179);
	}
}
void window::rightLine() {
	for (int i = 1; i < height; i++) {
		setxy(width - 1, i); cout << char(179);
	}
}
