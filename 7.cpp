#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "¬ведите вид многоугольника"<<endl;
	cin >> n;

	double x, y;
	cout << "¬ведите координаты 1 вершины" << endl;

	cin >> x >> y;
	double p = 0;
	double fx = x, fy = y;
	for (int i = 2; i <= n; ++i)
	{
		double x1, y1,st;
		cout << "¬ведите координаты следующей вершины" << endl;
		cin >> x1 >> y1;
		st = sqrt(abs(x1 - x) * abs(x1 - x) + abs(y1 - y) * abs(y1 - y));
		p += st;
		x = x1;
		y = y1;
	}
	cout << p + sqrt(abs(fx - x) * abs(fx - x) + abs(fy - y) * abs(fy - y));
}
