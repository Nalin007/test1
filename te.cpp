#include<iostream>
using namespace std;
int main()
{
	float C, F;
	cout << "Enter Celsius temperature : ";
	cin >> C;
	F = 1.8 * C + 32;
	cout << "Fahrenheit = " << 9 / 5 * C + 32 << endl;
	cout << "Now weather in Thailand is ";
	cout << (F >= 70 ? "Hot" : "Cool") << endl;
	return (0);
}