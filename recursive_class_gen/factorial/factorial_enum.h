#pragma once

// Factorial Template Metaprogramming class with enum
template<int N>
struct FactorialEnum
{
	enum { value = N * FactorialEnum<N - 1>::value };
};

template<>
struct FactorialEnum<1>
{
	enum { value = 1 };
};