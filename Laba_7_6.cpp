using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите значение стороны a: ";
	cin >> a;
	cout << "Введите значение стороны b: ";
	cin >> b;
	cout << "Введите значение стороны c: ";
	cin >> c;
	if ((a + b) > c) {
		if ((a * a) + (b * b) == c * c) {
			cout << "Истина";
		}
		else { cout << "Ложь"; };
	}
	else if ((a + c) > b) {
		if ((a * a) + (c * c) == b * b) {
			cout << "Истина";
		}
		else { cout << "Ложь"; };
	}
	else if ((b + c) > a) {
		if ((b * b) + (c * c) == a * a) {
			cout << "Истина";
		}
		else { cout << "Ложь"; };
	}
	else { cout << "Ложь"; };
}