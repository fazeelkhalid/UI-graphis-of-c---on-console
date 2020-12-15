#pragma once
#include<iostream>
#include"Label.h"

using namespace std;
class button :public label {
public:
	button():label(){}
	button(char *str): label(str){}
	virtual void printButton() {
		std::cout << "[ " << text << " ]";
	} 
};

