#include <iostream>
#include "sine_table.h"

using namespace std;

int main()
{
	// Populate the table
	FillSineTable<>::Do();

	for (int degree = 0; degree < SINE_TABLE_SIZE; ++degree)
	{
		cout << "Degree: " << degree << " Value: " << SineTable[degree] << endl;
	}

	return 0;
}