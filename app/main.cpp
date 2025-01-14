#include "app.h"
/*
Implementirajte funkcije potrebne da svi testovi prolaze.

Napišite program kojem se unosi aritmetički izraz(cijeli broj, operator, cijeli broj) te ispisuje operacija zajedno sa rezultatom u formatu : 4 + 9 = 13

U programu vrtite beskonačnu petlju dok se operacija uspješno računa.U slučaju iznimke(obavezno koristite samo jedan catch blok) ispišite opis pogreške, jedan od :

not a number
invalid operation
divide by zero
*/
// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description
using namespace vsite::oop::v8;

int main()
	{
	while (true) {
		try {
			int x = input_num(std::cin);
			char c = input_op(std::cin);
			int y = input_num(std::cin);

			double result = calc(x, c, y);
			std::cout << x << c << y << '=' << result << std::endl;
		}
		catch (const exception& e) {
		std::cout << e.desc();
			break;
		}
	}
		
}
