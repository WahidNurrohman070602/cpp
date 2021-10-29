#include<iostream>
#include<windows.h>
using namespace std;
main() {
	string antrian[5];
	int jumlah=0;
	int belakang=0;
	int menu;
	char ulang;
	//tampilan
	do{
		system("cls");
		cout<<"========program antrian========\n";
		cout<<"===============================\n";
		cout<<"\nmenu\n";
		cout<<"1. tambah antrian\n";
		cout<<"2. ambil antrian\n";
		cout<<"3. lihat antrian\n";
		cout<<"\npilih : ";
		cin>>menu;
		cout<<"===============================\n";
		//opsi menu
		if(menu==1) {
			if(jumlah==5) {
				cout<<"antrian sudah penuh";
			}else {
				cout<<"masukkan nama : ";
				cin>>antrian[belakang];
				jumlah++;
				belakang++;
			}
		}else if(menu==2) {
			if(jumlah==0) {
				cout<<"antrian masih/sudah kosong\n";
			}else {
				cout<<antrian[0] <<" silahkan menuju loket";
				belakang--;
				jumlah--;
				for(int a=0;a<belakang;a++) {
					antrian[a]=antrian[a+1];
				}
			}
		}else if(menu==3) {
			cout<<"data pengantri saat ini\n";
			for(int a=0;a<belakang;a++) {
				cout<<antrian[a] <<"||";
			}
			cout<<"\njumlah pengantri=" <<jumlah;
		}else {
			cout<<"salah pilih!";
		}
	cout<<"\nApakah mau mengulang : ";
	cin>>ulang;
	}while(ulang=='y' || 'Y');
}
