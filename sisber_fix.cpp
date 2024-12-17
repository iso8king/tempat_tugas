#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

struct buuku {
    string judul;
    string author;
};

void insertionSort(vector<buuku>& buku, int pilihan){
    for(int i = 1 ; i<buku.size();i++){
        buuku kunci = buku[i];
        int j = i-1;

        if(pilihan == 1){
            while(j>=0 && buku[j].judul > kunci.judul){
            buku[j+1] = buku[j];
            j--;
            }
        }else if(pilihan == 2){
            while(j>=0 && buku[j].author > kunci.author){
            buku[j+1] = buku[j];
            j--;
         }
        }
        buku[j+1] = kunci;
    }
}

int main(){
    int jumlah_buku,pilihan;

    cout<<"Masukan Berapa Banyak Buku Yang Ingin Diurutkan : ";
    cin >> jumlah_buku;
    cin.ignore();

    vector<buuku> buku(jumlah_buku);

    for(int i =0;i<jumlah_buku;i++){
        cout<<"Judul Buku "<<i+1<<" : ";
        getline(cin,buku[i].judul);

        cout<<"Penulis Buku "<<i+1<<" : ";
        getline(cin,buku[i].author);
        cout<<endl;

    }
    system("cls");

    cout<<"Di urut kan berdasarkan :\n1.Judul\n2.Author\nPilihan : ";
    cin>>pilihan;

    insertionSort(buku,pilihan);

    cout<<"Daftar Buku Setelah Diurutkan : "<<endl;

    for(const buuku& output : buku){
        cout<<" Judul : " << output.judul << " , Author : " << output.author<<endl;
    }


    return 0;
}