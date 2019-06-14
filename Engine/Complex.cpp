#include "Complex.h"



Complex::Complex(double Re, double Im)
{
	real = Re;
	imaginary = Im;
}

Complex Complex::Square() const
{
	Complex complex(0,0);
	complex.real = real * real - imaginary * imaginary;
	complex.imaginary = 2 * real * imaginary;
	return complex;
}


Complex::~Complex()
{
}
