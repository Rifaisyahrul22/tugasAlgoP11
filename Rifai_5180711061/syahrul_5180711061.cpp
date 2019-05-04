#include <iostream>
using namespace :: std;
main (){
string nama[5]={"BAYU","IRFAN","SUSANTI","DIANA","RONI",};
string nomor[5]={"A001","A002","A003","A007","A008",};
string namaku,cari,member,n,nm;
int indek,jumlah,total,jum=5,z,j,jm=0,x;
double diskon,harga;

cout<<"\nSELAMAT DATANG DI MINIMARKET ";
cout<<"\n-----------------------------";
cout<<endl;
cout<<"member/bukan ??";
cin>>member;

if (member=="member"){
    cout<<"\nMasukan ID :_";
    cin>>cari;
    for(int i=0;i<jum;i++)
    {
         if (cari==nomor[i]){namaku=nama[i];}}

    cout<<endl;
    cout<<"\nMember";
    cout<<"\nID :_"<<cari;
    cout<<"\nNama :_"<<namaku;

    cout<<endl;
    cout<<"masukan jumlah barang yang akan dibeli :";
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<"\nNama Barang :";cin>>n;
        cout<<"\nHarga Barang :";cin>>harga;
        cout<<"\nJumlah ";cin>>jm;
        z=harga*jm;
        total=total+z*5/100;
    }}


    else{
        cout<<"\nNon member";
        cout<<"\nMasukan nama pelanggan :";cin>>nm;
        cout<<"\nMasukan jumlah barang yang akan dibeli :";cin>>j;
           for(int i=0;i<j;i++){
        cout<<"\nNama Barang :";cin>>n;
        cout<<"\nHarga Barang :";cin>>harga;
        cout<<"\nJumlah ";cin>>jm;}
        z=harga*jm;
        total=total+z;
        cout<<endl;
    }  cout<<"\ntotal belanja :"<<total;
    return 0;
}

