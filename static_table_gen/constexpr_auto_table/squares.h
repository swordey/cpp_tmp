#pragma once
#include <array>

constexpr int TABLE_SIZE = 10;

constexpr auto table = [] {
	std::array<int, TABLE_SIZE> table = {};
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		table[i] = i * i;
	}
	return table;
}();
