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
	if (((a + b) > c) & ((b + c) > a) & ((a + c) > b)) {
		cout << "Истина";
	}
	else { cout << "Ложь"; };
}