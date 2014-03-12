#include <iostream>
using namespace std;

//Membuat program menghitung jumlah dari banyak suku bilangan cacah genap dengan batas yang ditentukan
//Rumus umum jumlah = (suku pertama + suku terakhir)/2*banyak suku
//Rumus umum suku terakhir = suku pertama + (banyak data - 1)*beda
//				banyakData = 1 + (sukuTerakhir - sukuPertama)/beda
//Asumsi : mulai dari 1

void main(){
	int jumlah = 0;
	int sukuPertama =0;
	int sukuKe [1000];
	int banyakData = 0;
	int batasAtas = 0;
	int batasBawah = 0;
	int beda = 0;
	int sukuTerakhir = 0;
	int index;
	
	cout<<"Program menghitung jumlah suku bilangan cacah genap dari batas bawah hingga batas atas"<<endl;
	cout<<"Masukkan batas bawah : ";
	cin>>batasBawah;
	cout<<"Masukkan batas atas : ";
	cin>>batasAtas;
	cout<<"Masukkan beda : ";
	cin>>beda;

	if(batasBawah % 2 != 0 && batasAtas % 2 != 0){
		sukuPertama = batasBawah + 1;
		sukuTerakhir = batasAtas -1;
		banyakData = 1 + (sukuTerakhir - sukuPertama)/beda;		
	}
	else if(batasBawah % 2 != 0 && batasAtas % 2 == 0){
		sukuPertama = batasBawah + 1;
		sukuTerakhir = batasAtas;
		banyakData = 1 + (sukuTerakhir - sukuPertama)/beda;
	}
	else if(batasBawah % 2 == 0 && batasAtas % 2 == 0){
		sukuPertama = batasBawah;
		sukuTerakhir = batasAtas;
		banyakData = 1 + (sukuTerakhir - sukuPertama)/beda;
	}
	else if(batasBawah % 2 == 0 && batasAtas % 2 != 0){
		sukuPertama = batasBawah;
		sukuTerakhir = batasAtas - 1;
		banyakData = 1 + (sukuTerakhir - sukuPertama)/beda;		
	}

	for (index = 1; index<=banyakData; index++){
		sukuKe [index] = sukuPertama + (index-1)*beda;
		jumlah += sukuKe [index];		
	}

	cout<<"Jumlah "<<banyakData<<" bilangan dari "<<sukuPertama<<" hingga "<<sukuTerakhir<<" adalah "<<jumlah<<endl;

	system("pause");
}