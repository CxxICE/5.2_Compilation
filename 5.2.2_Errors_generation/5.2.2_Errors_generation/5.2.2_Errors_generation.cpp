#include <windows.h>

#include <iostream>

#include "math_calc.h"

//синтаксическая ошибка в строке 36
//ошибка линковки в файле math_calc.cpp в строке 6
//семантическая ошибка в строке 48

enum class Operation				
{
	ADD = 1,
	SUB,
	MUL,
	DIV,
	EXP,
};

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Operation operation;
	double num1, num2;
	int oper;
	bool flag;
	do
	{
		std::cout << "Введите первое число: ";
		std::cin >> num1;
		
		std::cout << "Введите второе число: ";
		std::cin << num2;//синтаксическая ошибка, угловые скобки не в ту сторону заменить << на >>
		
		do
		{
			flag = 0;
			std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
			std::cin >> oper;
			if (oper < 1 || oper > 5) 
			{ 
				flag = 1; 
				std::cout << "Неверный ввод!\n";
			}
		} while (!flag);//семантическая ошибка нужно убрать инверсию (!flag) заменить на (flag)

		operation = static_cast<Operation>(oper);

		switch (operation)
		{
		case Operation::ADD:
			add(num1, num2);
			break;
		case Operation::SUB:
			sub(num1, num2);
			break;
		case Operation::MUL:
			mul(num1, num2);
			break;
		case Operation::DIV:
			div(num1, num2);
			break;
		case Operation::EXP:
			exp(num1, num2);
			break;
		}
	} while (true);  
}