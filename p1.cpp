#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputdata(){
    cout << "masukkan panjangnya:";
    cin >> panjang;

    cout << "masukkan lebarnya";
    cin >> lebar;
}

void prosedurluas(){
    luas = panjang * lebar; 
}


void tampilkanluas(){
    cout << "luas persegi panjang:" << luas << endl;
}



int main()
{
    inputdata();
    prosedurluas();
    tampilkanluas();
}