#include <iostream>
using namespace std;
int main() 
{
    int number;
    int k=0, k2=0;
    setlocale(0, "");
    cout << "������� �����, ��� ��������� ������� �� �����"<<endl;
    while (cin >> number)
    {
        k++;
        if (number % 2 == 0) k2 += 1;
        if (k == 0) {
            cout << "�� �� ����� �����" << endl;
            return 1;
            }

    }
    cout << "����� ����� = " << k << endl;
    cout << "����� ������ ����� = " << k2 << endl;



}
/*#include <iostream>
using namespace std;

int main() {
    int count = 0, evenCount = 0, number;

    cout << "������� ����� ����� (��� ���������� ������� ���������� ������): ";

    while (cin >> number) {
        count++;
        if ((number & 1) == 0) {
            evenCount++;
        }
    }

    // ���������, ��� ���� ������� ���� �� ���� �����
    if (count == 0) {
        cout << "�� �� ����� �� ������ �����!" << endl;
        return 1;
    }

    cout << "����� ����������: " << count << endl;
    cout << "������ �����: " << evenCount << endl;

    return 0;
}*/