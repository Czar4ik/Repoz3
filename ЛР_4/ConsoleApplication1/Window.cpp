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
	cout << "Ширина окна: "; 
	rectangle->getWidth();
	cout << endl;
}

Window::Window()
{
	std::cout << "Вызов конструктора Окна\n";
}

Window::~Window()
{
	std::cout << "Вызов деструктора Окна\n";
}