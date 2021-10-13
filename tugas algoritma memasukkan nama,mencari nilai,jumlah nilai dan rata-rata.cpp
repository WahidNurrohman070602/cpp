#include<iostream>
using namespace std;
main() {
	string nama[5];
	int nilai[5];
	int a=0,sum=0;
	float jumlah_data,rata_rata;
	jumlah_data=sizeof(nilai)/sizeof(*nilai);
	cout<<"\n============ | input data | ============\n";
	cout<<endl;
	for(a=0;a<5;a++) {
		cout<<"masukkan nama : ";
		cin>>nama[a];
		cout<<"masukkan nilai : ";
		cin>>nilai[a];
	}
	cout<<"\n============ | output data | ============\n";
	cout<<endl;	
	for(a=0;a<5;a++) {
		cout<<"nama : " <<nama[a] <<endl;
		cout<<"nilai : " <<nilai[a] <<endl;
		sum+=nilai[a];
	}
	cout<<"\n============ | output nilai | ============\n";
	cout<<endl;
	rata_rata=sum/jumlah_data;
	cout<<"jumlah nilai : " <<sum<<endl;
	cout<<"rata-rata nilai : " <<rata_rata;
}