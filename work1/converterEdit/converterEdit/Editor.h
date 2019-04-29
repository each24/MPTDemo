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
		//���� ��� �������� �������������� �����.
		string number = "";
		//����������� ����� � ������� ������.
		const string delim = ".";
		//����.
		const string zero = "0";
	public:
		Editor() : number(string()) {};
		~Editor();
		//��������� ��� ������ �������������� �����.
		string getNumber();
		//�������� �����.
		string AddDigit(int n);
		//�������� ������������� ����������.
		int Acc();
		//�������� ����.
		string AddZero();
		//�������� �����������.
		string AddDelim();
		//������� ������ ������.
		string Bs();
		//�������� ������������� �����.
		string Clear();
		//��������� ������� ��������������.0
		string DoEdit(int j);
};

