#pragma once
#include "Record.h"
#include <list>

class History
{
private:
	list<Record> L;
public:
	Record at();
	Record at(int i);
	void AddRecord(int p1, int p2, string num1, string num2);
	void Clear();
	int Count();
	History();
	~History();
};

