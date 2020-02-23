#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

// Max size of sine table
constexpr int SINE_TABLE_SIZE = 180;

// Template function to calculate the values of sine
// with the following Taylor series:
// x - x^3/3! + x^5/5! - x^7/7! -> good approximation between 0-180 degrees
template<int degrees>
struct Sine
{
	static const float radians;
	static const float value; // floats can't be declared inside template func
};

template<int degrees>
const float Sine<degrees>::radians = degrees * M_PI / 180.F;

template<int degrees>
const float Sine<degrees>::value =
radians - 
((radians*radians*radians) / 6.0F) + 
((radians*radians*radians*radians*radians) / 120.0F) - 
((radians*radians*radians*radians*radians*radians*radians) / 5040.0F);

// The sine table to fill
float SineTable[SINE_TABLE_SIZE];

// The sine table filler struct
template<int index = 0>
struct FillSineTable
{
	static void Do()
	{
		SineTable[index] = Sine<index>::value;

		FillSineTable<index + 1>::Do(); // Recursive loop
	}
};

template<>
struct FillSineTable<SINE_TABLE_SIZE>
{
	static void Do(){}
};
// To populate the table
// FillSineTable<>::Do(); should be called
