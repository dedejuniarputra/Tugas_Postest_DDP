#include <iostream>
using namespace std;
//Nama : Dede Juniar Putra
//Kelas: B
//NPM: 2217051015
	
int main(){
	float JumlhBitcoin;
	
	//INPUTNYA
	cout << "Masukkan Jumlah Bitcoin Anda :";
	cin >> JumlhBitcoin;
	cout<<endl;
	
	//OUTPUTNYA
	if (JumlhBitcoin<1){
		cout << "Tipenya Rangking : Shrimp";
	}else if (JumlhBitcoin>=1&&JumlhBitcoin<10){
		cout<<"Tipenya Rangking : Crab";
	}else if (JumlhBitcoin>=10&&JumlhBitcoin<50){
		cout<<"Tipenya Rangking : Octopus";
	}else if (JumlhBitcoin>=50&&JumlhBitcoin<100){
		cout<<"Tipenya Rangking : Fish";
	}else if (JumlhBitcoin>=100&&JumlhBitcoin<500){
		cout<<"Tipenya Rangking : Dolphin";
	}else if (JumlhBitcoin>=500&&JumlhBitcoin<1000){
		cout<<"Tipenya Rangking : Shark";
	}else if (JumlhBitcoin>=1000&&JumlhBitcoin<5000){
		cout<<"Tipenya Rangking : Whale";
	}else{
		cout<<"Tipenya Rangking : Humpback";
	}
	
	//KARENYA MENGGUNKAN MAIN	
	return 10;	
	}
