//������ � ������, �������������, ������� ����������, ������, ����, ����.

#pragma once
#include"Element Upravlenia.h"

class Button
	:public Element
{
public:
	Button(char *text = "������");
	~Button();

	void setText(char *text);
	void getText() const;

private:
	char *text;
};
