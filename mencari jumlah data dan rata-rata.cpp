#include<iostream>
using namespace std;
main() {
	string nama[100];
	int nilai[100];
	int a=0, sum=0, jumlah_input;
	float jumlah_data, rata_rata;
	cout<<"\n============ | input jumlah data | ============\n";
	cout<<endl;
	cout<<"masukkan jumlah yang ingin di input : ";
	cin>>jumlah_input;
	cout<<"\n============ | input data | ============\n";
	cout<<endl;
	for(a=0;a<jumlah_input;a++) {
		cout<<"masukkan nama : ";
		cin>>nama[a];
		cout<<"masukkan nilai : ";
		cin>>nilai[a];
		jumlah_data+=nilai[a];
	}
	cout<<"\n============ | output data | ============\n";
	cout<<endl;
	for(a=0;a<jumlah_input;a++) {
		cout<<"nama : " <<nama[a] <<endl;
		cout<<"nilai : " <<nilai[a] <<endl;
	}
	cout<<"\n============ | output nilai | ============\n";
	cout<<endl;
	rata_rata=jumlah_data/jumlah_input;
	cout<<"jumlah nilai : " <<jumlah_data<<endl;
	cout<<"rata-rata : " <<rata_rata<<endl;
	return 0;
}