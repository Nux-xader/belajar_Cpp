#include <iostream>
using namespace std;

int main(){

    int uts;
    int uas;
    int tugas;
    int kuis;
    int nilai;
    string result;
    string name;
    cout << "QUIS 1: MENGHITUNG RATA-RATA NILAI" << endl;
    cout << "---------------------------------------" << endl ;

    cout << "Masukkan nama anda : " ;
    cin >> name;
    cout << "INPUT Nilai UTS = " ;
    cin >> uts;
    cout << "INPUT Nilai UAS = " ;
    cin >> uas;
    cout << "INPUT Nilai Tugas = " ;
    cin >> tugas;
    cout << "INPUT Nilai Kuis = " ;
    cin >> kuis;
    cout << endl << "---------------------------------------" << endl ;
    nilai = (uts+uas+tugas+kuis)/4;

    // menggunakan percabangan if/esle/if
    if (nilai > 79) {
        result = "Sangat Baik";
    }
    if (nilai > 69 and nilai < 80) {
        result = "Baik";
    }
    if (nilai > 59 and nilai < 70) { 
        result = "Cukup";
    }
    if (nilai < 60) {
        result = "Kurang (Gagal)";
    }

    cout << "Rata-Rata = " << nilai << ", ";
    cout << "Keterangan = " << result << endl;

    return 0;
}