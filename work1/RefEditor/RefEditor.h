#pragma once
//#include "../converterEdit/converterEdit/Editor.h"
#include <string>
using namespace System;
//namespace std;

enum EdCommands
{
	AddZero,
	AddDelim,
	ChangeSign,
	Bs,
	Clear
};

namespace RefEditor {
	public class ADTEditor
	{
	private:
		//Поле для хранения редактируемого числа.
		std::string *number;
		//Разделитель целой и дробной частей.
		const std::string *delim;
		//Ноль.
		const std::string *zero;
	public:
		ADTEditor() : number(new std::string()), delim(new std::string(".")), zero(new std::string("0")) {};
		void Refresh(){
			number = new std::string();
			delim = new std::string(".");
			zero = new std::string("0");
		};
		~ADTEditor();
		//Свойствое для чтения редактируемого числа.
		std::string getNumber();
		//Change number
		void setNumber(std::string num);
		//Добавить цифру.
		std::string AddDigit(int n);
		//Поменять знак
		std::string ChangeSign();
		//Точность представления результата.
		int Acc();
		//Добавить ноль.
		std::string AddZero();
		//Добавить разделитель.
		std::string AddDelim();
		//Удалить символ справа.
		std::string Bs();
		//Очистить редактируемое число.
		std::string Clear();
		//Выполнить команду редактирования.0
		std::string DoEdit(int j);
		// TODO: Добавьте сюда свои методы для этого класса.
	};
}
