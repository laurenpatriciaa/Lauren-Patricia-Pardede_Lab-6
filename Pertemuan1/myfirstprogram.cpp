#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    system("CLS");

    cout << "Hello World" << endl;

    cout << "Masukkan Nama : ";

// Membaca seluruh baris untuk nama dengan spasi
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    system("CLS");

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;

// Set presisi output untuk IP menjadi dua desimal
    cout << fixed << setprecision(2);

    cout << "IP : " << ip << endl;

    return 0;
}