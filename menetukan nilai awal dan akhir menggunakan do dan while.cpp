#include<iostream>
using namespace std;
main()
{
	int awal, akhir;
	cout<<"tampilkan nilai awal : ";
	cin>>awal;
	cout<<"tampilkan nilai akhir : ";
	cin>>akhir;
	do
	{
		cout<<awal<<endl;
		awal--;
	}
	while(akhir<=awal);
}