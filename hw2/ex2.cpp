#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int first_num;
	int second_num;
	int result; 
	cout << "Введите первое число: " << endl;
	cin >> first_num;
	cout << "Введите второе число: " << endl;
	cin >> second_num;
	cout << "Введите результат: " << endl;
	cin >> result;

	if (result == first_num * second_num) {
		cout << "ПРАВИЛЬНО!!!";
	}
	else {
		cout << "НЕПРАВИЛЛЬНО!!! Правильный ответ: " << second_num * first_num;
	}
}