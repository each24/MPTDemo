#include "stdafx.h"
#include "Editor.h"
Editor::~Editor()
{
}

string Editor::getNumber()
{
	return number;
}

string Editor::AddDigit(int n)
{
	if (n >= 0 && n < 16) {
		if (n > 9) {
			string end = "A";
			end[0] += n - 10;
			number += end;
			return number;
		}
		else {
			string end = "0";
			end[0] += n;
			number += end;
			return number;
		}
	}
	else
		return number;
}

int Editor::Acc()
{
	if (number.find('.') != string::npos) {
		return number.length() - number.find('.') - 1;
	}
	else
		return 0;
}

string Editor::AddZero()
{
	number += zero;
	return number;
}

string Editor::AddDelim()
{
	if(number.find(delim) == string::npos)
		number += delim;
	return number;
}

string Editor::Bs()
{
	if(number.length() > 0)
		number = number.substr(0, number.length() - 1);
	return number;
}

string Editor::Clear()
{
	number = string();
	return number;
}

string Editor::DoEdit(int j)
{
	switch (j)
	{
	case EdCommands::AddDelim:
	{
		return AddDelim();
	}
	case EdCommands::AddZero:
	{
		return AddZero();
	}
	case EdCommands::Bs:
	{
		return Bs();
	}
	case EdCommands::Clear:
	{
		return Clear();
	}
	default:
		break;
	}
	return string();
}
