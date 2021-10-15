#include<iostream>
using namespace std;
void luas();
void keliling();
int p, l, L, k;
main() {
	int pilihan;
	cout<<"masukkan data panjang : ";
	cin>>p;
	cout<<"masukkan data lebar : ";
	cin>>l;
	cout<<"pilihan : " <<endl;
	cout<<"1. luas" <<endl;
	cout<<"2. keliling" <<endl;
	cout<<"masukkan pilihan : ";
	cin>>pilihan;
	if(pilihan==1) {
		luas();
	}else if(pilihan==2) {
		keliling();
	}else {
		cout<<"pilihan anda tidak ada!";
	}
}
void luas() {
	L=p*l;
	cout<<"luas persegi : " <<L;
}
void keliling() {
	k=2*(p+l);
	cout<<"keliling persegi : " <<k;
}