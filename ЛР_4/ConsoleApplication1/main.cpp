//������ � ������, �������������, ������� ����������, ������, ����, ����.

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
	cout << "���� �������: ";
	ocher1.write(ocher1);
	cout << endl;



	cout << "������� �������: ";
	int n;
	cin >> n;
	ocher1.push(n);
	cout << "���� ����� �������: ";
	ocher1.write(ocher1);
	cout << endl;



	cout << "������: ";
	ocher1.size();
	cout << endl;
	
	cout << "���������: ";
	ocher1.back();
	cout << endl;

	cout << "������: ";
	ocher1.front();
	cout << endl;

	cout << "������� ������:";
	ocher1.write(ocher1);
	cout << endl;
	return 0;
}

