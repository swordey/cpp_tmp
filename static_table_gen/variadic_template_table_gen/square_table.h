#pragma once
#include <array>

// Set the maximum size of table
constexpr int TABLESIZE = 11;

// Variadic template struct
// The struct inherits recursively from the same template with one more argument.
// If the index reaches the value indicated in the template specialization, the recursion
// stops, and puts the variadic template arguments into an array.
template<int INDEX = 0, int ...D>
struct SquareOfNumbersTable : SquareOfNumbersTable<INDEX + 1, D..., INDEX * INDEX> {};

// Template specialization
template<int ...D>
struct SquareOfNumbersTable<TABLESIZE, D...>
{
	static constexpr std::array<int, TABLESIZE> table = { D... };
};

constexpr std::array<int, TABLESIZE> square_of_numbers = SquareOfNumbersTable<>::table;