#pragma once
#include <iostream>

namespace vsite::oop::v8 
{
	int input_num(std::istream& n);

	char input_op(std::istream& o);

	double calc(double x, char c, double y);

	class exception {
	public:
		virtual std::string desc() const = 0;
		virtual ~exception() = default;
	};

	class not_number : public exception {
	public:
		std::string desc() const override { return "not a number"; }
	};

	class not_operator : public exception {
	public:
		std::string desc() const override { return "not an operator"; }
	};


	class divide_zero : public exception {
	public:
		std::string desc() const override { return "divide by zero"; }
	};
}