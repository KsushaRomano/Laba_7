using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите четырехзначное число A: ";
	cin >> A;
	if ((int(A / 1000) == (A % 10)) & ((int(A / 100) % 10) == (int(A / 10) % 10))) { cout << "Истина"; }
	else { cout << "Ложь"; };
}