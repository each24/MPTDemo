#include "stdafx.h"
#include "History.h"


Record History::at()
{
	if (L.size() > 0)
		return this->L.back();
	else
		return Record();
}

Record History::at(int I)
{
	if (L.size() > 0)
	{
		if (I > L.size()) {
			return Record();
		}
		std::list<Record> it = std::list<Record>(L.begin(), L.end());
		for (int i = 0; i < I; ++i) {
			it.pop_front();
		}
		return it.front();
	}
	else
		return Record();
}

void History::AddRecord(int p1, int p2, std::string num1, std::string num2)
{
	L.push_back(Record(p1, p2, num1, num2));
}

void History::Clear()
{
	L.clear();
}

int History::Count()
{
	return L.size();
}

History::History()
{
}


History::~History()
{
}
