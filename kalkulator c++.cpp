#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "selamat datang di program aritmatika";
	cout <<"masukkan nilai pertama : ";
	cin >> a;
	cout<<"=========================================\n";
	cout << "pilih operator +,-,/,*,: ";
	cin >> aritmatika;
	cout<<"=========================================\n";
	cout <<"masukkan nilai kedua : ";
	cin >> b;
	cout<<"=========================================\n";
	
	cout <<"\nHasil perhitungan: ";
	cout << a <<aritmatika <<b;
	if (aritmatika == '+'){
		hasil = a+b;
	}else if (aritmatika == '-'){
		hasil = a-b;
	}else if (aritmatika == '/'){
		hasil = a/b;
	}else if (aritmatika == '*'){
		hasil = a*b;	
	}else {
		cout << "operator anda salah!\n";
	}
	
	cout << "=" << hasil << endl;
	
	cin.get();
	return 0;
		
}
