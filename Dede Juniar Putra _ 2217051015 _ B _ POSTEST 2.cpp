#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() {
    int kdMakanan, kdMinuman, hrgMakanan, hrgMinuman, total;
    string nama, nmMakanan, nmMinuman;

    cout<<"Masukan Nama Anda "<<endl;
	cout<<"Nama : ";
	getline (cin, nama); 

    while(1){
        //Bismillah 
        hrgMakanan = 0;
        hrgMinuman = 0;
        total = 0;

        cout<<"====DAFTAR MENU MAKANAN & MINUMAN BAKSO JONO====\n"<<endl;
        cout<<"1. Bakso [15000]\n";
        cout<<"2. Soto [8000]\n";
        cout<<"3. Mie Ayam [10000]\n";
        cout<<"Masukkan pilihan Anda: ";
        cin>>kdMakanan;

        switch(kdMakanan)
        {
            case 1:
                nmMakanan = "Bakso";
                hrgMakanan += 15000;
                break;
            case 2:
                nmMakanan = "Soto";
                hrgMakanan += 8000;
                break;
            case 3:
                nmMakanan = "Mie Ayam";
                hrgMakanan += 10000;
                break;
            default:
                cout<<"nPilihan tidak ada";
        }

        cout<<"\n===Daftar Minuman===\n";
        cout<<"1. Es Grean Tea [7000]\n";
        cout<<"2. Es Jeruk [5000]\n";
        cout<<"3. Es Teh [3000]\n";
        cout<<"Masukkan pilihan Anda: ";
        cin>>kdMinuman;

        switch(kdMinuman)
        {
            case 1:
                nmMinuman = "Es Grean Tea";
                hrgMinuman += 7000;
                break;
            case 2:
                nmMinuman = "Es Jeruk";
                hrgMinuman += 5000;
                break;
            case 3:
                nmMinuman = "Es Teh";
                hrgMinuman += 3000;
                break;
            default:
                cout<<"Pilihan tidak ada";
        }

        total = hrgMakanan+hrgMinuman;
        cout<<"\n==Pesanan Atas Nama==\n";
        cout<<"Nama : "<<nama<<endl;
        cout<<"Makanan: "<<nmMakanan<<endl;
        cout<<"Minuman: "<<nmMinuman<<endl;
        cout<<"Total: "<<total<<endl;
        getch();
        system("cls");
        //Alhamdulilah
        
    }
	return 0;
}
