#include "math_calc.h"

#include <iostream>
#include <cmath> //для возведения в степень, т.к. возведение в дробную степень - не тривиальная задача

void addd(double num1, double num2)//ошибка линковки, нужно переименовать addd -> add
{
	std::cout << num1 << " плюс " << num2 << " = " << num1 + num2 << std::endl;
}

void sub(double num1, double num2)
{
	std::cout << num1 << " минус " << num2 << " = " << num1 - num2 << std::endl;
}

void mul(double num1, double num2)
{
	std::cout << num1 << " умножить на " << num2 << " = " << num1 * num2 << std::endl;
}

void div(double num1, double num2)
{
	if (num2 == 0)
	{
		std::cout << "Деление на ноль невозможно" << std::endl;
	}
	else
	{
		std::cout << num1 << " разделить на " << num2 << " = " << num1 / num2 << std::endl;
	}	
}

void exp(double num1, double num2)
{
	std::cout << num1 << " в степени " << num2 << " = " << std::pow(num1, num2) << std::endl;	
}