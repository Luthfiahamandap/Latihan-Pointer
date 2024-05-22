#include <iostream>
using namespace std;

void tambah(double* hasil, double* a, double* b) {
    *hasil = *a + *b; }
void kurang(double* hasil, double* a, double* b) {
    *hasil = *a - *b; }
void kali(double* hasil, double* a, double* b) {
    *hasil = *a * *b; }
void bagi(double* hasil, double* a, double* b) {
    if (*b != 0) {
        *hasil = *a / *b;
    } else {
        std::cout << "Error: Pembagi tidak boleh nol." << endl;
    }
}
int main() {
    double a, b, hasil;
    int pilihan;
    
    cout << "masukkan bilangan pertama: ";
    cin >> a;
    cout << "masukkan bilangan kedua: ";
    cin >> b;

    cout << "pilih operasi: " << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cin >> pilihan;
    
    if (pilihan == 1) {
        tambah(&hasil, &a, &b);
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 2) {
        kurang(&hasil, &a, &b);
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 3) {
        kali(&hasil, &a, &b);
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 4) {
        bagi(&hasil, &a, &b);
        cout << "Hasil: " << hasil << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
    
    return 0;
}
