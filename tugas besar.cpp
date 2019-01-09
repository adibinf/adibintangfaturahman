#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

const int MAX_ANTRIAN = 5;

struct orang
{
    string nama;
    int umur;
};

void buatAntrian(); 
void tampilkanMenu(); 
void eksekusiPilihan(); 
void tambahAntrian(); 
void kurangiAntrian(); 
void printAntrian(); 
void printOrang(); 


orang antrian[MAX_ANTRIAN];
int pil, pripil, antri;

bool isEmpty = true; 
bool isFull = false; 
bool isOver = false; 


int main()
{
    buatAntrian();
    while(!isOver)
    {
        tampilkanMenu();
        eksekusiPilihan();
    }
    system("pause");
    return 0;
}

void buatAntrian()
{
    int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        antrian[i].nama = "null"; 
        antrian[i].umur = -1; 
    }
}


void tampilkanMenu()
{
    system("cls");
    cout << "(1) tambah antrian" << endl;
    cout << "(2) kurangi antrian" << endl;
    cout << "(3) print antrian" << endl;
    cout << "(4) keluar dari program" << endl;
    cout << "masukkan pilihan anda: ";
    cin >> pil; 
}


void eksekusiPilihan()
{
    if (pil == 1)
    {
        tambahAntrian();
    }
    else if (pil == 2)
    {
        kurangiAntrian();
    }
    else if (pil == 3)
    {
        
		cout << "(1) print semua antrian" << endl;
        cout << "(2) print satu antrian" << endl;
        cout << "pilihan : ";
        cin >> pripil;
        if (pripil == 1)
        {
            printAntrian();
        }
        else if (pripil == 2)
        {
            printOrang();
        }
    }
    else if (pil == 4)
    {
        isOver = true;
    }
}


void tambahAntrian()
{
    
	int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        
		if(antrian[i].nama == "null" && antrian[i].umur == -1)
        {
            cout << "antrian ke-" << i+1 << " > " << endl;
            cout << "masukkan nama: ";
            cin >> antrian[i].nama;
            cout << "masukkan umur: ";
            cin >> antrian[i].umur;
            break;
        }
	
        else
        {
            if (i == MAX_ANTRIAN-1)
            {
                cout << "antrian penuh" << endl;
            }
        }
    }
    system("pause");
}


void kurangiAntrian()
{
    int i;
	
    cout << "antrian ke-1 telah dihapus" << endl;
    cout << "nama: " << antrian[0].nama << endl;
    cout << "umur: " << antrian[0].umur << endl;
	
    antrian[0].nama = "null";
    antrian[0].umur = -1;
	

    for(i=0; i<MAX_ANTRIAN-1; i++)
    {
        antrian[i].nama = antrian[i+1].nama;
        antrian[i].umur = antrian[i+1].umur;
    }
	

    antrian[MAX_ANTRIAN-1].nama = "null";
    antrian[MAX_ANTRIAN-1].umur = -1;
    system("pause");
}


void printAntrian()
{
    int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        cout << "antrian ke-" << i+1 << " > " << endl;
        if(antrian[i].nama == "null" && antrian[i].umur == -1)
        {
            cout << "KOSONG" << endl;
        }
        else
        {
            cout << "nama: " << antrian[i].nama << endl;
            cout << "umur: " << antrian[i].umur << endl;
        }
    }
    system("pause");
}


void printOrang()
{
    cout << "antrian ke: ";
    cin >> antri;
    if(antrian[antri].nama == "null" && antrian[antri].umur == -1)
    {
        cout << "KOSONG" << endl;
    }
    else
    {
        cout << "nama: " << antrian[antri-1].nama << endl;
        cout << "umur: " << antrian[antri-1].umur << endl;
    }
    system("pause");
}
