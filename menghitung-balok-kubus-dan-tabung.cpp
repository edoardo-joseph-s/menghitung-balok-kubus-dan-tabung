#include <iostream>
#include <string>
using namespace std;

int main() {
    //nama variabel
    int nim;
    string nama, mkl, sesi;

    //keterangan
    cout << "=============================================" << endl;
    cout << "           Algoritma Dan Pemograman           " << endl;
    cout << "=============================================" << endl;

    //Input data diri
    cout << "Nama           : ";
    getline (cin, nama);
    cout << "MIM            : ";
    cin >> nim;
    cin.ignore();
    cout << "Mata Kuliah    : ";
    getline (cin, mkl);
    cout << "Sesi Kelas     : ";
    getline (cin, sesi);
    cout << "---------------------------------------------\n" << endl;

    //Opsi untuk dikerjakan
    cout << "Menu yang tersedia: " << endl;
    cout << "1. Menghitung Keliling Balok " << endl;
    cout << "2. Menghitung Keliling Kubus " << endl;
    cout << "3. Menghitung Luas Permukaan Balok " << endl;
    cout << "4. Menghitung Luas Permukaan Kubus " << endl;
    cout << "5. Menghitung Volume Tabung " << endl;
    cout << "\n" << endl;

    int op; //nama variabel untuk switch
    cout << "Masukan pilihan Anda [1/2/3/4/5]: ";
    cin >> op;
    cout << "---------------------------------------------\n" << endl;

    //proses
    switch(op) {
        case 1:
        float p,l,t;
        int kb;

        cout << "Menghitung Keliling Balok" << endl;
        cout << "Masukan Panjang: ";
        cin >> p;
        cout << "Masukan Lebar  : ";
        cin >> l;
        cout << "Masukan Tinggi : ";
        cin >> t;

        kb = 4 * (p + l + t);

        cout << "Hasil perhitungan pilihan nomor 1 yaitu " << kb;

       if (kb % 2 == 0) {
            cout << " dan merupakan bilangan genap." << endl;
        } else {
            cout << " dan merupakan bilangan ganjil." << endl;
        } 
        break;

        case 2:
        float rusuk;
        int kk;

        cout << "Menghitung Keliling Kubus" << endl;
        cout << "Masukan sisi (rusuk kubus): ";
        cin >> rusuk;

        kk = 12 * rusuk;

        cout << "Hasil perhitungan pilihan nomor 2 yaitu " << kk;

        if (kk % 2 == 0) {
            cout << " dan merupakan bilangan genap." << endl;
        } else {
            cout << " dan merupakan bilangan ganjil." << endl;
        }
        break;

        case 3:
        float p3, l3, t3;
        int lpb;

        cout << "Menghitung Luas Permukaan Balok" << endl;
        cout << "Masukan panjang    : ";
        cin >> p3;
        cout << "Masukan lebar      : ";
        cin >> l3;
        cout << "Masukan tinggi     : ";
        cin >> t3;

        lpb = 2 * (p3*l3 + l3*t3 + p3*t3);

        cout << "Hasil perhitungan pilihan nomor 3 yaitu " << lpb;

        if (kb % 2 == 0) {
            cout << " dan merupakan bilangan genap." << endl;
        } else {
            cout << " dan merupakan bilangan ganjil." << endl;
        }
        break;

        case 4:
        float prk;
        int lpk;

        cout << "Menghitung Luas Permukaan Kubus" << endl;
        cout << "Masukan jumlah sisi kubus: ";
        cin >> prk;

        lpk = 6 * prk * prk;

        cout << "Hasil perhitungan nomor 4 yaitu " << lpk;

        if (lpk % 2 == 0) {
            cout << " dan merupakan bilangan genap." << endl;
        } else {
            cout << " dan merupakan bilangan ganjil." << endl;
        }
        break;

        case 5:
        float mj, tt;
        int vt;

        cout << "Menghitung Volume Tabung" << endl;
        cout << "Masukan jari-jari alals tabung : ";
        cin >> mj;
        cout <<"Masukan Tinggi tabung          : ";
        cin >> tt;

        vt = 3.14 * mj * tt;

        cout << "Hasil perhitungan nomor 4 yaitu " << vt;
        if (lpk % 2 == 0) {
            cout << " dan merupakan bilangan genap." << endl;
        } else {
            cout << " dan merupakan bilangan ganjil." << endl;
        }
        break;
    }

    return 0;
}