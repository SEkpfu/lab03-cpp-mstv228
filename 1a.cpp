#include <iostream>
using namespace std;
int main()
{
	int t = 0;
	while (t < 101)
	{
		setlocale(0, "");
		cout << "� ��������: " << t << endl;
		cout << "� �����������: " << 9.0 / 5.0 * t + 32 << endl;
		t += 10;
	}
}