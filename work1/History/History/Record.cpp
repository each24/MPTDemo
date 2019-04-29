#include "stdafx.h"
#include "Record.h"

int Record::getp1()
{
	return p1;
}

int Record::getp2()
{
	return p2;
}

string Record::getn1()
{
	return number1;
}

string Record::getn2()
{
	return number2;
}

string Record::Rewtite()
{
	return number1 + "->" + number2;
}

bool Record::AreEq(Record A)
{
	if (A.getn1() == this->getn1() &&
		A.getn2() == this->getn2() &&
		A.getp1() == this->getp1() &&
		A.getp2() == this->getp2())
		return true;
	return false;
}

Record::~Record()
{
}
