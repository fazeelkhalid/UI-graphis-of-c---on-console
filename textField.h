#define textlable_h
#include"Label.h"

class textField : public label {
public:
	textField():label() {

	}
	textField(char *str):label(str) {

	}
	void setInfo(char*str) {
		this->text = new char[strlen(str) + 1];
		int i = 0;
		for (; i <= strlen(text); i++) {
			this->text[i] = str[i];
		}
	}
	void printField() {
		std::cout << "   [ " << text << " ]";
	}
	void EmptyField() {
		std::cout << "[-----------------]";
	}
};
