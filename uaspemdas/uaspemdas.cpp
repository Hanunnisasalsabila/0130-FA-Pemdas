/*! \mainpage Sistem Penilaian Dua Mata Kuliah
* \section intro_sec Pengantar
* Selamat datang di dokumentasi Sistem Penilaian Dua Mata Kuliah.
* Sistem ini dirancang untuk menilai hasil akhir apakah Lulus atau tidak lulus
*
* \section structure_sec Struktur Pilihan
*  terdiri dari tiga Pilihan utama:
* - \b Pemrograman
* - \b Jaringan
* - \b Keluar
*
* \section author_sec Tentang Pengembang
* Sistem ini dikembangkan oleh HanunNisaSalsabila.id
*
* \section note_sec Catatan
* Dokumentasi ini dihasilkan  menggunakan Doxygen. Pastikan untuk mengikuti komentar yang disediakan dalam kode untuk pemahaman yang lebih baik.
*/

/**
 * @file UASPemdas.cpp
 * @brief Sistem Penilaian Dua Mata Kuliah.
 */

#include <iostream>
using namespace std;

/**
 * @class MataKuliah
 * @brief Kelas untuk menangani informasi tentang Mata Kuliah.
 */

class MataKuliah {
private: string nilai;

	float presensi, activity, exercise, tugasAkhir;

public:
	MataKuliah() {
		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;
	}
	virtual void namaMataKuliah() {
		cout << "Masukkan nilai presensi : " << endl;
		cin >> presensi;
		cout << "Maukkan nilai activity : " << endl;
		cin >> activity;
		cout << "Maukkan nilai exercise : " << endl;
		cin >> exercise;
		cout << "Maukkan nilai tugas akhir : " << endl;
		cin >> tugasAkhir;
		return;
	}

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}

};

class Pemrograman : public MataKuliah
{

};

class Jaringan : public MataKuliah
{

};

int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;

	int pilihan = 0;
	while (pilihan != 3) {
		cout << "1. Pemrograman\n";
		cout << "2. Jaringan\n";
		cout << "3. Keluar\n";
		cout << "Pilih: ";
		cin >> pilihan;

	}

}
