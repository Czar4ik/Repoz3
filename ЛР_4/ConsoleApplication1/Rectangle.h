//������ � ������, �������������, ������� ����������, ������, ����, ����.

#include "stdafx.h"
#include "iostream"

using namespace std;

class Rectangle : public Figura
{
public:
	Rectangle() :Figura() //����� ������������ �������� ������
	{}

	Rectangle(int inputt) :Figura(inputt) //�������� � ����������� � ����������
	{}

	void sqrarea() //���������� � ������� ���� �������
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