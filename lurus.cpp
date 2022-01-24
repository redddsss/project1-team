#include <iostream>
using namespace std;

int main(){
    float p, l, t, volume;

    cout << "Program Menghitung Volume Balok" << endl;

    cout << "Masukkan panjang balok: ";
    cin >> p;

    cout << "Masukkan lebar balok: ";
    cin >> l;

    cout << "Masukkan tinggi balok: ";
    cin >> t;

    volume = p * l * t;

    cout << "Volume Balok = p x l x t" << endl;
    cout << "Volume Balok = " << p << " x " << l << " x " << t << endl;
    cout << "Volume Balok = " << volume << endl;

    return 0;
}