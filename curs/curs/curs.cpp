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
#include <algorithm>

using namespace std;

vector<string> Myvector;

// меню вставки элементов в вектор
void insertmenu() {
	system("cls"); // очистка экрана)
	cout << "\nto end insert exit\n";
	string str; //строка для ввода в массив
	do {
		if(str.length() > 0)
			Myvector.push_back(str); //проверка на первой итерации цикла
		cin >> str;
	} while (str != "exit"); // проверка строки на выход из цикла
}
// меню вывод элементов вектора
void printmenu() {
	system("cls");
	char c = 0;
	for (int i = 0; i < Myvector.size(); ++i)
		cout << Myvector[i] << endl;         // собственно сам вывод каждого элемента
	cout << "to back into main menu press esc" << endl;
	while(c != 27)     //попытка добиться от пользователя следования указаниям меню
		c = _getch(); 
}

// меню записи в файл
void writemenu() {
	system("cls");
	string filename;
	char c = 0;
	cout << "insert file name" << endl;
	cin >> filename;     // ввод имени файла
	ofstream FILE;
	FILE.open(filename.c_str());   // открытие файла
	if (FILE.is_open()) {        // проверка открытия файла
		for (int i = 0; i < Myvector.size(); ++i)
			FILE << Myvector[i] << endl;            //поэлементная запись в файл
		cout << "\nJob is DONE!\n";
	}
	else {
		cout << endl << "ERROR CANNOT OPEN FILE!!!" << endl; // сообщаем о ошибке
	}
	cout << "to back into main menu press esc" << endl;    
	while (c != 27)                //продолжаем пытать пользователя 
		c = _getch();
}

void Countmenu() {
	system("cls");
	char c = 0;
	cout << "\n size of list is " << Myvector.size() << endl;  // выводим количество элементов
	cout << "to back into main menu press esc" << endl;
	while (c != 27)                //продолжаем пытать пользователя 
		c = _getch();
}

void Findmenu() {
	char c = 0;
	string searchstr;
	sort(Myvector.begin(), Myvector.end()); // сортируем массив перед поиском, для ускорения процесса
	while (1) {
		c = 0;
		system("cls");
		cout << "\ninsert searching string\n" << endl;
		cin >> searchstr;     // ввод строки для поиска 
		vector<string>::iterator index = find(Myvector.begin(), Myvector.end(), searchstr); // объявляем итератор, с помощью которого будет возвращен адресс найденного элемента
		if (index != Myvector.end())     // проверяем нашли ли мы элемент в массиве
			cout << "\nfounded your string\n" << *index << endl;
		else
			cout << "\n there is no such string in list(\n";
		cout << "\nto back into main menu press esc to continue press F" << endl;
		while (c != 27 && c != 'f' && c != 'F') {              //продолжаем пытать пользователя 
			c = _getch();
		}
		if (c == 27)
			return;
	}
}

void DeletingMenu() {
	char c = 0;
	string searchstr;
	sort(Myvector.begin(), Myvector.end()); // сортируем массив перед поиском, для ускорения процесса
	while (1) {
		c = 0;
		system("cls");
		cout << "\ninsert string for deleting\n" << endl;
		cin >> searchstr;     // ввод строки для поиска 
		vector<string>::iterator index = find(Myvector.begin(), Myvector.end(), searchstr); // объявляем итератор, с помощью которого будет возвращен адресс найденного элемента
		if (index != Myvector.end()) {  // проверяем нашли ли мы элемент в массиве
			cout << "\n jobs done\n" << endl;
			Myvector.erase(index);
		}
		else
			cout << "\n there is no such string in list(\n";
		cout << "\nto back into main menu press esc to continue press F" << endl;
		while (c != 27 && c != 'f' && c != 'F') {              //продолжаем пытать пользователя 
			c = _getch();
		}
		if (c == 27)
			return;
	}
}

int main()
{
	char c;
	cout << "\nto start game press F\nto exit press any other key\n";
	c = _getch();
	if (c == 'f') 
		while (1) {
			system("cls");
			printf("\n1. insert strings into list\n2. print all list\n3. write list into file\n4. count elements in list\n5. find element in list\n6. delete some items\n7. to exit \n");
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
			case '4':
				Countmenu();
				break;
			case '5':
				Findmenu();
				break;
			case '6':
				DeletingMenu();
				break;
			default:
				break;
			}
			if (c == '7' || c == 27) {
				Myvector.clear();
				Myvector.~vector();
				break;
			}
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
