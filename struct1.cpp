#include <iostream>
using namespace std;

struct Mahasiswa 
{
    string nama;
    string nim;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Nomer Mahasiswa= ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa = ";
    cin >> mhs.nama;
    cout << "Alamat = ";
    cin >> mhs.alamat;
    

    cout << endl;
    cout << "Menampilkan Data" <<endl;
    cout << endl;

    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;
}   