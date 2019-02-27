#pragma once

struct Complex
{
public:
	Complex(double r, double i): _r(r), _i(i)
	{}

	Complex(): _r(0.0), _i(0.0)
	{}

	double real() 
	{
		return _r;
	}

	double image()
	{
		return -i;
	}

	Complex operator+(const Complex& rhs) const
	{
		return Complex(r + rhs.r, i + rhs.i);
	}

	Complex operator-(const Complex& rhs) const
	{
		return Complex(r - rhs.r, i - rhs.i);
	}

	Complex operator*(const Complex& rhs) const
	{
		return Complex(r * rhs.r - i * rhs.i, r * rhs.i + i * rhs.r);
	}

private:
	double _r;
	double _i;
};

