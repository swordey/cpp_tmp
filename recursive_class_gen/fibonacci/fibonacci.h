#pragma once

template<int N>
struct Fibonacci
{
	static constexpr int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template<>
struct Fibonacci<0>
{
	static constexpr int value = 1;
};

template<>
struct Fibonacci<1>
{
	static constexpr int value = 1;
};
