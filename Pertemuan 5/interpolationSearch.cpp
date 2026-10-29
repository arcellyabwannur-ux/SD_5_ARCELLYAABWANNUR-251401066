#include <iostream>
#include <math.h>

using namespace std;
main() {
    int data[7] = { 10, 13, 17, 34, 58, 67, 99};

    int cari,posisi;
    float posisi1;
    int N = 7, flag = 0, low = 0, high = N - 1;
    
    cout << "Masukkan data yang ingin dicari = ";
    cin >> cari;

    do {
        posisi1 = {cari - data[low]} / {data[high] - data[low]} * (high - low) + low;
        posisi = floor(posisi1);

        if (data[posisi] == cari) {
            flag = 1;
            break;
        }
        if (data[posisi] > cari) {
            high = posisi - 1;
        } 
        else if (data[posisi] < cari) {
            low = posisi + 1;
        }
    
        while (cari > data[low] && cari <= data[high]) 
        if (flag == 1) {
            cout << "Data ditemukan pada index ke-" << posisi;
        } else {
            cout << "Data tidak ditemukan";
        }
    }
