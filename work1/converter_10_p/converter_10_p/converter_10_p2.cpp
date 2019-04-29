#include "stdafx.h"
#include "converter_10_p2.h"


double subconvert(std::string P_num, int P)
{
	if (P_num[0] == '-')
		P_num = P_num.substr(1, P_num.length());
	double ans = 0;
	if (P < 0) {
		P *= -1;
		double d = 1.0 / P;
		for (int i = 0; i < P_num.length(); i++, d /= P) {
			if (P_num[i] < '9')
				ans += (P_num[i] - '0')*d;
			else
				ans += (P_num[i] - 'A' + 10)*d;
		}
	}
	else {
		for (int i = P_num.length() - 1, d = 1; i >= 0; i--, d*=P) {
			if (P_num[i] < '9')
				ans += (P_num[i] - '0')*d;
			else
				ans += (P_num[i] - 'A' + 10)*d;
		}
	}
	return ans;
}


double converter_10_p2::dval(std::string P_num, int P)
{
	//regex r1("-?[1-9]+[[:d:]]*+[.]+[[:d:]]*+[1-9]");
	std::regex r1;
	std::regex r2;
	if (P > 10) {
		std::string end = "A";
		end[0] += P - 11;
		std::string asdf = "[1-9]";
		std::string R1 = std::string("-?([1-9]*[A-") + end + std::string("]*)+([0-9]*[A-") + end + std::string("]*)*");
		std::string R2 = std::string("([0-9]*[A-") + end + std::string("]*)+([1-9]*[A-") + end + std::string("]*)*");
		r1 = std::regex(R1);
		r2 = std::regex(R2.c_str());
	}
	else {
		std::string end = "0";
		end[0] += P - 1;
		std::string R1 = std::string("-?[1-") + end + std::string("]+[0-") + end + std::string("]*");
		std::string R2 = std::string("([0-") + end + std::string("]*)+[1-") + end + std::string("]");
		r2 = std::regex(R2);
		r1 = std::regex(R1);
	}
	double number = 0;
	std::string a, b = "0";
	if (P_num.find('.') != std::string::npos)
	{
		int f = P_num.find('.');
		a = P_num.substr(0, f);
		b = P_num.substr(f + 1, P_num.length() - f - 1);
		if (regex_match(a, r1) && regex_match(b, r2))
		{
			number = subconvert(a, P);
			number += subconvert(b, -P);
		}			
	}
	else
	{
		a = P_num;
		if (regex_match(a, r1))
			number = subconvert(a, P);
	}
	if (P_num[0] == '-')
		return -number;
	else
		return number;
}

double converter_10_p2::char_To_num(char ch)
{
	//double ans = 0;
	if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F'))
		if (ch < '9')
			return double(ch - '0');
		else
			return double(ch - 'A' + 10);
	else
		return 0;
}

double converter_10_p2::convert(std::string P_num, int P, double weight)
{
	return 0.0;
}
