#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Введите четырёх значное число: ";
	cin >> num;
	cout << num % 10 << num / 10 % 10 << num / 10 / 10 % 10 << num / 1000;
}