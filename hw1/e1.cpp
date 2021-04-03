#include <iostream>
#include <string>
using namespace std;

int main()
{
	string last_name;
	string first_name;
	int age; 

	cout << "Input last name: ";
	cin >> last_name;
	cout << "Input first name: ";
	cin >> first_name;
	cout << "Input age: ";
	cin >> age;

	cout << last_name + " " + first_name + ", " << age;

	return 0;
}