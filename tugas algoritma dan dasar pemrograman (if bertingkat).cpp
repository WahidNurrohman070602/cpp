#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	A:
	int kode1, kode2, kode3, total_bayar;
	int ayam_goreng = 18000, ikan_goreng = 16000, es_teh = 3000;
	char ulang;
	
	system("cls");
	cout<<"====DAFTAR MENU WARUNG MAKAN BAHAGIA====\n";
	cout<<"========================================\n";
	cout<<"PILIHAN 1\n";
	cout<<"1. AYAM GORENG (Rp. 18.000)\n";
	cout<<"2. IKAN GORENG (Rp. 16.000)\n";
	cout<<"3. ES TEH (Rp. 3.000)\n";
	cout<<"4. SELESAI\n";
	
	cout<<"========================================\n";
	cout<<"MASUKKAN PILIHAN ANDA : ";
	cin>>kode1;
	cout<<"========================================\n";
	
	if(kode1==1){
		total_bayar=ayam_goreng;
		cout<<"PILIHAN 2\n";
		cout<<"2. IKAN GORENG (Rp. 16.000)\n";
		cout<<"3. ES TEH (Rp. 3.000)\n";
		cout<<"4. SELESAI\n";
		
		cout<<"========================================\n";
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>kode2;
		cout<<"========================================\n";
		
		if(kode2==2){
			total_bayar = ayam_goreng+ikan_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"3. ES TEH (Rp. 3.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==3){
				total_bayar= ayam_goreng+ikan_goreng+es_teh;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){				
				total_bayar= ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"Yang anda masukkan salah!";
			}     
		}else if(kode2==3){
			total_bayar = ayam_goreng+es_teh;
			cout<<"PILIHAN 3\n";
			cout<<"2. IKAN GORENG (Rp. 16.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==2){
				total_bayar= ayam_goreng+es_teh+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){
				total_bayar= ayam_goreng+es_teh;         
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"----------------------------------------\n";
				cout<<"Yang anda masukkan salah!";
			}
				
		}else if(kode2==4){
			total_bayar= ayam_goreng;
			cout<<"----------------------------------------\n";
			cout<<"Total bayar : Rp. "<<total_bayar;
			
		}else{
			cout<<"----------------------------------------\n";
			cout<<"Yang anda masukkan salah!";
		}
	
	
	}else if(kode1==2){
		total_bayar=ikan_goreng;
		cout<<"PILIHAN 2\n";
		cout<<"1. AYAM GORENG (Rp. 18.000)\n";
		cout<<"3. ES TEH (Rp. 3.000)\n";
		cout<<"4. SELESAI\n";
		
		cout<<"========================================\n";
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>kode2;
		cout<<"========================================\n";
		
		if(kode2==1){
			total_bayar = ikan_goreng+ayam_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"3. ES TEH (Rp. 3.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==3){
				total_bayar= ayam_goreng+ikan_goreng+es_teh;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){				
				total_bayar= ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"Yang anda masukkan salah!";
			}     
		}else if(kode2==3){
			total_bayar = ikan_goreng+es_teh;
			cout<<"PILIHAN 3\n";
			cout<<"1. AYAM GORENG (Rp. 18.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==1){
				total_bayar= ikan_goreng+es_teh+ayam_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){
				total_bayar= ikan_goreng+es_teh;         
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"----------------------------------------\n";
				cout<<"Yang anda masukkan salah!";
			}
				
		}else if(kode2==4){
			total_bayar= ikan_goreng;
			cout<<"----------------------------------------\n";
			cout<<"Total bayar : Rp. "<<total_bayar;
			
		}else{
			cout<<"----------------------------------------\n";
			cout<<"Yang anda masukkan salah!";
		}
		
		
	}else if(kode1==3){
		total_bayar=es_teh;
		cout<<"PILIHAN 2\n";
		cout<<"1. AYAM GORENG (Rp. 18.000)\n";
		cout<<"2. IKAN GORENG (Rp. 16.000)\n";
		cout<<"4. SELESAI\n";
		
		cout<<"========================================\n";
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>kode2;
		cout<<"========================================\n";
		
		if(kode2==1){
			total_bayar = es_teh+ayam_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"2. IKAN GORENG (Rp. 16.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==2){
				total_bayar = es_teh+ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){				
				total_bayar= es_teh+ayam_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"Yang anda masukkan salah!";
			}     
		}else if(kode2==2){
			total_bayar = es_teh+ikan_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"1. AYAM GORENG (Rp. 18.000)\n";
			cout<<"4. SELESAI\n";
		
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>kode3;
			cout<<"========================================\n";
			
			if(kode3==1){
				total_bayar = es_teh+ikan_goreng+ayam_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else if(kode3==4){
				total_bayar = es_teh+ikan_goreng;         
				cout<<"----------------------------------------\n";
				cout<<"Total bayar : Rp. "<<total_bayar;
			}else{
				cout<<"----------------------------------------\n";
				cout<<"Yang anda masukkan salah!";
			}
				
		}else if(kode2==4){
			total_bayar = es_teh;
			cout<<"----------------------------------------\n";
			cout<<"Total bayar : Rp. "<<total_bayar;
			
		}else{
			cout<<"----------------------------------------\n";
			cout<<"Yang anda masukkan salah!";
		}
	
	
	}else if(kode1==4){
		total_bayar = 0;
		cout<<"----------------------------------------\n";
		cout<<"\nTotal bayar : Rp. "<<total_bayar;
		
		
	}else{
		cout<<"----------------------------------------\n";
		cout<<"Yang anda masukkan salah!";
	
	}
	
	cout<<endl;
	cout<<"........................................\n";
	
	cout<<"apakah anda ingin mengulang?\n";
	cout<<"pilih (Y/N) : ";
	cin>>ulang;
	if(ulang=='y' || ulang=='Y')
	{
		goto A;
	}
	
}