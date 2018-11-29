#include <iostream>
 
using namespace std;
 
int main()//fungsi main
 
{
 cout<<"Program Memasukkan Nama Pemain Sepakbola"<<endl;
 cout << "Nama : adi bintang f"<<endl;
 cout << "Nim : 5160411434"<<endl<<endl;
 
int i, j=1; 
 struct 
 {
 char nama[20]; 
 char posisi[20];
 }pemain[20];
 
 for(i=0; i<11; i++) 
 {
cout<<"Masukkan Nama Pemain>";
 cin>>pemain[i].nama;
 
cout<<"Masukkan Posisi Pemain>";
 cin>>pemain[i].posisi;
 cout<<endl; 
 }
 cout<<"\n";
 
cout<<"manchester united"<<endl;
 cout<<"|Data ke-|Nama Pemain |Posisi Pemain|"<<endl;
 for(i=0; i<11; i++)
 {
 cout<<"| "<<j++<<" |"<<pemain[i].nama<<" |"<<pemain[i].posisi<<endl;
 }
 
system("pause");
 return(0);
}
