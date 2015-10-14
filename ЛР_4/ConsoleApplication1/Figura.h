//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"

using namespace std;


class Figura
{
protected:
	static const int SIZE = 100;
	int *ocher;
	int head, tail;
public:
	Figura() 
	{
		ocher = new int[SIZE];
		head = tail = 0;
	}



	void write(Figura q)
	{
		for (int i = q.head + 1; i < q.tail + 1; i++)
		{
			cout << " " << q.ocher[i];
		}
	}



	void push(int num)
	{
		if (tail + 1 == head || (tail + 1 == SIZE && !head))
		{
			cout << "Очередь полна." << endl;
		}
		tail++;
		if (tail == SIZE) tail = 0;
		ocher[tail] = num;
	}



	void pop()
	{
		if (head == tail) {
			cout << "Очередь пуста." << endl;
			return;
		}
		head++;
		if (head == SIZE) head = 0;
	}



	int size()
	{
		int s = 0;
		for (int i = head; i < tail; i++)
		{
			s++;
		}
		cout<<s;
		return s;
	}



	void Figura::back()
	{
		cout << ocher[tail];
	}



	void Figura::front()
	{
		cout << ocher[head + 1];
	}



	~Figura()
	{}
};