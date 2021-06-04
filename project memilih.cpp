#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int pil;
	cout<<"masukkan pilihan anda";
	cin>>pil;
	switch (pil)
	{
	case 1:
		cout<<"anda memilih menu 1";
		break;
	
	case 2:
		cout<<"anda memilih menu 2";
		break;
		
	default;
		cout<<"daftar menu tidak ada";
		break;
	}
}