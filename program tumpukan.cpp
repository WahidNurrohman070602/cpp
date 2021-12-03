#include<iostream>
#include<windows.h>
using namespace std;
main() {
	int atas=0;
	string tumpukan[5];
	int menu;
	char ulang;
	do {
		system("cls");
		cout<<"======program tumpukan======\n";
		cout<<"----------------------------\n";
		cout<<"1. Tambah Tumpukan\n";
		cout<<"2. Ambil Tumpukan\n";
		cout<<"3. Melihat Tumpukan\n";
		cout<<"Pilih : ";
		cin>>menu;
		cout<<endl;
		//pilihan menu
		if(menu==1) {
			//tambah tumpukan
			if(atas==5) {
				cout<<"tumpukan sudah penuh!";
			}else{
				cout<<"masukkan barang yang di tumpuk : ";
				cin>>tumpukan[atas];
				atas++;
			}
		}else if(menu==2) {
			//ambil tumpukan
			if(atas>0) {
				atas--;
				cout<<"\ndata " <<tumpukan[atas] <<" sudah diambil";
			}else{
				cout<<"tumpukan masih kosong";
			}
		}else if(menu==3) {
			//meluhat tumpukan
			cout<<"\njumlah tumpukan saat ini" <<atas;
			cout<<"\ndata tumpukan";
			cout<<"\n----------------------------\n";
			for(int a=atas-1;a>=0;a--) {
				cout<<tumpukan[a] <<endl;
			}
		}else {
			cout<<"anda salah pilih!";
		}
	cout<<"\n----------------------------\n";
	cout<<"apakah anda ingin mengulang : ";
	cin>>ulang;
	}while(ulang=='y' || 'Y');
}