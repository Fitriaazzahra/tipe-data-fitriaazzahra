#include<iostream>
using namespace std;

int main(){
	string aktivitas = "berenang";
	string tempat = "kolam renang";

	cout<<"apa aktivitas anda : "<<aktivitas<<endl;
	cout<<"dimana anda "<<aktivitas<<" : "<<tempat<<endl;
	cout<<"saya sedang "<<aktivitas<<" di"<<tempat<<endl;
	
	//character
	char karakter;
	karakter = 'a';
	cout<<"character "<<karakter<<endl;
	
	//boolean
	bool bolean;
	bolean = 1;
	cout<<"boolean "<<bolean<<endl;
	
	//integer
	int nilai;
	nilai = 8;
	cout<<"integer "<<nilai<<endl;
	
	//floating time
	float angka;
	angka = 8.4;
	cout<<"floating time "<<angka<<endl;
	
	
	//operator aritmatika
	int a = 8;
	int b = 4;
	int penjumlahan = a+b;
	int pengurangan = a-b;
	int perkalian = a*b;
	int pembagian = a/b;
	int sisa_bagi = a%b;
	
	cout<<"hasil penjumlahan dari "<<a<<" + "<<b<<" = "<<penjumlahan<<endl;
	cout<<"hasil pengurangan dari "<<a<<" - "<<b<<" = "<<pengurangan<<endl;
	cout<<"hasil perkalian dari "<<a<<" * "<<b<<" = "<<perkalian<<endl;
	cout<<"hasil pembagian dari "<<a<<" : "<<b<<" = "<<pembagian<<endl;
	cout<<"hasil sisa bagi dari "<<a<<" : "<<b<<" = "<<sisa_bagi<<endl;
	
	//operator pembanding
	int x=8;
	int y=4;
	bool kondisi;
	string hasil;
	
	kondisi = x==y;
	hasil = kondisi ==1?"sama dengan":" tidak sama dengan";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	kondisi = x>y;
	hasil = kondisi ==1?"lebih kecil dari":"lebih besar dari";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	
	//operator penugasan
	int bilangan = 8;
	cout<<"bilangan awal = "<<bilangan<<endl;
	
	bilangan -= 4;
	cout<<"bilangan - 4 = "<<bilangan<<endl;
	
	bilangan *= 4;
	cout<<"bilangan * 4 = "<<bilangan<<endl;
	
	
	//operator logika
	bool output;
	
	output = not(8 == 4);
	cout<<"true or false = "<<output<<endl;
	
	output = (8 > 4) and (4 < 8);
	cout<<"true or false = "<<output;
	

	
	
	
	
	
	
	
	
	
	
	
	
	
}

