#include "stdafx.h"
#include "Control.h"


int Control::acc()
{
	return (int)round(ed->Acc() * log(Pin) / log(Pout) + 0.5);
}

int Control::getPin()
{
	return Pin;
}

int Control::getPout()
{
	return Pout;
}

void Control::setPin(int pin)
{
	Pin = pin;
}

void Control::setPout(int pout)
{
	Pout = pout;
}

bool Control::getSt()
{
	return St;
}

void Control::setSt(bool state)
{
	St = state;
}

Control::Control()
{
	St = _Editing;
	Pin = 10;
	Pout = 16;
	ed = new Editor();
	his = new History();
}

string Control::DoCommand(int n)
{
	if (n == 19) {
		converter_10_p2 A;
		double r = A.dval(ed->getNumber(), Pout);
		converter_p1_10 B;
		string res = B.DO(r, Pin, acc());
		St = _Finished;
		his->AddRecord(Pin, Pout, ed->getNumber(), res);
		return res;
	}
	else {
		St = _Editing;
		return ed->DoEdit(n);
	}
	return string();
}


Control::~Control()
{
}
