#ifndef LABEL_H
#define LABEL_H
#include"Window.h"
#include<string>
#include<string.h>
#include<iostream>

class label :public window
{
protected:
	char* text;
public:
	label();
	label(char* text);
	char* getLabel();
	virtual void printLabel();
	~label();
};
#endif