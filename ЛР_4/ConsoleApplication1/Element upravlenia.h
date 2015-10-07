//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"

using namespace std;


class Element //Базовый класс
{
protected:
	int width; 
	char name[100];
public:
	Element()
	{
		width = 0;
	};

	Element( int wind)
	{
		width = wind;
	}

	void Show()
	{
		cout << width << endl;
	}

	~Element()
	{
		cout << "Destructor Elementa!" << endl;
	}
};