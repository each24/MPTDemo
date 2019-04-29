#pragma once
#include <string>
#include <iostream>
#include <regex>

//using namespace std;

class converter_10_p2
{
public:
	converter_10_p2() {};
	double dval(std::string P_num, int P);
	double char_To_num(char ch);
	double convert(std::string P_num, int P, double weight);
	~converter_10_p2() {};
};

