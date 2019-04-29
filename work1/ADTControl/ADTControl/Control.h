#pragma once
#include <math.h>
#include "../../converter/converter/converter_p1_10.h"
#include "../../converter_10_p/converter_10_p/converter_10_p2.h"
#include "../../converterEdit/converterEdit/Editor.h"
#include "../../History/History/History.h"

using namespace std;

#define _Finished true;
#define _Editing false;

class Control
{
private:
	bool St;
	int Pin;
	int Pout;
	int acc();
public:
	History *his;
	Editor *ed;
	int getPin();
	int getPout();
	void setPin(int pin);
	void setPout(int pout);
	bool getSt();
	void setSt(bool state);
	Control();
	string DoCommand(int n);
	~Control();
};

