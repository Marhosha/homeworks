#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number_of_month;

    cout << "Введите номер месяца: ";
	cin >> number_of_month;

	if (number_of_month % 2 == 0) {
		if (number_of_month == 2) {
			cout << "В этом месяце 28 или 29 дней\n";
		}
		else {
			cout << "В этом месяце 30 дней\n";
		}
	}
	else {
		cout << "В этом месяце 31 день\n";
	}
}