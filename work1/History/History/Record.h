#pragma once
#include <string>
using namespace std;
class Record
{
private:
	int p1, p2;
	string number1, number2;
public:
	Record(int P1, int P2, string num1, string num2) : p1(P1), p2(P2), number1(num1), number2(num2) {};
	Record() {};
	int getp1();
	int getp2();
	string getn1();
	string getn2();
	string Rewtite();
	bool AreEq(Record A);
	~Record();
};


