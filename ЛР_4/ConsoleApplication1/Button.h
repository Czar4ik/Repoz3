//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Button : public Element
{
public:
	Button() :Element() //вызов конструктора базового класса
	{}

	Button(char name) : Element(name)
	{}

	void namee()
	{
		cout << "Введите имя: ";
		cin >> name;
		cout << "Наше имя: " << name << endl;;
	}

	~Button()
	{
		cout << "Destructor Button!" << endl;
	}
};