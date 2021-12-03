#include<iostream>
#include<windows.h>
using namespace std;
main() {
	int pilihan;
	int menu;
	cout<<"daftar program\n";
	cout<<"1. antrian\n";
	cout<<"2. tumpukan\n";
	cout<<"masukkan pilihan program : " ;
	cin>>pilihan;
	system("cls");
	if(pilihan==1) {
		int antrian[100];
		int jumlah=0;
		int belakang=0;
		int menu, max;
		char ulang;
		char reset;
		cout<<"masukkan jumlah antrian maksimal hari ini : ";
		cin>>max;
		//tampilan
		do{
			system("cls");
			cout<<"========program antrian========\n";
			cout<<"===============================\n";
			cout<<"data pengantri saat ini\n";
			for(int a=1;a<=belakang;a++) {
				cout<<a<<"||";
			}
			cout<<"\njumlah maksimal pengantri = " <<max;
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
					cout<<"antrian sudah penuh";
				}else {
					cout<<"data antrian ke " <<belakang+1;
					jumlah++;
					belakang++;
				}
			}else if(menu==2) {
				if(jumlah==0) {
					cout<<"antrian masih/sudah kosong\n";
				}else {
					cout<<belakang <<" silahkan menuju loket";
					belakang--;
					jumlah--;
					for(int a=0;a<belakang;a++) {
						antrian[a]=antrian[a+1];
					}
				}
			}else if(menu==3) {
				cout<<"apakah antrian benar benar mau di riset (y/t) : ";
				cin>>reset;
				if(reset=='y') {
					cout<<"reset antrian\n";
					for(int a=0;a<belakang;a--) {
						max=0;
						jumlah=0;
						belakang=0;
					}
				}
			}else {
				cout<<"salah pilih!";
			}
		cout<<"\nApakah mau mengulang antrian (y/t) : ";
		cin>>ulang;
		}while(ulang=='y' || 'Y');
	}else if(pilihan==2) {
		int tumpukan[100];
		int atas=0;
		int jumlah=0;
		int counter=0;
		int pilih, tetap, max;
		char ulang;
		char reset;
		cout<<"masukkan maksimal jumlah tumpukan : ";cin>>max;
		system("cls");
		do{
			system("cls");
			cout<<"========program tumpukan========\n";
			cout<<"===============================\n";
			cout<<"data tumpukan saat ini\n";
			for(int a=atas-1;a>=0;a--) {
				cout<<tumpukan[a+1] <<endl;
			}
			cout<<"\njumlah tumpukan = " <<max;
			cout<<"\nmenu\n";
			cout<<"1. tambah tumpukan\n";
			cout<<"2. ambil tumpukan\n";
			cout<<"3. reset tumpukan\n";
			cout<<"\npilih : ";
			cin>>menu;
			cout<<"\n===============================\n";
			//opsi menu
			if(menu==1) {
				if(atas==max) {
					cout<<"tumpukan sudah penuh";
				}else {
					counter++;
					atas++;
					cout<<"anda menumpukan barang ke " <<atas;
					tumpukan[atas]=counter;
					jumlah++;
				}
			}else if(menu==2) {
				if(atas>0) {
					atas--;
					cout<<"data " <<tumpukan[atas] <<" diambil";
					jumlah--;
				}else {
					cout<<"tumpukan masih/sudah kosong\n";
				}
			}else if(menu==3) {
				cout<<"apakah tumpukan benar benar mau di riset (y/t) : ";
				cin>>reset;
				if(reset=='y') {
					cout<<"reset tumpukan\n";
					for(int a=0;a<atas;a--) {
						max=0;
						jumlah=0;
						atas=0;
					}
				}
			}else {
				cout<<"salah pilih!";
			}
		cout<<"\nApakah mau mengulang antrian (y/t) : ";
		cin>>ulang;
		}while(ulang=='y' || 'Y');
	}
}
