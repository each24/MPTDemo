#include "stdafx.h"

#include "RefControl.h"


int RefControl::ADTControl::acc()
{
	return Ed->Acc();
	//return (int)round(Ed->Acc() * log(Pin) / log(Pout) + 0.5);
}

int RefControl::ADTControl::getPin()
{
	return Pin;
}

int RefControl::ADTControl::getPout()
{
	return Pout;
}

void RefControl::ADTControl::setPin(int pin)
{
	Pin = pin;
}

void RefControl::ADTControl::setPout(int pout)
{
	Pout = pout;
}

bool RefControl::ADTControl::getSt()
{
	return St;
}

void RefControl::ADTControl::setSt(bool state)
{
	St = state;
}

std::string RefControl::ADTControl::DoCommand(int n)
{
	if (n == 19) {
		converter_10_p2 *A = new converter_10_p2();
		double r = A->dval(Ed->getNumber(), Pin);
		converter_p1_10 *B = new converter_p1_10();
		std::string res = B->DO(r, Pout, acc());
		St = _Finished;
		his->AddRecord(Pin, Pout, Ed->getNumber(), res);
		free(A);
		free(B);
		return res;
	}
	else {
		St = _Editing;
		return Ed->DoEdit(n);
	}
	return std::string();
}


RefControl::ADTControl::ADTControl()
{
	//throw gcnew System::NotImplementedException();
	St = _Finished;
	Pin = 10;
	Pout = 16;
	Ed = new RefEditor::ADTEditor();
	his = new History();
}

RefControl::ADTControl::~ADTControl()
{
	//throw gcnew System::NotImplementedException();
}
