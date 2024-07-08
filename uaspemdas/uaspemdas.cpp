/*! \mainpage Sistem Penilaian


*/


#include <iostream>
using namespace std;

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

// float