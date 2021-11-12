#include <iostream>
#include <windows.h>
using namespace std;

class Tampilan {
	
	private:
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	public:
		void setWarnaTeks(int warna) {
			SetConsoleTextAttribute(handle, warna);
		}
		
		void showJudul() {
			for(int i = 1; i<=45; i+=3) {
				gotoxy(i, 0);
				setWarnaTeks(6);
				cout<<"   ==============================";
				gotoxy(i, 1);
				cout<<"   SISTEM PENGAMBILAN DANA BANSOS";
				gotoxy(i, 2);
				cout<<"   ==============================\n";
				Sleep(10);
			}
		}

		void showIntro() {
			/* Membutuhkan Compiler TDM-GCC 10.3.0 (https://jmeubank.github.io/tdm-gcc/)
			* Karena butuh C++11 untuk menjalankan Raw String, yaitu R"(....)"
			*/
			setWarnaTeks(10);
			cout << R"(		
		____/\\\\\\\\\______/\\\\\\\\\\\______/\\\\\\\\\\\_____/\\\\\\\\\_____/\\\_____________        
 		 __/\\\///////\\\___\/////\\\///______\/////\\\///____/\\\\\\\\\\\\\__\/\\\_____________       
  		  _\/\\\_____\/\\\_______\/\\\_____________\/\\\______/\\\/////////\\\_\/\\\_____________      
		   _\/\\\\\\\\\\\/________\/\\\_____________\/\\\_____\/\\\_______\/\\\_\/\\\_____________     
		    _\/\\\//////\\\________\/\\\_____________\/\\\_____\/\\\\\\\\\\\\\\\_\/\\\_____________    
		     _\/\\\____\//\\\_______\/\\\_____________\/\\\_____\/\\\/////////\\\_\/\\\_____________   
		      _\/\\\_____\//\\\______\/\\\______/\\\___\/\\\_____\/\\\_______\/\\\_\/\\\_____________  
		       _\/\\\______\//\\\__/\\\\\\\\\\\_\//\\\\\\\\\______\/\\\_______\/\\\_\/\\\\\\\\\\\\\\\_ 
		        _\///________\///__\///////////___\/////////_______\///________\///__\///////////////__
			)" << '\n';
		}

		void gotoxy(short x, short y) {
			COORD posisi = {x, y};
			SetConsoleCursorPosition(handle, posisi);
		}
};

class Antrian {
	
	private:
		int antrian[5];
		int nomor_antrian = 1;
		int jumlah = 0;
		int belakang = 0;
		Tampilan tampilan;
	
	public: 
		void tambahAntrian() {
			if(jumlah == 5) {	
				cout<<"Antrian sudah penuh\n";
		
			}else {
				jumlah++;
				tampilan.setWarnaTeks(10);
				cout<<"Anda antrian ke-"<<jumlah<<" dengan nomor antrian: "<<nomor_antrian<<"\n"; 
		
				antrian[belakang] = nomor_antrian;
				nomor_antrian++;
				belakang++;
			}
		}

 		void ambilAntrian() {
			if(jumlah == 0) {
				tampilan.setWarnaTeks(12);
				cout<<"Antrian masih kosong\n";
			}else {
				tampilan.setWarnaTeks(10);
				cout<<"Nomor antrian "<<antrian[0]<<" silahkan menuju loket\n";
				belakang--;
				jumlah--;
				for(int i = 0; i<belakang; i++) {
					antrian[i] = antrian[i+1];
				}
			}
		}
		
		void lihatAntrian() {
			tampilan.setWarnaTeks(7);
			cout<<"Data yang mengantri saat ini : \n";
			for(int i = 0; i < belakang; i++) {
				tampilan.setWarnaTeks(9);
				cout<<antrian[i]<<" | ";
			}
			tampilan.setWarnaTeks(7);	
			cout<<"\nJumlah pengantri : "<<jumlah<<"\n";
		}	
};

void tampilkanKeMain() {
	
	int menu;
	char ulang;
	Antrian antrian;
	Tampilan tampilan;
	
	do {
		system("cls");
		tampilan.showJudul();
		tampilan.showIntro();
		antrian.lihatAntrian();
		cout<<"+--------------------+\n";
		cout<<"| Menu :             |\n";
		cout<<"|--------------------|\n";
		cout<<"| 1. Tambah Antrian  |\n";
		cout<<"| 2. Ambil Antrian   |\n";
		cout<<"| 3. Lihat Antrian   |\n";
		cout<<"+--------------------+\n";
		cout<<"Pilih menu : "; cin>>menu;
		cout<<"----------------------\n";
		
		switch(menu) {
			case 1: {
				antrian.tambahAntrian();
				break;
			}
			case 2: {
				antrian.ambilAntrian();
				break;
			}
			case 3: {
				antrian.lihatAntrian();
				break;
			}
			default: {
				tampilan.setWarnaTeks(12);
				cout<<"Pilihan menu tidak ada!\n";
			}
		}
		
		tampilan.setWarnaTeks(7);
		cout<<"Apakah mau mengulang? (y/n): "; cin>>ulang;
	}while(ulang=='y'|| ulang=='Y');	
}
int main() {
	tampilkanKeMain();
}
