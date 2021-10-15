#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	char ulang;
	do
	{
		system("cls");
		int jt,st=0,telur=22000;
		int ji,si=0,indomie=3000;
		int jk,sk=0,kecap=7500;
		int jr,sr=0,roti=12000;
		int htotal=0;
		float disc, jbayar=0;
		//menu
		cout<<"=======daftar menu=======" <<endl;
		cout<<"1. telur \t:22.000" <<endl;
		cout<<"2. indomie \t:3.000" <<endl;
		cout<<"3. kecap \t:75.000" <<endl;
		cout<<"4. roti \t:12.000" <<endl;
		cout<<"===================" <<endl;
		cout<<"silahkan pilih jumlah pembelian" <<endl;
		cout<<"telur \t:";
		cin>>jt;
		cout<<"indomie \t:";
		cin>>ji;
		cout<<"kecap \t:";
		cin>>jk;
		cout<<"roti \t:";
		cin>>jr;
		//menghitung subtotal tiap-tiap barang
		st=jt*telur;
		si=ji*indomie;
		sk=jk*kecap;
		sr=jr*roti;
		//menghitung total di subtotal
		htotal=st+si+sk+sr;
		//menghitung diskon
		if(htotal>=100000)
		{
			disc=0.15*htotal;
		}
		else if(htotal>=75000)
		{
			disc=0.1*htotal;
		}
		else if(htotal>=50000)
		{
			disc=0.05*htotal;
		}
		else
		{
			disc=0;
		}
		//menghitung jumlah bayar
		jbayar=htotal-disc;
		//menampilkan nota
		cout<<"\n\t\tNOTA PENJUALAN" <<endl;
		cout<<"\t\tTOKO UNSIQ MART" <<endl;
		cout<<"\tUNSIQ kalibeber wonosobo" <<endl;
		cout<<"===========================================================" <<endl;
		cout<<"..........................................................." <<endl;
		cout<<"No\t barang\t\t\t jumlah\t harga\t subtotal" <<endl;
		cout<<"..........................................................." <<endl;
		cout<<"1.\t telur\t\t\t "<<jt<<"\t "<<telur<<"\t "<<st<<endl;
		cout<<"..........................................................." <<endl;
		cout<<"2.\t indomie\t\t "<<ji<<"\t "<<indomie<<"\t "<<si<<endl;
		cout<<"..........................................................." <<endl;
		cout<<"3.\t kecap\t\t\t "<<jk<<"\t "<<kecap<<"\t "<<sk<<endl;
		cout<<"..........................................................." <<endl;
		cout<<"4.\t roti\t\t\t "<<jr<<"\t "<<roti<<"\t "<<sr<<endl;
		cout<<"..........................................................." <<endl;
		cout<<"\t\t\t\t total harga\t "<<htotal<<endl;
		cout<<"diskon\t\t :" <<disc<<endl;
		cout<<"total bayar\t :" <<jbayar<<endl;
		cout<<"===========================================================" <<endl;
		cout<<"\napakah mau mengulang:";
		cin>>ulang;		
	}while (ulang=='y' || 'Y');
}