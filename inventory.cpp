#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int jml_item;
    int pilih;
    int acak;
    int hapus;
    char ulang='y';
    vector<string> item={"kayu","Pisau","Pedang","Pistol","mesin"};
    vector<int> stat{2,3,4,5,6};
    vector<string> inventory;
    vector<string>::iterator i;

    cout<<"Inventory sedehana \n"<<endl;
    cout<<"Jumlah item tersedia : "<<item.size()<<endl;
    cout<<"Masukkan jumlah item : ";cin>>jml_item;

    while(ulang=='y'){
        cout<<"\nMenu Inventory : "<<endl;
        cout<<"1. Tampil Item "<<endl;
        cout<<"2. Tambah Item "<<endl;
        cout<<"3. Hapus Item "<<endl;
        cout<<"Masukkan Pilihan : ";cin>>pilih;

        if(pilih==1){
            if(inventory.empty()) cout<<"Item Kosong"<<endl;
            else{
                for(i=inventory.begin();i != inventory.end();++i){
                    cout<<*i<<endl;
                }
            }
        }
        else if(pilih==2){
            if(inventory.size()==jml_item) cout<<"Item Penuh"<<endl;
            else{
                srand(static_cast<unsigned int>(time(0)));
                acak = rand()%item.size();
                cout<<"Anda Mendapat : "<<item[acak]<<endl;
                inventory.push_back(item[acak]);
            }
        }
        else if(pilih==3){
            if(inventory.empty()) cout<<"Item Kosong"<<endl;
            else{
                for(i=inventory.begin();i != inventory.end();++i){
                    cout<<*i<<endl;
                }
                cout<<"\nItem berapa yang akan dihapus ?";cin>>hapus;
                inventory.erase(inventory.begin()+hapus-1);
                cout<<"Item berhasil dihapus\n";
            }
        }
        cout<<"\n lanjutkan inventory?(y/n)";cin>>ulang;
    }
    return 0;
}
