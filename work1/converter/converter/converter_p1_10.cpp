#include "stdafx.h"
#include "converter_p1_10.h"

string converter_p1_10::DO(double n, int p, int c) {
	string NUM;
	if (p <= 1 || c < 0)
		return string();
	double A = abs(n);
	if (A - int(A) == 0.0) {
		int t = int(A);
		vector<int> out;
		while (t > 0) {
			out.push_back(t%p);
			t /= p;
		}
		for (int i = out.size() - 1; i >= 0; i--) {
			if (out[i] > 9) {
				char temp = 'A' + out[i] - 10;
				NUM += temp;
			}
			else
				NUM += to_string(out[i]);
		}
		/*NUM += ".";
		for (int i = 0; i < c; ++i) {
			NUM += "0";
		}*/
	}
	else {
		int t = int(A);
		vector<int> out;
		while (t > 0) {
			out.push_back(t%p);
			t /= p;
		}
		for (int i = out.size() - 1; i >= 0; i--) {
			if (out[i] > 9) {
				char temp = 'A' + out[i] - 10;
				NUM += temp;
			}
			else
				NUM += to_string(out[i]);
		}
		double z = A - int(A);
		if (out.size() == 0)
			NUM += '0';
		out.clear();
		double x = 1.0;
		for (int i = 0; i < c; ++i) {
			x /= (double)p;
			t = 0;
			while (z - x >= 0.0) {
				z -= x;
				t++;
			}
			out.push_back(t);
		}
		NUM += ".";
		for (int i = 0; i < int(out.size()); i++) {
			if (out[i] > 9) {
				char temp = out[i] - 10 + 'A';
				NUM += temp;
			}
			else
				NUM += to_string(out[i]);
		}
	}
	if (n < 0)
		return "-" + NUM;
	else
		return NUM;
}

char converter_p1_10::int_to_char(int d)
{
	if (d < 0 || d > 16) {
		return '0';
	}
	if (d < 10) {
		return char('0' + d);
	}
	else {
		return char('A' + (d - 10));
	}
}

string converter_p1_10::int_to_P(int n, int p)
{
	return DO(n, p, 0);
}

string converter_p1_10::fit_to_P(double n, int p, int c)
{
	if (n < 1 && n > -1)
		return DO(n, p, c);
	else
		return string();
}

