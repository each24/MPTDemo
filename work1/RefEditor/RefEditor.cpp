#include "stdafx.h"

#include "RefEditor.h"

RefEditor::ADTEditor::~ADTEditor()
{
	throw gcnew System::NotImplementedException();
}

std::string RefEditor::ADTEditor::getNumber()
{
	return *number;
}

void RefEditor::ADTEditor::setNumber(std::string num)
{
	*number = num;
}

std::string RefEditor::ADTEditor::AddDigit(int n)
{
	if (n >= 0 && n < 16) {
		if (n > 9) {
			std::string end = "A";
			end[0] += n - 10;
			*number += end;
			return *number;
		}
		else {
			std::string end = "0";
			end[0] += n;
			*number += end;
			return *number;
		}
	}
	else
		return *number;
}

std::string RefEditor::ADTEditor::ChangeSign()
{
	if ((*number)[0] == '-')
		*number = (*number).substr(1, (*number).length());
	else
		*number = "-" + *number;
	return *number;
}

int RefEditor::ADTEditor::Acc()
{
	if ((*number).find('.') != std::string::npos) {
		return (*number).length() - (*number).find('.') - 1;
	}
	else
		return 0;
}

std::string RefEditor::ADTEditor::AddZero()
{
	*number += *zero;
	return *number;
}

std::string RefEditor::ADTEditor::AddDelim()
{
	if ((*number).find(*delim) == std::string::npos)
		*number += *delim;
	return *number;
}

std::string RefEditor::ADTEditor::Bs()
{
	if ((*number).length() > 0)
		*number = (*number).substr(0, (*number).length() - 1);
	return *number;
}

std::string RefEditor::ADTEditor::Clear()
{
	*number = std::string();
	return *number;
}

std::string RefEditor::ADTEditor::DoEdit(int j)
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
	case EdCommands::ChangeSign:
	{
		return ChangeSign();
	}
	default:
		break;
	}
	return std::string();
}
