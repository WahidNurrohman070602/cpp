#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	char nama[20];
	int ulang;
	cout<<"masukkan nama :";
	cin.get(nama,20);
	cout<<"jumlah ulang :";
	cin>>ulang;
	for(int a=1;a<=ulang;a++)
	{
		cout<<a<<". "<<nama<<endl;
	}
}