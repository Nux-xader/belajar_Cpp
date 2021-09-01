// Joki tugas C++ materi array
#include <iostream>
using namespace std;

int main(){
	int matrix_a[4];
	int matrix_b[4];
	string index[] = {"[0] [0]", "[0] [1]", "[1] [0]", "[1] [1]"};
	cout << "Namaku adalah : Your name\nUmurku : old\n";
	cout << "==============================\nMenampilkan perhitungan matrix\n";

	// Get value matrix A
	cout << "Matrix A :\n";
	for (int i=0; i<4; i++){
		cout <<"A "<< index[i]<< " = ";
		cin >> matrix_a[i];
	}

	// Get value matrix B
	cout << "\nMatrix B :\n";
	for (int i=0; i<4; i++){
		cout <<"B "<< index[i]<< " = ";
		cin >> matrix_b[i];
	}

	// View result
	cout << "Hasil penjumlahan matrix :\n";
	for (int i=0; i<4; i++){
		cout <<"C "<< index[i]<< " = "<< matrix_a[i]+matrix_b[i]<< "\n";
	}

	return 0;
}
