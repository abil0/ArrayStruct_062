#include <iostream>
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
    Mahasiswa mhs;

    cout << "Nomer Mahasiswa= ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa = ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa = ";
    cout << "\t Nama Desa: ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa = ";
    cin >> mhs.umur;
    


    cout << endl;
    cout << "Menampilkan Data" <<endl;
    cout << endl;

    cout << "\n NIM = " << mhs.nim << endl;
    cout << "\n Nama = " << mhs.nama << endl;
    cout << "\n Alamat = " << mhs.alamat << endl;
    cout << "\n Umur = " << mhs.umur << endl;
}   