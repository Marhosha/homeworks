#include <iostream>
using namespace std;

int main()
{
	int first_num;
	int second_num;
	
	cout << "input first number: "; 
	cin >> first_num;
	cout << "input second number: ";
	cin >> second_num;

	if (second_num > first_num) {
		cout << 0;
	}
	else {
		cout << first_num % second_num;
	}
}