using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение С: ";
	cin >> C;
	if ((A < B) & (B < C)) {
		cout << "Истина";
	}
	else { cout << "Ложь"; };
}