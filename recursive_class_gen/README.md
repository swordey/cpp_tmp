# Recursive Class Generation
To be able to have a recursive class generation we have to have a template class/struct that calls itself and a template specialization for that class/struct that is the end condition to stop the recursion sometime.

To store a variable in a class/struct that is useable during compile time in a recursive manner, it has to be enum or static constexpr.

## Advantage
We can calculate all factorials e.g.: under 100 in compile time (makes compile time longer), but in runtime, we don't have to calculate it.

## Examples
* Factorial
* Fibonacci series
