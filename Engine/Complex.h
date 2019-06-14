#pragma once
class Complex
{
public:

	Complex(double Re, double Im);
	Complex Square() const;
	~Complex();

private:
	double real;
	double imaginary;
};

