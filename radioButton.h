#define radioButton_h
#include<iostream>
#include"Button.h"
#include<string>
using namespace std;

class radioButton : public button {
private:
	char* str;
public:
	radioButton():button() {}
	radioButton(char* str,char*str1):button(str1) {
		this->str = new char[strlen(str) + 1];
		int i = 0;
		for (; i <= strlen(str); i++) {
			this->str[i] = str[i];
		}
	}
	void PrintRButton() { // print radio print 
		this->printButton();
		std::cout << "\t" << str <<endl;
	}
	bool compare(char*ptr1, char*ptr2) {
		if (strlen(ptr1) == strlen(ptr2)) {
			for (int i = 0; i < strlen(ptr1); i++) {
				if (ptr1[i] != ptr2[i]) {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
		return 1;
	}
	void selectButton(char* c) { 
		if (!compare(str, c)) {
			char tempc[] = " ";
			button temp(tempc);
			temp.printButton(); cout << str;
		}
		else {
			char tempc[] = "X";
			button temp(tempc);
			temp.printButton(); cout << str;
		}
	}
	~radioButton() {
		delete[]str;
	}
};