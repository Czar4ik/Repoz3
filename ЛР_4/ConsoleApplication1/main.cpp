//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"
#include "Figura.h"
#include "Rectangle.h"
#include "Element upravlenia.h"
#include "Window.h"
#include "Menu.h"
#include "Button.h"

	Figura *Figura::head = NULL;
	Element *Element::head = NULL;

int main()
{
	setlocale(LC_ALL, "Rus");

	Rectangle Rec1(1, "Rec1");
	Rec1.add();
	Rectangle Rec2(2, "Rec2");
	Rec2.add();
	Rectangle Rec3(3, "Rec3");
	Rec3.add();

	Rectangle::show();

	cout << endl << endl;
	
	Menu Men1;
	Men1.setNameMenu("Menushka: ");
	Men1.getNameMenu();

	Button Butt1; 
	Butt1.getText();
	Button Butt2("Click");	
	Butt2.getText();
	Button Butt3("DoubClick");
	Butt3.getText();

}

