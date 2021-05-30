#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "selamat datang di program aritmatika";
	
	//masukkan input dari user
	cout <<"masukkan nilai pertama : ";
	cin >> a;
	cout<<"=========================================" <<endl;
	//pilih operator aritmatika
	cout << "pilih operator +,-,/,*,: ";
	cin >> aritmatika;
	cout<<"=========================================" <<endl;
	//masukkan input dari user
	cout <<"masukkan nilai kedua : ";
	cin >> b;
	cout<<"=========================================" <<endl;
	
	cout <<"\nHasil perhitungan: ";
	cout << a <<aritmatika <<b;
	//masukkan operator aritmatika
	if (aritmatika == '+'){
		hasil = a+b;
	}else if (aritmatika == '-'){
		hasil = a-b;
	}else if (aritmatika == '/'){
		hasil = a/b;
	}else if (aritmatika == '*'){
		hasil = a*b;	
	}else {
		//jika user salah memasukkan angka maka yang keluar adalah
		cout << "operator anda salah!" << endl;
	}
	
	//hasil dari perhitungan
	cout << "=" << hasil << endl;
	
	cin.get();
	return 0;
		
}
