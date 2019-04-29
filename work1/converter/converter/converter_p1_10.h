#pragma once
#include <string>
#include <vector>

//using namespace std;
class converter_p1_10
{
private:
	double p1;
	double p1_10;
public:
	//converter_p1_10(double P1, double P1_10) : p1(P1), p1_10(P1_10) {};
	converter_p1_10() {};
	std::string DO(double n, int p, int c);
	char int_to_char(int d);
	std::string int_to_P(int n, int p);
	std::string fit_to_P(double n, int p, int c);

	~converter_p1_10() {};
};

