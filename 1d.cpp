#include <iostream>
using namespace std;
int main()
{
	double x = -1.5;
	while (x >= -1.5 && x <= 1.5)
	{
		if (x < -0.5) cout << 1 - x * x << x << endl;
		else if (-0.5 <= x <= 1) cout << x + 1 << x << endl;
		else if (x > 1) cout << 1 + abs(cos(x)) << x << endl;
		x += 0.25;
	}
}