#include <iostream>
using namespace std;

//deklarasi array dengan ukuran, dan diiberi nilai awal
int nilai[]={1,2,3};

//deklarasi array dengan ukuran, dan diberi nilai awal
int skor[4]={9,13,20,11};

//deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];

int main(){
    cout << "Isi data skor yang ketiga = " << skor[2] << endl;
    //Mengisi array pada index tertentu secara langsung
    skor[2] = 50;
    cout << "Isi data skor yang ketiga = " << skor[2] << endl;

    //Mengisi array dengan looping for
    for(int i = 0; i < 3; i++){
        cout << "Mahasiswa ke-" << i+1 << " = ";
        cin >> nama[i];
    }