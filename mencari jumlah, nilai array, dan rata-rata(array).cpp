#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	int nilai[]={90,60,30,80};
	int a=0,sum=0,j_data,rata;
	j_data=sizeof(nilai)/sizeof(*nilai);
	while(a<j_data)
	{
		sum+=nilai[a];
		a++;
	}
	
	cout<<sum<<endl;
	cout<<j_data<<endl;
	rata=sum/j_data;
	cout<<"rata-rata nilai : "<<rata;
}