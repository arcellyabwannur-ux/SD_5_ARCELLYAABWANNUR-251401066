#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    int var;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai array elemen ke-" << i + 1 << " : ";
        cin >> var;
        arr[i] = var;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Elemen ke-" << i + 1 << " = " << arr[i] << endl;
    }
}