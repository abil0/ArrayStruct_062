#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa 
{
    string nama;
    string nim;
    DetailAlamat alamat;
    int umur;
};

int main()
{
 Mahasiswa mhs[3];

 for (int i = 0; i < 3; i++) {

        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nomer Mahasiswa= ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa = ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Mahasiswa = ";
        cout << "\t Nama Desa: ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota: ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa = ";
        cin >> mhs[i].umur;
        cin.ignore();


 }

  for (int i = 0; i < 3; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "\n NIM = " << mhs[i].nim ;
        cout << "\n Nama = " << mhs[i].nama ;
        cout << "\n alamat =";
        cout << "\n desa = " << mhs[i].alamat.desa ;
        cout <<"\n kota = " << mhs[i].alamat.kota ;
        cout << "\n Umur = " << mhs[i].umur ;
  }
    
    return 0;
}   