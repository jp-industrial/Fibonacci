#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"

//program that writes first N Fibonacci values. 06/1/23 jp-industrial

int main()
{
	vector<int> fib = { 1 };
	int n = 0;
	cin >> n;

	for (int lvalue = 0, rvalue = 1, i = 0; i < n; ++i) {

		int sum = lvalue + rvalue;

		fib.push_back(sum);

		lvalue = rvalue;
		rvalue = sum;
		
		cout << fib[i] << " ";
	}
}