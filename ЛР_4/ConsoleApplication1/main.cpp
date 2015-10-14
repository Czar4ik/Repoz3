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

	Rectangle ocher1, ocher2;
	int i;
	for (i = 28; i <=40; i++)
	{
		ocher1.push(i);
	}
	cout << "Наша очередь: ";
	ocher1.write(ocher1);
	cout << endl;



	cout << "Введите элемент: ";
	int n;
	cin >> n;
	ocher1.push(n);
	cout << "Наша новая очередь: ";
	ocher1.write(ocher1);
	cout << endl;



	cout << "Размер: ";
	ocher1.size();
	cout << endl;
	
	cout << "Последний: ";
	ocher1.back();
	cout << endl;

	cout << "Первый: ";
	ocher1.front();
	cout << endl;

	cout << "Текущие данные:";
	ocher1.write(ocher1);
	cout << endl;
	return 0;
}

