//������ � ������, �������������, ������� ����������, ������, ����, ����.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Button : public Element
{
public:
	Button() :Element() //����� ������������ �������� ������
	{}

	Button(char name) : Element(name)
	{}

	void namee()
	{
		cout << "������� ���: ";
		cin >> name;
		cout << "���� ���: " << name << endl;;
	}

	~Button()
	{
		cout << "Destructor Button!" << endl;
	}
};