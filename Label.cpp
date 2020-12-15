#include "Label.h"
using namespace std;

label::label()
{
	text = NULL;
}
label::label(char* text)
{
	this->text = new char[strlen(text) + 1];
	int i = 0;
	for (; i <= strlen(text); i++) {
		this->text[i] = text[i];
	}
}
char* label::getLabel() {
	return this->text;
}
void label::printLabel()
{
	cout <<" "<< text;
}
label::~label()
{
	delete[] text;
	//cout << "Destructor for label class called:" << endl;
}