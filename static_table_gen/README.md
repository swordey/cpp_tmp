# Static Table Generation
If there are information that is time consuming to calculate, and needed quite frequently (e.g.: trigonometric functions), we can create a Look Up Table. To save some important runtime, we could make it during compilation time, because e.g.: sine(10) won't change during runtime.

In this folder you will find 3 solutions for creating LUT in compilation time.

## Methods
* Variadic template table generation
* Recursive table filler struct
* Constexpr auto table
