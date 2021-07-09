#include<iostream>
#include<stdlib.h>
using namespace std;
main() {
	A:
	int pil1, pil2, pil3;
	char y, t;
	char ulang;
	system("cls");
	cout<<"=====sistem perizinan pondok======" <<endl;
	cout<<"==================================" <<endl;
	cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
	cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
	cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
	cout<<"==================================" <<endl;
	cout<<"masukkan pilihan anda : ";
	cin>>pil1;
	if(pil1==1) {
		cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
		cout<<".................................." <<endl;
		cout<<"sistem perizinannya :" <<endl;
		cout<<"1. sowan ke pengasuh" <<endl;
		cout<<"2. mengisi di buku perizinan" <<endl;
		cout<<"==================================" <<endl;
		cout<<"apakah santri boleh keluar ? " <<endl;
		cout<<"boleh/tidak ? : ";
		cin>>y || t;
		switch(y) {
			case 'y':
				cout<<"santri boleh keluar" <<endl;
				break;
			case 't':
				cout<<"santri dilarang keluar" <<endl;
				break;
			default:
				cout<<"tidak terdefinisi" <<endl;
		}
		cout<<"==================================" <<endl;
		cout<<"masukkan pilihan anda : ";
		cin>>pil2;
		if(pil2==2) {
			cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
					break;
				case 't':
					cout<<"santri dilarang keluar" <<endl;
					break;
				default:
					cout<<"tidak terdefinisi" <<endl;	
			}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil3;
			if(pil3==3) {
				cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
				cout<<"2. ketika belum larut malam" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			}
		}else if(pil2==3) {
			cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
			cout<<"2. ketika belum larut malam" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
					break;
				case 't':
					cout<<"santri dilarang keluar" <<endl;
					break;
				default:
					cout<<"tidak terdefinisi" <<endl;
			}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil3;
			if(pil3==2) {
				cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			}else {
				cout<<"pilihan anda tidak ada!" <<endl;
			}
		}
	}else if(pil1==2) {
		cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
		cout<<".................................." <<endl;
		cout<<"sistem perizinannya :" <<endl;
		cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
		cout<<"==================================" <<endl;
		cout<<"apakah santri boleh keluar ? " <<endl;
		cout<<"boleh/tidak ? : ";
		cin>>y || t;
		switch(y) {
			case 'y':
				cout<<"santri boleh keluar" <<endl;
				break;
			case 't':
				cout<<"santri dilarang keluar" <<endl;
				break;
			default:
				cout<<"tidak terdefinisi" <<endl;	
		}
		cout<<"==================================" <<endl;
		cout<<"masukkan pilihan anda : ";
		cin>>pil2;
		if(pil2==1) {
			cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. sowan ke pengasuh" <<endl;
			cout<<"2. mengisi di buku perizinan" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil3;
			if(pil3==3) {
				cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
				cout<<"2. ketika belum larut malam" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			}
		}else if(pil2==3) {
			cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
			cout<<"2. ketika belum larut malam" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
					break;
				case 't':
					cout<<"santri dilarang keluar" <<endl;
					break;
				default:
					cout<<"tidak terdefinisi" <<endl;
			}
		}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : " <<endl;
			cin>>pil3;
			if(pil3==1) {
				cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. sowan ke pengasuh" <<endl;
				cout<<"2. mengisi di buku perizinan" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			}
	}else if(pil1==3) {
		cout<<"3. pondok pesantren al-asyariyah 3 blok O" <<endl;
		cout<<".................................." <<endl;
		cout<<"sistem perizinannya :" <<endl;
		cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
		cout<<"2. ketika belum larut malam" <<endl;
		cout<<"==================================" <<endl;
		cout<<"apakah santri boleh keluar ? " <<endl;
		cout<<"boleh/tidak ? : ";
		cin>>y || t;
		switch(y) {
			case 'y':
				cout<<"santri boleh keluar" <<endl;
				break;
			case 't':
				cout<<"santri dilarang keluar" <<endl;
				break;
			default:
				cout<<"tidak terdefinisi" <<endl;
		}
		cout<<"==================================" <<endl;
		cout<<"masukkan pilihan anda : ";
		cin>>pil2;
		if(pil2==1) {
			cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. sowan ke pengasuh" <<endl;
			cout<<"2. mengisi di buku perizinan" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
					break;
				case 't':
					cout<<"santri dilarang keluar" <<endl;
					break;
				default:
					cout<<"tidak terdefinisi" <<endl;
			}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil3;
			if(pil3==2) {
				cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;	
				}
			}
		}else if(pil2==2) {
			cout<<"2. pondok pesantren al-asyariyah pusat" <<endl;
			cout<<".................................." <<endl;
			cout<<"sistem perizinannya :" <<endl;
			cout<<"1. ketika sudah tidak ada jam ngaji" <<endl;
			cout<<"==================================" <<endl;
			cout<<"apakah santri boleh keluar ? " <<endl;
			cout<<"boleh/tidak ? : ";
			cin>>y || t;
			switch(y) {
				case 'y':
					cout<<"santri boleh keluar" <<endl;
					break;
				case 't':
					cout<<"santri dilarang keluar" <<endl;
					break;
				default:
					cout<<"tidak terdefinisi" <<endl;	
			}
			cout<<"==================================" <<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil1;
			if(pil1==1) {
				cout<<"1. pondok pesantren 'ulumul qur'an" <<endl;
				cout<<".................................." <<endl;
				cout<<"sistem perizinannya :" <<endl;
				cout<<"1. sowan ke pengasuh" <<endl;
				cout<<"2. mengisi di buku perizinan" <<endl;
				cout<<"==================================" <<endl;
				cout<<"apakah santri boleh keluar ? " <<endl;
				cout<<"boleh/tidak ? : ";
				cin>>y || t;
				switch(y) {
					case 'y':
						cout<<"santri boleh keluar" <<endl;
						break;
					case 't':
						cout<<"santri dilarang keluar" <<endl;
						break;
					default:
						cout<<"tidak terdefinisi" <<endl;
				}
			}
		}
	}
	cout<<endl;
	cout<<"==================================" <<endl;
	
	cout<<"apakah anda ingin mengulang? (y/t) : ";
	cin>>ulang;
	if(ulang=='y' || 'Y') {
		goto A;
	}
}