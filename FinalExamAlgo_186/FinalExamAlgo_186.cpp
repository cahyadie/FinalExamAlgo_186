#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

class Stackarray {
private:
	string stack_array[5];
	int top;
public:
	Stackarray() {
		top = -1;
	}
	string push(string element) {
		if (top == 4) {
			cout << "Number of data exeeds the limit." << endl;
			return "";
		}

		top++; 
		stack_array[top] = element; 
		cout << endl;
		cout << element << " Ditambahkan(pushed) " << endl;

		return element;
	}

	void tambahMahasiswa()
	{
		if (jumlahMahasiswa < MAX_MAHASISWA)
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else
		{
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}

	};
bool Empty() {
	return (top == -1);
}
void tampilkanSemuaMahasiswa() {
	if (Empty()) {
		cout << "\nStack is empty. " << endl;
	}
	else {
		for (int tmp = 0; tmp <= top; tmp++) {
			cout << stack_array[tmp] << endl;
		}

	}
}

	
	void algorithmacariMahasiswaByNIM();
	
	void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
		{
			pilihan.tambahMahasiswa();
			break;
		}
		case 2:
			pilihan.tampilkanSemuaMahasiswa();
			break;
		case 3:
			pilihan.
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//2. Stackarray
//3. stack menumpuk data sedangkan queue seperti data yang mengantri
//4. saat menggunakan struktur lifo 
//5. a. 4
//	 b. 