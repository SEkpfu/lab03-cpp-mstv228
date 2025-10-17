#include <iostream>
using namespace std;
int main() 
{
    int number;
    int k=0, k2=0;
    setlocale(0, "");
    cout << "Введите числа, для остановки введите не число"<<endl;
    while (cin >> number)
    {
        k++;
        if (number % 2 == 0) k2 += 1;
        if (k == 0) {
            cout << "вы не ввели число" << endl;
            return 1;
            }

    }
    cout << "колво чисел = " << k << endl;
    cout << "колво четных чисел = " << k2 << endl;



}
/*#include <iostream>
using namespace std;

int main() {
    int count = 0, evenCount = 0, number;

    cout << "Вводите целые числа (для завершения введите нечисловой символ): ";

    while (cin >> number) {
        count++;
        if ((number & 1) == 0) {
            evenCount++;
        }
    }

    // Проверяем, что было введено хотя бы одно число
    if (count == 0) {
        cout << "Вы не ввели ни одного числа!" << endl;
        return 1;
    }

    cout << "Общее количество: " << count << endl;
    cout << "Четных чисел: " << evenCount << endl;

    return 0;
}*/