//������ � ������, �������������, ������� ����������, ������, ����, ����.

#include "stdafx.h"
#include "iostream"

using namespace std;


class Figura //������� �����
{
protected:
	int area;
public:
	Figura() 
	{
		area = 0;
	}

	Figura(int input)
	{
		area = input;
	}

	virtual void Show()
	{
		cout <<"Figura^^^^^^^^^^^: "<< endl;
	}

	~Figura()
	{
		cout << "Destroy Figura." << endl;
	}
};