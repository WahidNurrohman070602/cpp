#include<iostream>
using namespace std;
main(){
	float celcius, fahrenheit, reamur;
	int pilihan;
	cout<<"masukkan suhu dalam celcius : ";
	cin>>celcius;
	cout<<"masukkan pilihan konversi : " <<endl;
	cout<<"1. fahrenheit" <<endl;
	cout<<"2. reamur" <<endl;
	cout<<"masukkan pilihan anda : ";
	cin>>pilihan;
	if(pilihan==1){
		fahrenheit=(celcius*9/5)+32;
		cout<<"suhu fahrenheit nya adalah : " <<fahrenheit<<endl;
	}else if(pilihan==2){
		reamur=(celcius*4/5);
		cout<<"suhu reamur nya adalah : " <<reamur<<endl;
	}else{
		cout<<"pilihan anda tidak ada!";
	}
}