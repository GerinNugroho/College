#include <iostream>
#include <stdlib.h>

using namespace std;

struct StructProduct
{
 int Id;
 int Stock;
 float Price;
 string Name;
};

const int size = 10;

StructProduct Product[size];

void InputProduct(int *limit)
{
 int tmp;
start:
 system("cls");
 cout << "============ Input Data Barang ============" << endl;
 cout << endl;
 cout << "Masukkan banyak data barang yang ingin diinputkan: ";
 cin >> tmp;
 *limit = tmp;
 cout << endl;

 if (tmp > size)
 {
  cin.ignore();
  cout << "Jumlah barang melebihi penyimpanan!...";
  cin.get();
  goto start;
 }

 for (int i = 0; i < tmp; i++)
 {
  cin.ignore();
  Product[i].Id = i + 1;
  cout << "Barang Ke-" << i + 1 << endl;
  cout << "Nama Barang: ";
  getline(cin, Product[i].Name);
  cout << "Harga Barang: ";
  cin >> Product[i].Price;
  cout << "Stok Barang: ";
  cin >> Product[i].Stock;
 }
 cin.ignore();
 cout << "Selesai menginputkan barang...";
 cin.get();
}

bool ListProduct(int limit)
{
 system("cls");
 cout << "============ List Barang ============" << endl;
 cout << endl;
 cin.ignore();
 if (limit < 1)
 {
  cout << "Inputkan data barang terlebih dahulu...";
  cin.get();
  return false;
 }

 for (int i = 0; i < limit; i++)
 {
  cout << "ID: " << Product[i].Id << endl;
  cout << "Nama: " << Product[i].Name << endl;
  cout << "Harga: " << Product[i].Price << endl;
  cout << "Stok: " << Product[i].Stock << endl;
 }
 cout << "Tekan enter untuk lanjut...";
 cin.get();
}

bool SearchProduct(int limit)
{
 system("cls");
 cout << "============ Cari Barang ============" << endl;
 cout << endl;
 cin.ignore();
 if (limit < 1)
 {
  cout << "Inputkan data barang terlebih dahulu...";
  cin.get();
  return false;
 }

 for (int i = 0; i < limit; i++)
 {
  cout << "ID: " << Product[i].Id << endl;
  cout << "Nama: " << Product[i].Name << endl;
  cout << "Harga: " << Product[i].Price << endl;
  cout << "Stok: " << Product[i].Stock << endl;
  cout << "Tekan enter untuk lanjut...";
  cin.get();
  return false;
 }
 cout << "Barang Tidak Ditemukan...";
 cin.get();
};

int main()
{
 char choose;
 int limit = 0;

list:
 system("cls");
 cout << "    Aplikasi Pengelola Barang" << endl;
 cout << "1. List Barang" << endl;
 cout << "2. Cari Barang" << endl;
 cout << "3. Input Data Barang" << endl;
 cout << "4. Keluar" << endl;
 cout << "Pilih: ";
 cin >> choose;

 switch (choose)
 {
 case '1':
  ListProduct(limit);
  goto list;
  break;
 case '2':
  SearchProduct(limit);
  goto list;
  break;
 case '3':
  InputProduct(&limit);
  goto list;
  break;
 case '4':
  cout << "Anda Telah Keluar Dari Aplikasi";
  break;
 default:
  break;
 }
 return 0;
}