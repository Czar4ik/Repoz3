//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Window : public Element
{
public:
	Window() : Element() //вызов конструктора базового класса
	{}

	Window(int wind) : Element(wind)
	{}

	void func2()
	{
		cout << "Width вызвался из Window: " << width << endl;
	}

	~Window()
	{
		cout << "Destructor Window!" << endl;
	}
};