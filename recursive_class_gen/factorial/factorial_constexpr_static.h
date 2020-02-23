#pragma once

// Template MetaProgramming with static constexpr
template<int N>
struct FactorialStaticConstexpr
{
	static constexpr int value = N * FactorialStaticConstexpr<N - 1>::value;
};

template<>
struct FactorialStaticConstexpr<1>
{
	static constexpr int value = 1;
};