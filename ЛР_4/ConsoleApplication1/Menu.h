//������ � ������, �������������, ������� ����������, ������, ����, ����.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Menu : public Element
{ 
public:
	Menu() :Element() //����� ������������ �������� ������
	{}

	Menu( int wind) : Element( wind)
	{}

	void func()
	{
		cout << "Width �������� �� Menu: " << width << endl;;
	}

	~Menu()
	{
		cout << "Destructor Menu!" << endl;
	}


};