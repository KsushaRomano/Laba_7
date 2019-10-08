using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите число A: ";
	cin >> A;
	if ((A > 9) & (A < 100) & ((A % 10 == 2) || (A % 10 == 4) || (A % 10 == 6) || (A % 10 == 8) || (A % 10 == 0))) { cout << "Истина"; }
	else { cout << "Ложь"; };
}