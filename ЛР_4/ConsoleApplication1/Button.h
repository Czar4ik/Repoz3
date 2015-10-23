//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#pragma once
#include"Element Upravlenia.h"

class Button
	:public Element
{
public:
	Button(char *text = "Button");
	~Button();

	void setText(char *text);
	void getText() const;
	void setNameMenu(char *text);
	void getNameMenu() const;


private:
	char *text;
};
