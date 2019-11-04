#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int stat=0;
    int hebat=0;
    int lemah=0; //deklarasi nilai stat , item terhebat, item terlemah
    string item = "";
    string item_terhebat="";
    string item_sebelum = ""; // deklarasi item , item sebelumnya
    string item_lemah="";//deklarasi item terhebat dan item terlemah
    char tambah = 'y'; //menu untuk input item tambahan
    bool item_pertama = true; // mengecek apakah item pertama atau tidak

    while(tambah=='y'){
        cout<<"Masukkan nama item : ";cin>>item;
        cout<<"Masukkan stat : ";cin>>stat;

        cout<<"Item anda : "<<item<<endl;
        cout<<"Stat : "<<stat<<endl;

        if(item_pertama==true){
            cout<<"\nItem sebelum : Nothing"<<endl;
            item_sebelum = item;

            item_terhebat = item;
            hebat = stat;
            cout<<"Item terhebat : "<<item_terhebat<<endl;
            item_lemah = item;
            lemah = stat;
            cout<<"Item terlemah : "<<item_lemah<<endl;
            item_pertama = false;
        }
        else{
            cout<<"\nItem sebelum : "<<item_sebelum<<endl;
            item_sebelum = item;

            if(stat>=hebat){
                item_terhebat = item;
                hebat = stat;
                cout<<"Item terhebat : "<<item_terhebat<<endl;
            }
            else{
                cout<<"Item terhebat : "<<item_terhebat<<endl;
            }

            if(stat<=lemah){
                item_lemah = item;
                lemah = stat;
                cout<<"Item terlemah : "<<item_lemah<<endl;
            }
            else{
                cout<<"Item terlemah : "<<item_lemah<<endl;
            }
        }
        cout<<"\nInput item lagi ? (y/n)";cin>>tambah;
        cout<<"\n";
    }
    return 0;
}
