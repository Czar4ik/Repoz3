//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Menu : public Element
{ 
public:
	Menu() :Element() //вызов конструктора базового класса
	{}

	Menu( int wind) : Element( wind)
	{}

	void func()
	{
		cout << "Width вызвался из Menu: " << width << endl;;
	}

	~Menu()
	{
		cout << "Destructor Menu!" << endl;
	}


};