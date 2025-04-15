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

    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << "Data ke-" << i+1 << " = " << nama[i] << endl;
    }
};

#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs[2];

    for (int i = 0; i  < 2; i++){
        cout << "Mahasiswa ke-"<< i+1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cin.ignore();
        cout << "Masukkan NAMA = ";
        getline(cin , mhs[i].nama);
        cout << "Masukkan Alamat Desa = ";
        cin >> mhs[i].alamat.desa;
        cout << "Masukkan Alamat Kota = ";
        cin >> mhs[i].alamat.kota;
    }

    //menampilkan data struct
    for(int i = 0; i < 2; i++){
        cout << endl;
        cout << "Mahasiswa ke-"<< i+1 << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Desa = " << mhs[i].alamat.desa << endl;
        cout << "Kota = " << mhs[i].alamat.kota << endl;
    }

}

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
};
