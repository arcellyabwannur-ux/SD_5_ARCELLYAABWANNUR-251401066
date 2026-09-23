#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    int var;
    // int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Masukkan nilai array elemen ke-" << i + 1 << " : ";
    //     cin >> var;
    //     arr[i] = var;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Elemen ke-" << i + 1 << " = " << arr[i] << endl;
    // }

    cout << "Masukkan ukuran array : ";
    cin >> var;

    int *arr = new int[var];

    cout << "Masukkan " << var << " angka : \n" << endl;
    for (int i = 0; i < var; i++)
    {
        cin >> arr[i];
    }

    cout << "Isi array : " << endl;
    for (int i = 0; i < var; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}