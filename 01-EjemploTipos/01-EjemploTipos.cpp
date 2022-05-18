#include <iostream>
#include <cassert>
using namespace std;

int main()
{

		assert(-10 == -10); // Int assert
		assert(-10 == -5 * 2); // Int assert
		assert(-10 <= -5); // Int assert
		// assert(10 == 5); Int assert que fallaria.

		assert(0 == 0); // Unsigned assert
		assert(10 != 5); // Unsigned assert
		// assert(-3 == -3;) Unsigned assert que fallaria si estuviese definida una variable como unsigned y fuese utilizada en la comparacion.

		assert(0.500 == 0.5); // Double assert
		assert(0.500 == 0.25+0.25); // Double assert
		assert(0.55 != 0.2755555 + 0.2755555); // Double assert
		// assert(0.500005 == 0.5); Double assert que fallaria.

		assert(false == false); // Bool assert
		assert(false != true); // Bool asseert
		assert(1 == true); // Bool asseert
		assert(0 == false); // Bool asseert
		// assert(false == true); False assert que fallaria.

		assert('B' == 'B'); // Char assert
		assert('A' <= 'B'); // Char assert
		// assert('B' == 'b'); Char assert que fallaria.

		assert("Esto es una prueba." == "Esto es una prueba."); // String assert
		assert("ASD" != "DSA"); // String assert
		// assert("Esto es una prueba." == "eSTO ES UNA PRUEBA."); String assert que fallaria
}

