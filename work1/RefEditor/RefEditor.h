#pragma once
//#include "../converterEdit/converterEdit/Editor.h"
#include <string>
using namespace System;
using namespace std;

enum EdCommands
{
	AddZero,
	AddDelim,
	Bs,
	Clear
};

namespace RefEditor {
	public ref class ADTEditor
	{
		//Поле для хранения редактируемого числа.
		string *number;
		//Разделитель целой и дробной частей.
		const string *delim;
		//Ноль.
		const string *zero;
	public:
		ADTEditor() : number(new string()), delim(new string(".")), zero(new string("0")) {};
		void Refresh(){
			number = new string();
			delim = new string(".");
			zero = new string("0");
		};
		~ADTEditor();
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
		// TODO: Добавьте сюда свои методы для этого класса.
	};
}
