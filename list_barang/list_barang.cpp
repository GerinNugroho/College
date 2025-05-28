#include "./includes/Queue.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 char selected;
 Queue Datas;
menu:
 Datas.Sort();
 system("cls");
 cout << "   Program List Barang   " << endl;
 cout << "1. Tambah Item" << endl;
 cout << "2. Hapus Item" << endl;
 cout << "3. Cari Item" << endl;
 cout << "4. Tampilkan Item" << endl;
 cout << endl;
 cout << "Choose : ";
 cin >> selected;

 switch (selected)
 {
 case '1':
  Datas.push();
  system("Pause");
  system("cls");
  goto menu;
  break;
 case '2':
  Datas.pop();
  system("Pause");
  system("cls");
  goto menu;
  break;
 case '3':
  Datas.search();
  system("Pause");
  system("cls");
  goto menu;
  break;
 case '4':
  Datas.printAll();
  system("Pause");
  system("cls");
  goto menu;
  break;
 default:
  break;
 }
 return 0;
}