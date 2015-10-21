//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#pragma once
#include"rectangle.h"

class Window
{
	Rectangle *rectangle;
public:
	Window();
	~Window();

	void setSize(int);
	void getSize();

private:
	bool isActiv;
};