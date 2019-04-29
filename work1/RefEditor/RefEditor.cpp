#include "stdafx.h"

#include "RefEditor.h"

RefEditor::ADTEditor::~ADTEditor()
{
	throw gcnew System::NotImplementedException();
}

string RefEditor::ADTEditor::getNumber()
{
	return *number;
}

string RefEditor::ADTEditor::AddDigit(int n)
{
	if (n >= 0 && n < 16) {
		if (n > 9) {
			string end = "A";
			end[0] += n - 10;
			*number += end;
			return *number;
		}
		else {
			string end = "0";
			end[0] += n;
			*number += end;
			return *number;
		}
	}
	else
		return *number;
}

int RefEditor::ADTEditor::Acc()
{
	if ((*number).find('.') != string::npos) {
		return (*number).length() - (*number).find('.') - 1;
	}
	else
		return 0;
}

string RefEditor::ADTEditor::AddZero()
{
	*number += *zero;
	return *number;
}

string RefEditor::ADTEditor::AddDelim()
{
	if ((*number).find(*delim) == string::npos)
		*number += *delim;
	return *number;
}

string RefEditor::ADTEditor::Bs()
{
	if ((*number).length() > 0)
		*number = (*number).substr(0, (*number).length() - 1);
	return *number;
}

string RefEditor::ADTEditor::Clear()
{
	*number = string();
	return *number;
}

string RefEditor::ADTEditor::DoEdit(int j)
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
