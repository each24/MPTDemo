#pragma once
//#include "../ADTControl/ADTControl/Control.h"
#include "../converter/converter/converter_p1_10.h"
#include "../converter_10_p/converter_10_p/converter_10_p2.h"
#include "../History/History/History.h"
#include "../RefEditor/RefEditor.h"

using namespace System;
#define _Finished true;
#define _Editing false;

namespace RefControl {
	public class ADTControl
	{
	private:
		bool St;
		int Pin;
		int Pout;
		int acc();
	public:
		History * his;
		RefEditor::ADTEditor *Ed;
		int getPin();
		int getPout();
		void setPin(int pin);
		void setPout(int pout);
		bool getSt();
		void setSt(bool state);
		ADTControl();
		std::string DoCommand(int n);
		~ADTControl();
		//Control *A;
		// TODO: Добавьте сюда свои методы для этого класса.
	};
}
