#include "stdafx.h"
#include <iostream>
#include "Window.h"

using namespace std;

void Window::setSize(int w)
{
	rectangle->setWidth(w);
}

void Window::getSize()
{
	cout << "������ ����: "; 
	rectangle->getWidth();
	cout << endl;
}

Window::Window()
{
	std::cout << "����� ������������ ����\n";
}

Window::~Window()
{
	std::cout << "����� ����������� ����\n";
}