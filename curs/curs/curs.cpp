// curs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <fstream>

using namespace std;

vector<string> Myvector;

void insertmenu() {
	system("cls");
	cout << "\nto end insert exit\n";
	string str;
	do {
		if(str.length() > 0)
			Myvector.push_back(str);
		cin >> str;
	} while (str != "exit");
}

void printmenu() {
	system("cls");
	char c = 0;
	for (int i = 0; i < Myvector.size(); ++i)
		cout << Myvector[i] << endl;
	cout << "to back into main menu press esc" << endl;
	while(c != 27)
		c = _getch();
}

void writemenu() {
	system("cls");
	string filename;
	char c = 0;
	cout << "insert file name" << endl;
	cin >> filename;
	ofstream FILE;
	FILE.open(filename.c_str());
	if (FILE.is_open()) {
		for (int i = 0; i < Myvector.size(); ++i)
			FILE << Myvector[i] << endl;
		cout << "\nJob is DONE!\n";
	}
	else {
		cout << endl << "ERROR CANNOT OPEN FILE!!!" << endl;
	}
	cout << "to back into main menu press esc" << endl;
	while (c != 27)
		c = _getch();
}
int main()
{
	char c;
	cout << "\nto start game press F\nto exit press any other key\n";
	c = _getch();
	if (c == 'f') 
		while (1) {
			system("cls");
			printf("\n1. insert strings into list\n2. print all list\n3. write list into file\n4. count\n");
			c = _getch();
			switch (c)
			{
			case '1':
				insertmenu();
				break;
			case '2': 
				printmenu();
				break;
			case '3':
				writemenu();
				break;
			default:
				break;
			}
			if (c == '5' || c == 27)
				break;
			
		}
    //cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
