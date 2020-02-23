#include <iostream>
#include "fibonacci.h"

using namespace std;

int main()
{
	Fibonacci<2> two; // 1 1 2
	Fibonacci<5> five; // 1 1 2 3 5 8

	cout << "2. number in the Fibonacci series is " << two.value << endl;
	cout << "5. number in the Fibonacci series is " << five.value << endl;
}