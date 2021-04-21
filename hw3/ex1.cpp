#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void check_module(int use_module)
{
	if (use_module == 1) {
		cout << "\nВсе значения преобразованы в значение по модулю";
	}
}

double calc_plus(double a, double b)
{
	return a + b;
}

double calc_minus(double a, double b)
{
	return a - b;
}

double calc_times(double a, double b)
{
	return a * b;
}

double calc_divide(double a, double b)
{
	return a / b;
}

double calc_percent(double a, double b)
{
	return a / 100 * b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int use_module;
	string operation;
	double first_num;
    double second_num;
	cout << "Нужно ли использовать значение по модулю? (1 - да, 0 - нет) " << endl;
	cin >> use_module;
	cout << "Какую операцию вы хотите использовать?" << endl
		 << "+ для сложение\n"
		 << "- для вычитание\n"
		 << "* для умножение\n"
		 << "/ для деление\n"
		 << "sqrt для корень\n"
		 << "^ для возведение числа в степень\n"
		 << "% для нохождение процента от числа\n";
	cin >> operation;

	double module_first;
	double module_second;

	if (operation == "sqrt") {
		cout << "Введите число: ";
		cin >> first_num;

		if (use_module == 0) {
			module_first = first_num;
		}
		else {
			module_first = abs(first_num);
		}

		if (first_num < 0) {
			cout << "Нельзя брать корень из отрицаельного числа";
		}
		else {
			cout << "Вы произвели операцию корень, корень из " << first_num << " = " << sqrt(first_num);
			check_module(use_module);
		}
	}
	else {
		cout << "Введите первое число: ";
		cin >> first_num;
		cout << "Введите второе число: ";
		cin >> second_num;

		if (use_module == 0) {
			module_first = first_num;
			module_second = second_num;
		}
		else {
			module_first = abs(first_num);
			module_second = abs(second_num);
		}
	}

	if (operation == "+") {
		cout << "Вы произвели операцию сложение, " 
			 << module_first << " + " << module_second << " = " << calc_plus(module_first, module_second);
		check_module(use_module);
	}
	else if (operation == "-") {
		cout << "Вы произвели операцию вычитание, "
			<< module_first << " - " << module_second << " = " << calc_minus(module_first, module_second);
		check_module(use_module);
	}
	else if (operation == "*") {
		cout << "Вы произвели операцию умножение, "
			<< module_first << " * " << module_second << " = " << calc_times(module_first, module_second);
		check_module(use_module);
	}
	else if (operation == "/") {
		if (module_second == 0) {
			cout << "На 0 делить нельзя ";
		}
		else {
			cout << "Вы произвели операцию деление, "
				<< module_first << " / " << module_second << " = " << calc_divide(module_first, module_second);
			check_module(use_module);
		}
	}
	else if (operation == "^") {
		cout << "Вы произвели операцию возведение в степень, "
			<< module_first << " ^ " << module_second << " = " << pow(module_first, module_second);
		check_module(use_module);
	}
	else if (operation == "%") {
		cout << "Вы произвели операцию нахождение процента от числа, "
			<< module_first << " * " << module_second << "% " << " = " << calc_percent(module_first, module_second);
		check_module(use_module);
	}

	string next;
	cout << endl << "Продолжить? Введите, 'y' чтобы продолжить 'n' - закончить: ";
	cin >> next;

	if (next == "y") {
		main();
	}
	else {
		cout << endl << "Програма завершена";
	}
}