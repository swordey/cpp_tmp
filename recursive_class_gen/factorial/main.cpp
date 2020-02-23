#include <iostream>
#include "factorial_enum.h"
#include "factorial_constexpr_static.h"

using namespace std;

int main()
{
	FactorialEnum<5> factEnum5;
	FactorialStaticConstexpr<5> factStaticConstexpr5;
	cout << "Factorial with enum: " << factEnum5.value << std::endl;
	cout << "Factorial with static constexpr: " << factStaticConstexpr5.value << std::endl;
	return 0;
}