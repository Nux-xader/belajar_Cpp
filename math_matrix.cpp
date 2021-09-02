// Joki tugas C++ materi array, oprasi pada matrix 3x3
#include <iostream>
using namespace std;

int main() {
	// Declaration variable
	int matrix_a[9];
	int matrix_b[9];
	int num;
	int cell[27][2] = {
		{0, 0}, {1, 3}, {2, 6}, 
		{0, 1}, {1, 4}, {2, 7}, 
		{0, 2}, {1, 5}, {2, 8}, 
		{3, 0}, {4, 3}, {5, 6}, 
		{3, 1}, {4, 4}, {5, 7}, 
		{3, 2}, {4, 5}, {5, 8}, 
		{6, 0}, {7, 3}, {8, 6}, 
		{6, 1}, {7, 4}, {8, 7}, 
		{6, 2}, {7, 5}, {8, 8}
	};

	string index[] = {
		"(0, 0)", "(0, 1)", "(0, 2)", 
		"(1, 0)", "(1, 1)", "(1, 2)", 
		"(2, 0)", "(2, 1)", "(2, 2)"
	};
	// Student information
	cout << "Nama : -\nKelas : -\nAlamat : -\nNirm : -\n";

	// Get value for Matrix A
	cout << "\n## Matrix 1 ##\n";
	for (int i=0; i<9; i++){
		cout <<"Masukkan Index "<< index[i]<< " = ";
		cin >> matrix_a[i];
	}

	cout << "\n## Matrix 2 ##\n";
	for (int i=0; i<9; i++){
		cout <<"Masukkan Index "<< index[i]<< " = ";
		cin >> matrix_b[i];
	}

	// View result sum
	cout << "\nPenjumlahan\n\n## Matrix 1 + Matrix 2 ##\n\n";
	for (int i=0; i<9; i++){
		cout << matrix_a[i]+matrix_b[i]<<" ";
		if ((i+1)%3 == 0) {
			cout << "\n";
		}
	}

	// View result subtract
	cout << "\nPengurangan\n\n## Matrix 1 - Matrix 2 ##\n\n";
	for (int i=0; i<9; i++){
		cout << matrix_a[i]-matrix_b[i]<<" ";
		if ((i+1)%3 == 0) {
			cout << "\n";
		}
	}

	// View result multiplication
	cout << "\nPerkalian\n\n## Matrix 1 x Matrix 2 ##\n\n";
	num = 0;
	for (int x=0; x<27; x++){
		num+=(matrix_a[cell[x][0]] * matrix_b[cell[x][1]]);
		if ((x+1)%3 == 0) {
			cout << num <<" ";
			num = 0;
		}
		if ((x+1)%9 == 0) {
			cout << "\n";
		}
	}

	return 0;
}