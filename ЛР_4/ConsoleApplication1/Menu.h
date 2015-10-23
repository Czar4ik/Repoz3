#pragma once
#include"Element Upravlenia.h"

class Menu
	:public Element
{
public:
	Menu(char *text = "Menu: ");
	~Menu();

	void setNameMenu(char *text);
	void getNameMenu() const;
	void setText(char *text);
	void getText() const;

private:
	char *text;
};
