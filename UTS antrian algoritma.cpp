#include<iostream>
#include<windows.h>
using namespace std;
main() {
	int antrian[100];
	int jumlah=0;
	int belakang=0;
	int menu;
	int max;
	char ulang;
	cout<<"masukkan jumlah maksimal antrian : ";
	cin>>max;
	do{
		system("cls");
		cout<<"===============================\n";
		cout<<"|\tprogram antrian\t|\n";
		cout<<"===============================\n";
//		cout<<"masukkan jumlah maksimal antrian : ";
//		cin>>jumlah;
		cout<<"data pengantri saat ini\n";
		for(int a=0;a<belakang;a++) {
			cout<<antrian[a] <<"|";
		}
		cout<<"\njumlah pengantri = " <<max;
		cout<<"\n===============================\n";
		cout<<"\nmenu\n";
		cout<<"1. tambah antrian\n";
		cout<<"2. ambil antrian\n";
		cout<<"3. reset antrian\n";
		cout<<"\npilih : ";
		cin>>menu;
		cout<<"===============================\n";
		//opsi menu
		if(menu==1) {
			if(jumlah==max) {
				cout<<"antrian sudah penuh!";
			}else {
				cout<<"masukkan antrian : ";
				cin>>antrian[belakang];
				jumlah++;
				belakang++;
			}
		}else if(menu==2) {
			if(jumlah==0) {
				cout<<"antrian masih/sudah kosong\n";
			}else {
				cout<<"antrian ke " <<antrian[0] <<" silahkan menuju loket";
				belakang--;
				jumlah--;
				for(int a=0;a<belakang;a++) {
					antrian[a]=antrian[a+1];
				}
			}
		}else if(menu==3) {
			cout<<"reset antrian";
			for(int a=0;a<belakang;a--) {
				max=0;
				jumlah=0;
				belakang=0;
			}
		}else {
			cout<<"salah pilih!";
		}
	cout<<"\nApakah mau mengulang : ";
	cin>>ulang;
	}while(ulang=='y' || 'Y');
}
