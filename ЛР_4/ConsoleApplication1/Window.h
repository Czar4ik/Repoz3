//������ � ������, �������������, ������� ����������, ������, ����, ����.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Window : public Element
{
public:
	Window() : Element() //����� ������������ �������� ������
	{}

	Window(int wind) : Element(wind)
	{}

	void func2()
	{
		cout << "Width �������� �� Window: " << width << endl;
	}

	~Window()
	{
		cout << "Destructor Window!" << endl;
	}
};