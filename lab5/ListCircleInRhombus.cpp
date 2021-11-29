#include "ListCircleInRhombus.h"

ListCircleInRhombus::ListCircleInRhombus()
{
	size_ = 0;
	array = new CircleInRhombus[1]();

	char_field_ = NULL;
	string_field_ = nullptr;
}

ListCircleInRhombus::ListCircleInRhombus(int size, char* char_field, string string_field)
{
	size_ = size;
	array = new CircleInRhombus[size]();

	char_field_ = new char[strlen(char_field)];
	strcpy(char_field_, char_field);

	string_field_ = string_field;
}

ListCircleInRhombus::ListCircleInRhombus(ListCircleInRhombus& copy)
{
}

void ListCircleInRhombus::SetSize(int size)
{
	size_ = size;
}

void ListCircleInRhombus::SetCharField(char* field)
{
	char_field_ = new char[strlen(field)];
	strcpy(char_field_, field);
}

void ListCircleInRhombus::SetStringField(string field)
{
	string_field_ = field;
}

int ListCircleInRhombus::GetSize()
{
	return size_;
}

char* ListCircleInRhombus::GetCharField()
{
	return char_field_;
}

string ListCircleInRhombus::GetStringField()
{
	return string_field_;
}

ListCircleInRhombus ListCircleInRhombus::operator=(ListCircleInRhombus list)
{
	ListCircleInRhombus res;

	res.size_ = list.GetSize();
	array = new CircleInRhombus[size_]();

	for (int i = 0; i < size_; i++)
	{
		array[i].SetCircle(list.array[i].GetCircle());
		array[i].SetRhombus(list.array[i].GetRhombus());
	}

	char_field_ = new char[strlen(list.GetCharField())];
	strcpy(char_field_, list.GetCharField());

	string_field_ = list.GetStringField();

	return res;
}

ListCircleInRhombus ListCircleInRhombus::operator[](char* field)
{
	for (int i = 0; i < size_; i++)
	{
		if (strcmp(char_field_, field) == 0)
		{
			return this[i];
		}
	}
	throw "Index not found!";
}

ListCircleInRhombus ListCircleInRhombus::operator[](string field)
{
	for (int i = 0; i < size_; i++)
	{
		if (string_field_ == field)
		{
			return this[i];
		}
	}

	throw "Index not found!";
}

CircleInRhombus ListCircleInRhombus::operator[](int index)
{
	for (int i = 0; i < size_; i++)
	{
		if (i == index)
		{
			return this->array[i];
		}
	}

	throw "Index not found!";
}