#include<iostream>
#include<windows.h>

using namespace std;

class Tampilan {
	
	private:
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		
	public:
		void SetWarnaText(int warna) {
			SetConsoleTextAttribute(handle, warna);
		}
		void tampilan() {
			SetWarnaText(06);
			cout<<R"(
		 __________________________________________________________________________________
		|__________________________________________________________________________________|
		|__________________________________________________________________________________|
		|_____________|	 __       __   ______   __    __  ______  _______   |______________|
		|_____________|	/  |  _  /  | /      \ /  |  /  |/      |/       \  |______________|
		|_____________|	$$ | / \ $$ |/$$$$$$  |$$ |  $$ |$$$$$$/ $$$$$$$  | |______________|
		|_____________|	$$ |/$  \$$ |$$ |__$$ |$$ |__$$ |  $$ |  $$ |  $$ | |______________|
		|_____________|	$$ /$$$  $$ |$$    $$ |$$    $$ |  $$ |  $$ |  $$ | |______________|
		|_____________|	$$ $$/$$ $$ |$$$$$$$$ |$$$$$$$$ |  $$ |  $$ |  $$ | |______________|
		|_____________|	$$$$/  $$$$ |$$ |  $$ |$$ |  $$ | _$$ |_ $$ |__$$ | |______________|
		|_____________|	$$$/    $$$ |$$ |  $$ |$$ |  $$ |/ $$   |$$    $$/  |______________|
		|_____________|	$$/      $$/ $$/   $$/ $$/   $$/ $$$$$$/ $$$$$$$/   |______________|
		|_____________|_____________________________________________________|______________|
		|__________________________________________________________________________________|
		|__________________________________________________________________________________|			                                                
			)" <<'\n';
		}
		
		void tulisan() {
			SetWarnaText(03);
			cout<<"\t\t\t\t\t+===============================+" <<endl;
			cout<<"\t\t\t\t\t|\tPROGRAM ANTRIAN\t\t|" <<endl;
			cout<<"\t\t\t\t\t+===============================+" <<endl;
		}
};
void delay(int a)
    {
        for(int x=0;x<a*100;x++)
{
        for(int y=0;y<a*100;y++)
            {}
    }
}
void gotoxy(int x, int y) {
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	cout.flush();
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
class Antrian {
	private:
		string antrian[10];
		int jumlah=0;
		int belakang=0;
		int menu;
		int tambah;
		char ulang;
		Tampilan tampilan;
	
	public:
		void tambahAntrian() {
			if(jumlah==5) {
				cout<<"antrian sudah penuh!";
			}else {
				gotoxy(32, 25);
				cout<<"masukkan nama : ";
				cin>>antrian[belakang];
				jumlah++;
				belakang++;
//				gotoxy(32, 23);
//				lihatAntrian();
			}
			
		}
		void ambilAntrian() {
			if(jumlah==0) {
				cout<<"\n\t\t\t\tantrian masih!/sudah kosong!";
			}else {
				gotoxy(32, 27);
				cout<<"atas nama " <<antrian[0] <<" silahkan menuju loket!\n";
				belakang--;
				jumlah--;
				for(int a=0;a<belakang;a++) {
					antrian[a]=antrian[a+1];
				}
			}
		}
		void lihatAntrian() {
			cout<<"data pengantri saat ini : ";
			for(int a=0;a<belakang;a++) {
				cout<<antrian[a] <<" <~| ";
			}
		}
		void jumlahAntrian() {
			cout<<"\njumlah pengantri = " <<jumlah<<endl;
		}
		void salah() {
			cout<<"salah pilih!";
		}
};

void tampilkanKeSini() {
	int menu;
	char ulang;
	Antrian antrian;
	Tampilan tampilan;
	//tampilan
	do{
		system("cls");
		tampilan.tulisan();
		tampilan.tampilan();
		gotoxy(60, 20);
		tampilan.SetWarnaText(05);
		gotoxy(0, 20);
		antrian.lihatAntrian();
		gotoxy(0, 21);
		antrian.jumlahAntrian();
		cout<<"---------------------------------------------------------";
		tampilan.SetWarnaText(02);
		cout<<"\n+-----------------------+|" <<endl;
		cout<<"| menu :\t\t||" <<endl;
		cout<<"+-----------------------+|" <<endl;
		cout<<"| 1. tambah antrian\t||" <<endl;
		cout<<"| 2. ambil antrian\t||" <<endl;
		cout<<"| 3. lihat antrian\t||" <<endl;
		cout<<"+-----------------------+|" <<endl;
		gotoxy(32, 24);
		cout<<"pilih : ";
		cin>>menu;
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
				gotoxy(32, 27);
				antrian.lihatAntrian();
				break;
			}
			default: {
				cout<<"pilihan salah!";
				break;
			}
		}
		gotoxy(32, 29);
		tampilan.SetWarnaText(4);
		cout<<"Apakah mau mengulang (Y/N) : ";
		cin>>ulang;
	}while(ulang=='y' || 'Y');	
}
int main() {
	tampilkanKeSini();
}