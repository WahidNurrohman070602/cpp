#include<iostream>
#include<stdlib.h>
using namespace std;
main() {
	A:
	char ulang;
	int pil,modal,pendapatan,laba,rugi;
	system("cls");
	cout<<"Manajemen Keuangan UMKM" <<endl;
	cout<<"--------------------------------" <<endl;
	cout<<"=========Pilihan Program========" <<endl;
	cout<<"1. Laba dan Rugi" <<endl;
	cout<<"--------------------------------" <<endl;
	cout<<"Masukan pilihan anda : ";
	cin>>pil;
	cout<<"--------------------------------" <<endl;
	switch(pil) {
		case 1:
			cout<<"Menghitung Laba dan Rugi" <<endl;
			cout<<"--------------------------------" <<endl;
			cout<<"Masukan jumlah modal : Rp. ";
			cin>>modal;
			cout<<"Masukan jumlah pendapatan : Rp. ";
			cin>>pendapatan;
			cout<<"--------------------------------" <<endl;
			if(pendapatan>modal) {
			    laba=pendapatan-modal;
			    cout<<"Anda mendapat laba sebesar : Rp." <<laba<<endl;
			}else if(pendapatan<modal) {
			    rugi=pendapatan-modal;
			    cout<<"Anda mendapat rugi sebesar : Rp." <<rugi<<endl;
			}else {
			    cout<<"Anda tidak laba dan rugi" <<endl;
			}
	}
	cout<<"--------------------------------" <<endl;
	cout<<"apakah anda ingin mengulang ? (Y/N) : ";
	cin>>ulang;
	if(ulang=='y' || 'Y') {
		goto A;
	}
}