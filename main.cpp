#include<iostream>
#include"Button.h"
#include"Label.h"
#include"newLine.h"
#include"radioButton.h"
#include"textField.h"
#include"Window.h"
using namespace std;

int main() {
	char bracket;
	int width;
	int height;
	char Label[100];

	cout << "Enter window height and width in given Format \"(width,height)\" : ";
	cin >> bracket >> width >> bracket >> height >> bracket;
	cout << "Enter label of window : ";
	cin >> Label;

	window win(height, width, Label);

	cout << "Enter text field label : ";
	cin >> Label;
	label *lab = new label(Label);
	cout << "Enter in text field : ";
	cin >> Label;

	textField *txt = new textField(Label);
	lab->printLabel();
	cout << ":\t";
	txt->printField();
	cout << endl;
	
	cout << "Enter the data for label: \n" ;
	cin >> Label;
	lab->printLabel();
	cout << ":\t";
	txt->setInfo(Label);
	cout << endl;
	
	system("cls");
	lab->printLabel(); 
	cout << ":\t";
	txt->printField();
	cout << endl;

	system("PAUSE");
	
	radioButton* options[2];
	for (int i = 0; i < 2; i++) {
		char space[] = " ";
		cout << " ";
		cout << "name of label for selection : ";
		cin >> Label;

		options[i] = new radioButton(Label,space);
	}

	for (int i = 0; i < 2; i++) {
		cout << " ";
		options[i]->PrintRButton(); cout << endl;
	}
	cout << " ";
	cout << "name of label for selection : ";
	cin >> Label;
	system("cls");
	window win1(width, height, Label);
	//win1.
	cout << " \n\n";
	lab->printLabel();
	cout << " :\t"; 
	txt->printField();
	cout << "\n\n\n";

	for (int i = 0; i < 2; i++) {
		cout << " Name of button label for selection : ";
		cin >> Label;
		cout << " ";
		options[i]->selectButton(Label);
		cout << endl;
	}
	win.printUpperLine();
	win.leftLine();
	win.rightLine();
	win.printBottomLines();
	newLine *new_ = new newLine;
	new_->printNewLine();
	new_->printNewLine();
	new_->printNewLine();

	return 0;
}