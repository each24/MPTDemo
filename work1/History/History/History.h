#pragma once
#include "Record.h"
#include <list>

class History
{
private:
	std::list<Record> L;
public:
	Record at();
	Record at(int i);
	void AddRecord(int p1, int p2, std::string num1, std::string num2);
	void Clear();
	int Count();
	History();
	~History();
};

