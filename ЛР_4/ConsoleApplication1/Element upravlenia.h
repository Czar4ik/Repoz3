//������ � ������, �������������, ������� ����������, ������, ����, ����.

#pragma once

class Element
{
public:
	Element *next;

	Element();
	virtual ~Element();

	virtual void setText(char *text) = 0;
	virtual void getText() const = 0;
	virtual void setNameMenu(char *text) = 0;
	virtual void getNameMenu() const = 0;

protected:
	static Element *head;
};
