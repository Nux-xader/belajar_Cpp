// Joki tugas C++ materi array
#include <iostream>
using namespace std;

int main(){
	int matrix_a[4];
	int matrix_b[4];
	string index[] = {"baris 1, kolom 1", "baris 1, kolom 2", "baris 2, kolom 1", "baris 2, kolom 2"};
	cout << "==============================\nMenampilkan perhitungan matrix\n\n";

	// Get value matrix A
	cout << "Matrix A :\n";
	for (int i=0; i<4; i++){
		cout <<index[i]<< " : ";
		cin >> matrix_a[i];
	}

	// Get value matrix B
	cout << "\nMatrix B :\n";
	for (int i=0; i<4; i++){
		cout << index[i]<< " : ";
		cin >> matrix_b[i];
	}

	// View result
	cout << "\nHasil penjumlahan matrix :\n";
	for (int i=0; i<4; i++){
		cout << matrix_a[i]+matrix_b[i]<< " ";
		if ((i+1)%2 == 0) {
			cout << "\n";
		}
	}

	return 0;
}
