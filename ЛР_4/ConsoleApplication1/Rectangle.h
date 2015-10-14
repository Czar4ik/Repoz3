// лассы Ц ‘игура, ѕр€моугольник, Ёлемент управлени€,  нопка, ћеню, ќкно.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Rectangle : public Figura
{
public:
	Rectangle() :Figura() //вызов конструктора базового класса
	{}
	~Rectangle()
	{}
};