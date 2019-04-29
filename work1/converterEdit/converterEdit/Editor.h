#pragma once
#include <string>

enum EdCommands
{
	AddZero,
	AddDelim,
	Bs,
	Clear
};

using namespace std;

class Editor
{
	protected:
		//Поле для хранения редактируемого числа.
		string number = "";
		//Разделитель целой и дробной частей.
		const string delim = ".";
		//Ноль.
		const string zero = "0";
	public:
		Editor() : number(string()) {};
		~Editor();
		//Свойствое для чтения редактируемого числа.
		string getNumber();
		//Добавить цифру.
		string AddDigit(int n);
		//Точность представления результата.
		int Acc();
		//Добавить ноль.
		string AddZero();
		//Добавить разделитель.
		string AddDelim();
		//Удалить символ справа.
		string Bs();
		//Очистить редактируемое число.
		string Clear();
		//Выполнить команду редактирования.0
		string DoEdit(int j);
};

