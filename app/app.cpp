#include "app.h"
#include <string>
#include <iostream>
using namespace std;

namespace vsite::oop::v8
{
	int input_num(std::istream& input) {
		int n;
		input >> n;
		if (input.fail()) {
			throw not_number();
		}
		return n;
	}

	char input_op(std::istream& input) {
		char c;
		input >> c;
		if ("+-*/"s.find(c) == std::string::npos) {
			throw not_operator();
		}
		return c;
	}

	double calc(double x, char c, double y) {
		switch (c) {
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			if (y == 0){ 
				throw divide_zero();
			}
			else {
				return x / y;
			}
		}
	}
}