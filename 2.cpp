#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int summ = 0, k = 0, minn = 0;

	for (int i = 1; i <= 7; ++i)
	{
		int x;
		cin >> x;
		if (x < 0) k += 1;//a
		if ((x / 10 >= 1 && x / 10 <= 9) or (x / 10) <= -1 && x / 10 >= -9) summ += x;//b
		//c
		if (x <= minn) minn = x;
	}
	cout << "����� ����� �����: " << k << endl;
	cout << "����� ���������� �����: " << summ << endl;
	cout << "����������� �����: " << minn << endl;



}