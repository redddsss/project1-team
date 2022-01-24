#include <iostream>
using namespace std;
int main()
{
    int uangSaya = 25000;

    cout << "Masukkan uang saya : ";
    cin >> uangSaya;

    int pilihannya;
    cout << "Mau Makan, Pas Keluar Beli Makanan Hanya ada : " << endl;
    cout << "1. Pecel Lele" << endl;
    cout << "2. Stick Kentang" << endl;
    cout << "Dengan uang segitu Saya bisa beli : ";

    if(uangSaya <= 6000) {
        cout << "Tidak beli apa apa" << endl;
    }
    else if(uangSaya >= 7000 && uangSaya <= 14000){
        cout << "Pecel lele aja " << endl;
    }
    else if(uangSaya >= 15000 && uangSaya <= 22000){
        cout << "Pecel Lele ATAU Steak Kentang ?? " << endl;
    }
    else{
        cout << "Pecel Lele DAN Stick Kentang" << endl;
    }
}