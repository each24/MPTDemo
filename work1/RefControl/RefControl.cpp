#include "stdafx.h"

#include "RefControl.h"


int ADTControl::acc()
{
	return (int)round(Ed.Acc() * log(Pin) / log(Pout) + 0.5);
}

int ADTControl::getPin()
{
	return Pin;
}

int ADTControl::getPout()
{
	return Pout;
}

void ADTControl::setPin(int pin)
{
	Pin = pin;
}

void ADTControl::setPout(int pout)
{
	Pout = pout;
}

bool ADTControl::getSt()
{
	return St;
}

void ADTControl::setSt(bool state)
{
	St = state;
}

string ADTControl::DoCommand(int n)
{
	if (n == 19) {
		converter_10_p2 A;
		double r = A.dval(Ed.getNumber(), Pout);
		converter_p1_10 B;
		string res = B.DO(r, Pin, acc());
		St = _Finished;
		//his->AddRecord(Pin, Pout, Ed.getNumber(), res);
		return res;
	}
	else {
		St = _Editing;
		return Ed.DoEdit(n);
	}
	return string();
}


ADTControl::ADTControl()
{
	throw gcnew System::NotImplementedException();
	St = _Editing;
	Pin = 10;
	Pout = 16;
	Ed.Refresh();
	//his = new History();
}

ADTControl::~ADTControl()
{
	throw gcnew System::NotImplementedException();
}
