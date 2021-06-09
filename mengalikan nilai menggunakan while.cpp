#include<iostream>
using namespace std;
main()
{
	int awal, akhir;
	cout<<"tampilkan nilai awal : ";
	cin>>awal;
	cout<<"tampilkan nilai akhir : ";
	cin>>akhir;
	while(awal<=akhir)
	{
		cout<<awal<<" = "<<awal*awal<<endl;
		awal++;
	}
}