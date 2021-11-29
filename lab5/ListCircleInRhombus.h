#pragma once
#include "Header.h"
#include "Classes.h"
#include "CircleInRhombus.h"

class ListCircleInRhombus
{
public:
	ListCircleInRhombus();
	ListCircleInRhombus(int size, char* char_field, string string_field);
	ListCircleInRhombus(ListCircleInRhombus& copy);

	void SetSize(int size);
	void SetCharField(char* field);
	void SetStringField(string field);

	int GetSize();
	char* GetCharField();
	string GetStringField();

	ListCircleInRhombus operator=(ListCircleInRhombus list);
	ListCircleInRhombus operator[](char* field);
	ListCircleInRhombus operator[](string field);
	CircleInRhombus operator[](int index);
private:
	CircleInRhombus* array;
	int size_;
	char* char_field_;
	string string_field_;
};