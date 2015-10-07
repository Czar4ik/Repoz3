//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"
#include "Figura.h"
#include "Rectangle.h"
#include "Element upravlenia.h"
#include "Menu.h"
#include "Window.h"
#include "Button.h"

int main()
{
	setlocale(LC_CTYPE, "rus");

	Figura fig(10); //объект базового класса
	cout << "Area fig: ";
	fig.Show();

	Rectangle rec(15);
	cout << "Area rec: ";
	rec.Show();

	rec.sqrarea();
	cout << "Sqr: ";
	rec.Show();

	Element el(11);
	cout << "Element: ";
	el.Show();

	cout << "Menu: ";
	Menu men(1111111);
	men.Show();
	men.func();

	cout << "Window: ";
	Window win(333333);
	win.Show();
	win.func2();

	cout << "Button: ";
	Button but;
	but.Show();
	but.namee();

	cout << endl;
	return 0;
}

