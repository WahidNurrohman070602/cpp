#include<iostream>
using namespace std;
main()
{
	int awal, akhir;
	cout<<"tampilkan nilai awal : ";
	cin>>awal;
	cout<<"tampilkan nilai akhir : ";
	cin>>akhir;
	for(int a=awal;a<=akhir;a++)
	{
		cout<<a<<" = "<<a*a<<endl;
	}
}