// TugasURO2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int operasi;
int angka1 = 0;
int angka2 = 0;
int pertama, kedua, ketiga;

double f(double x) {
    double a = (pertama * x * x) + (kedua * x) + (ketiga); // fungsi integral
    return a; // nilai integaral
}
void integrals() {
    double x, a, b, h, integral; // deklarasi variabel yang akan digunakan
    double sum = 0; // deklarasi variabel total luas trapezoid
    int n;       //n adalah subinterval
    cout << "ax^2 + bx + c\n";
    cout << "Masukkan konstanta pertama : ";
    cin >> pertama;
    cout << "Masukkan konstanta kedua : ";
    cin >> kedua;
    cout << "Masukkan konstanta ketiga : ";
    cin >> ketiga;
    cout << "Masukkan limit bawah : ";
    cin >> a;
    cout << "Masukkan limit atas : ";
    cin >> b;
    cout << "Masukkan jumlah trapezoid (subinterval) : ";
    cin >> n;
    h = (b - a) / n; //Panjang tiap interval
    for (int i = 0; i < n; i++) { // for loop untuk menghitung nilai tiap interval
        x = a + i * h; // menghitung luas satu trapezoid ke-i
        sum = sum + f(x); // menambahkan semua nilai luas trapezoid per-i
    }
    integral = h / 2.0 * (f(a)+2*sum+f(b)); // rumus integral trapezoid
    cout << integral; // print nilai luas integral
}

int main() {
    printf("kalkulator operasi 2 angka sederhana\n");
    printf("1 : integral fungsi orde 2\n2 : penjumlahan\n3 : pengurangan\n4 : perkalian\n5 : pembagian\n6 : perpangkatan (pangkat>1)\n");
    printf("Masukkan Operasi yang diinginkan : ");
    cin >> operasi;

    switch (operasi) {
    case 1:
            integrals();
            break;
    case 2:
        printf("Masukkan angka pertama : ");
        cin >> angka1;
        printf("Masukkan angka kedua : ");
        cin >> angka2;
        cout << angka1 + angka2;
        break;

    case 3:
        printf("Masukkan angka pertama : ");
        cin >> angka1;
        printf("Masukkan angka kedua : ");
        cin >> angka2;
        cout << angka1 - angka2;
        break;

    case 4:
        printf("Masukkan angka pertama : ");
        cin >> angka1;
        printf("Masukkan angka kedua : ");
        cin >> angka2;
        cout << angka1 * angka2;
        break;

    case 5:
        printf("Masukkan angka pertama : ");
        cin >> angka1;
        printf("Masukkan angka kedua : ");
        cin >> angka2;
        cout << angka1 / angka2;
        break;
    case 6:
        printf("Masukkan angka pertama : ");
        cin >> angka1;
        printf("Masukkan angka kedua : ");
        cin >> angka2;
        cout << pow(angka1,angka2);
        break;

    default:
        cout << "Error! operator salah";
        break;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
