#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	A:
	int kode1, kode2;
	int awal, akhir;
	char ulang;
	
	system ("cls");
	cout<<"program perulangan untuk menampilkan bilangan urut" <<endl;
	cout<<"==================================================" <<endl;
	cout<<"pilihan" <<endl;
	cout<<"1. kecil - besar" <<endl;
	cout<<"2. besar - kecil" <<endl;		
	cout<<"==================================================" <<endl;
	
	//masukkan input user pilihan 1
	cout<<"masukkan pilihan : ";
	cin>>kode1;
	cout<<"==================================================" <<endl;
	
	if(kode1==1){
		cout<<"1. kecil - besar" <<endl;
		cout<<"anda menampilkan angka dari kecil - besar" <<endl;
		cout<<"==================================================" <<endl;
		cout<<"masukkan angka awal : ";
		cin>>awal;
		cout<<"masukkan angka akhir : ";
		cin>>akhir;
		for(int a=awal;a<=akhir;a++)
		{
			cout<<a<<", ";
		}
		cout<<endl;
	
	cout<<endl;
	cout<<"==================================================" <<endl;
	
	//apabila user ingin mengulang 
	cout<<"apakah anda ingin mengulang?" <<endl;
	cout<<"pilih (Y/N) : ";
	cin>>ulang;
	if(ulang=='y' || 'Y')
	{
		goto A;
	}
	
	//masukkan input user pilihan 2
	}else if(kode2==2)
	cin>>kode2;
	{
			cout<<"2. besar - kecil" <<endl;
			cout<<"anda menampilkan angka dari besar - kecil" <<endl;
			cout<<"==================================================" <<endl;
			cout<<"masukkan angka awal : ";
			cin>>awal;
			cout<<"masukkan angka akhir : ";
			cin>>akhir;
			for(int a=awal;a>=akhir;a--)
			{
				cout<<a<<", ";
			}
			cout<<endl;
		}
	
	
	cout<<endl;
	cout<<"==================================================" <<endl;
	
	//apabila user ingin mengulang 
	cout<<"apakah anda ingin mengulang?" <<endl;
	cout<<"pilih (Y/N) : ";
	cin>>ulang;
	if(ulang=='y' || 'Y')
	{
		goto A;
	}
	
}