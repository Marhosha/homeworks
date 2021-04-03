#include <iostream>
using namespace std;

int main()
{
	int a, b, f;

	cout << "Input number a: ";
	cin >> a;
	cout << "Input number b: ";
	cin >> b;
	cout << "Input number f: ";
	cin >> f;
	cout << (a + b - f / a) + f * a * a - (a + b);
}