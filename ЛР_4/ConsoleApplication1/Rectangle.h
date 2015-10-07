// лассы Ц ‘игура, ѕр€моугольник, Ёлемент управлени€,  нопка, ћеню, ќкно.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Rectangle : public Figura
{
public:
	Rectangle() :Figura() //вызов конструктора базового класса
	{}

	Rectangle(int inputt) :Figura(inputt) //передаем в конструктор с параметром
	{}

	void sqrarea() //возведение в квадрат нашу площадь
	{
		area *= area;
	}
	~Rectangle()
	{
		cout << "Destroy Rectangle." << endl;
	}

	virtual void Show()
	{
		cout << "Rectangle^^^^^^^^^^^^: " << endl;
	}
};