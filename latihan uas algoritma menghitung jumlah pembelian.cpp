#include<iostream>
#include<stdlib.h>
using namespace std;
main() {
	char ulang;
	do {
		system("cls");
		int pil1, harga_total, jumlah_bayar;
		int jm_m, martabak_manis=30000;
		int jm_a, martabak_asin=25000;
		float diskon;
		//menu
		cout<<"===========daftar menu===========" <<endl;
		cout<<"PILIHAN" <<endl;
		cout<<"1. martabak manis (30.000)" <<endl;
		cout<<"2. martabak asin (25.000)" <<endl;
		cout<<"================================" <<endl;
		//menghitung seluruh belanja
		cout<<"masukkan pilihan anda : ";
		cin>>pil1;
		cout<<"================================" <<endl;
		if(pil1==1) {
			harga_total=martabak_manis;
			cout<<"1. martabak manis (30.000)" <<endl;
			cout<<"jumlah yang mau di beli : ";
			cin>>jm_m;
			//total bayar
			harga_total=jm_m*martabak_manis;
			cout<<"total bayar : Rp " <<harga_total;
			cout<<"\n================================" <<endl;
			//masukkan pilihan user
			cout<<"masukkan pilihan anda : ";
			cin>>pil1;
			cout<<"================================" <<endl;
			if(pil1==2) {
				harga_total=martabak_asin;
				cout<<"2. martabak asin (25.000)" <<endl;
				cout<<"jumlah yang mau di beli : ";
				cin>>jm_a;
				harga_total=jm_a*martabak_asin;
				cout<<"total bayar : Rp " <<harga_total;
				cout<<"\n================================" <<endl;
				//pilihan 1 di tambah pilihan 2
				harga_total=martabak_manis+martabak_asin;
				cout<<"pilihan yang anda masukka adalah : " <<endl;
				cout<<"1. martabak manis (30.000)" <<endl;
				cout<<"2. martabak asin (25.000)" <<endl;
				cout<<"................................" <<endl;
				//total bayar
				jumlah_bayar=jm_m*martabak_manis + jm_a*martabak_asin;
				cout<<"total bayar : Rp " <<jumlah_bayar;
				cout<<"\n................................" <<endl;
			}else {
				cout<<"menu yang anda pilih tidak ada !" <<endl;
			}
		}else if(pil1==2) {
			harga_total=martabak_asin;
			cout<<"1. martabak asin (25.000)" <<endl;
			cout<<"jumlah yang mau di beli : ";
			cin>>jm_a;
			harga_total=jm_a*martabak_asin;
			cout<<"total bayar : Rp " <<harga_total;
			cout<<"\n================================" <<endl;
			//masukkan pilihan user
			cout<<"masukkan pilihan anda : ";
			cin>>pil1;
			cout<<"================================" <<endl;
			if(pil1==1) {
				harga_total=martabak_manis;
				cout<<"2. martabak manis (30.000)" <<endl;
				cout<<"jumlah yang mau di beli : ";
				cin>>jm_m;
				harga_total=jm_m*martabak_manis;
				cout<<"total bayar : Rp " <<harga_total;
				cout<<"\n================================" <<endl;
				//pilihan 1 di tambah pilihan 2
				harga_total=martabak_manis+martabak_asin;
				cout<<"pilihan yang anda masukkan adalah : " <<endl;
				cout<<"1. martabak asin (25.000)" <<endl;
				cout<<"2. martabak manis (30.000)" <<endl;
				cout<<"................................" <<endl;
				//total bayar
				jumlah_bayar=jm_a*martabak_asin + jm_m*martabak_manis;
				cout<<"total bayar : Rp " <<jumlah_bayar;
				cout<<"\n................................" <<endl;
			}else {
				cout<<"menu yang anda pilih tidak ada !" <<endl;
			}
		}
		cout<<"\njika pembelian lebih dari 75.000 maka dapat diskon 20%" <<endl;
		//jika user ingin mengulang
		cout<<"\napakah anda ingin mengulang (Y/N) : ";
		cin>>ulang;
	}while(ulang=='y' || 'Y');
}