#include<iostream>
#include<conio.h>
using namespace std;
main() {
	int data[100];
	int n, cari;
	int ketemu=0;
	cout<<"masukkan jumlah data : ";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++) {
		cout<<"data ke " <<i<<" : ";
		cin>>data[i];
	}
	cout<<endl;
	cout<<"masukkan data yang dicari : ";
	cin>>cari;
	for(int i=0;i<=n;i++) {
		if(data[i]==cari) {
			ketemu=1;
			cout<<endl;
			cout<<"data " <<cari<<" ditemukan pada index ke : " <<i<<endl;
		}
	}
	if(ketemu=0) {
		cout<<"data tidak di temukan!";
	}
getch();
}