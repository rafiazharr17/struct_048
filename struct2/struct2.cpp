#include <iostream>
using namespace std;

struct DetailAlamat
{
	string Desa;
	string Kota;
};
struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int Umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat :" << endl;
	cout << "\n\tMasukkan Desa = ";
	cin >> mhs.Alamat.Desa;
	cout << "\tMasukkan Kota = ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukkan Umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.Desa;
	cout << "\nKota = " << mhs.Alamat.Kota;
	cout << "\nUmur = " << mhs.Umur;

}