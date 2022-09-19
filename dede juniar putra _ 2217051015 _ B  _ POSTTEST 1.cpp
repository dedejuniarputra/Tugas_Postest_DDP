#include <iostream>
using namespace std;
//Nama : Dede Juniar Putra 
//Kelas : b
//NPM : 2217051015

int main(){
	float a, b, z, per, bg, sel, k;
	cout<<"\nJumlah emas : "; cin>>a;
	cout<<"\nHarga beli : "; cin>>b;
	cout<<"\nHarga Saat ini : "; cin>>k;
	
	z= 14500;
	per=100;
	
	sel=k-b;
	bg=sel/b;
	
	cout<<"Kenaikan/Penurunan : "<<bg*per<<" % ";
	cout<<"\nKeuntungan :"<<"$"<<sel/z;
	
	return 0;
	// YAA ALLAH JANGAN DI COPAS YAA *
}
