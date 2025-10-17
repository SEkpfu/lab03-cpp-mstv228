#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i += 1)
	{
		s += 1.0 / (2.0 * i);
	}

	cout << s;
}