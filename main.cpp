#include <iostream>
#include "first.h"
#include <cstdint>   //C++ officially adopted these fixed-width integers as part of C++11. 
                    //They can be accessed by including the cstdint header,
#include <cstddef> // std::size_t

using namespace std;

int main()
{
    song();

    int16_t i{32767}; // Maximum intiger in int16_t is 32767.
    cout << i << '\n' << endl;
    cout << "int16_t size is: " << sizeof(int16_t) << " bytes\n" << endl;

    /*
    Fast and least integers
    To help address the above downsides, C++ also defines two alternative sets of integers.
    The fast type (std::int_fast#_t) provides the fastest signed integer type with a width of 
    at least # bits (where # = 8, 16, 32, or 64). For example, std::int_fast32_t will give you 
    the fastest signed integer type that’s at least 32 bits.
    The least type (std::int_least#_t) provides the smallest signed integer type with a width of 
    at least # bits (where # = 8, 16, 32, or 64). For example, std::int_least32_t will give you 
    the smallest signed integer type that’s at least 32 bits.
    Here’s an example from the author’s Visual Studio (32-bit console application):
    */

    cout << "fast 8: " << sizeof(int_fast8_t) * 8 << " bits\n";
	cout << "fast 16: " << sizeof(int_fast16_t) * 8 << " bits\n";
	cout << "fast 32: " << sizeof(int_fast32_t) * 8 << " bits\n";
 
	cout << "least 8: " << sizeof(int_least8_t) * 8 << " bits\n";
	cout << "least 16: " << sizeof(int_least16_t) * 8 << " bits\n";
	cout << "least 32: " << sizeof(int_least32_t) * 8 << " bits\n" << endl;

    int8_t myint{65}; //Warning: std::int8_t and std::uint8_t may behave like chars instead of integers.
    cout << myint << '\n' << endl;

    cout << sizeof(size_t) << '\n' << endl;





    return 0;
}