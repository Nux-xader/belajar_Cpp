#include <iostream>
#include <cstring>

using namespace std;

char * format_ribuan(char st[]);

char * format_ribuan(char st[]){
	static char strTemp[80];
	int i , posisiTemp , posisiSt;
	int panjang , jumlh_titik , sisa_digit;
	int jamKar;

	cout << "masukan_panjang : ";
	cin >> jumlh_titik;
	
	panjang = strlen(st);
	
	if (panjang == 0)
		return (char *) 0;
		
		jumlh_titik = panjang / 3;
		
		if (jumlh_titik == 0)
		return (char *) st;
		
		jamKar = panjang + jumlh_titik;
		posisiTemp = jamKar - 1;
		
		while (panjang > 3)
		{
			posisiSt = panjang - 1;
			for (i = posisiSt; i > posisiSt - 3; i--)
			{
				strTemp[posisiTemp] = st[i];
				posisiTemp = posisiTemp - 1;
			}
			
			strTemp[posisiTemp] = '.';
			posisiTemp--;
			
			panjang = panjang - 3;
		}
		
		if (panjang > 0)
			for (i = 0; i < panjang; i++)
				strTemp[i] = st[i];
				
			strTemp[jamKar] = 0;
			
			return (char *)strTemp;
}

int main()
{
	string n;
	cout << "Masukkan angka : ";
	cin >> n;
	int len_n = n.length();
	char angka[len_n+1];
	strcpy(angka, n.c_str());
	cout << format_ribuan(angka) << endl;

	return 0;
}