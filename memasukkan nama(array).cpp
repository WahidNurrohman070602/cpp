#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	string nama[6];
	for(int a=0;a<6;a++)
	{
		cout<<"masukkan nama ke" <<a+1<<":";
		cin>>nama[a];
	}
	cout<<"nama yang anda masukkan adalah:" <<endl;
	for(int a=0;a<6;a++)
	{
		cout<<nama[a] <<endl;
	}
}