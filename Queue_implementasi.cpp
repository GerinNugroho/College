#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

const int SIZE = 10;
int head = 0, tail = 0;

struct Datas
{
     string name;
     int stock;
     int id;
     float price;
} data[SIZE];

bool empty()
{
     return tail == 0 ? true : false;
}

bool full()
{
     return tail == SIZE - 1 ? true : false;
}

void inQueue(string name, int stock, float price)
{
     if (full())
     {
          system("cls");
          cout << "Antrian penuh!" << endl;
          return;
     }

     data[tail].id = tail + 1;
     data[tail].name = name;
     data[tail].stock = stock;
     data[tail].price = price;
     tail++;
     cout << "Berhasil Menambahkan Data!" << endl;
}

void showQueue()
{
     if (full())
     {
          cout << "Antrian Kosong" << endl;
     }
     else
     {
          cout << setw(10) << "ID" << setw(20) << "NAME" << setw(20) << "PRICE" << setw(20) << "STOCK" << endl;
          for (int i = head; i < tail; i++)
          {
               cout << setw(10) << data[i].id << setw(20) << data[i].name << setw(20) << data[i].price << setw(20) << data[i].stock << endl;
          }
     }
}

void delQueue()
{
     if (empty())
     {
          cout << "Antrian kosong!" << endl;
     }
     else
     {
          cout << "Berhasil Menghapus Data Dengan Nama : " << data[head].name << endl;
          for (int i = head; i < tail; i++)
          {
               data[i] = data[i + 1];
          }
          tail--;
     }
}

void searchQueue(int id)
{
     bool find = false;
     if (empty())
     {
          cout << "Antrian Kosong!" << endl;
     }
     else
     {
          for (int i = head; i < tail; i++)
          {
               if (id == data[i].id)
               {
                    cout << "ID: " << data[i].id << endl;
                    cout << "Name: " << data[i].name << endl;
                    cout << "Price: " << data[i].price << endl;
                    cout << "Stock: " << data[i].stock << endl;
                    find = true;
               }
          }
          if (!find)
          {
               cout << "Data Tidak Ditemukan" << endl;
          }
     }
}

void updateQueue(int id)
{
     int stock;
     float price;
     string name;
     bool find = false;
     if (empty())
     {
          cout << "Antrian Kosong!" << endl;
          return;
     }

     for (int i = head; i < tail; i++)
     {
          if (id == data[i].id)
          {
               cout << "Masukkan Nama: ";
               getline(cin, name);
               cout << "Masukkan Harga: ";
               cin >> price;
               cout << "Masukkan Stok: ";
               cin >> stock;
               data[i].name = name;
               data[i].price = price;
               data[i].stock = stock;
               find = true;
          }
     }
     if (!find)
     {
          cout << "Data yang di update tidak ditemukan!" << endl;
     }
}

void menu(char &choose)
{
     system("cls");
     cout << "+++++++++++++++ Menu +++++++++++++++" << endl;
     cout << "1. Input Queue" << endl;
     cout << "2. Delete Queue" << endl;
     cout << "3. Show Queue" << endl;
     cout << "4. Search Queue" << endl;
     cout << "5. Update Queue\n"
          << endl;
     cout << "Choose: ";
     cin >> choose;
     cin.ignore();
}

int main()
{
     string name;
     int stock;
     float price;
     char choose;
menu:
     menu(choose);

     switch (choose)
     {
     case '1':
          system("cls");
          cout << "Nama: ";
          getline(cin, name);
          cout << "Price: ";
          cin >> price;
          cout << "Stock: ";
          cin >> stock;
          inQueue(name, stock, price);
          system("pause");
          goto menu;
          break;
     case '2':
          delQueue();
          system("pause");
          goto menu;
          break;
     case '3':
          system("cls");
          showQueue();
          system("pause");
          goto menu;
          break;
     case '4':
          int id;
          cout << "Masukkan ID: ";
          cin >> id;
          searchQueue(id);
          system("pause");
          goto menu;
          break;
     case '5':
          cout << "Masukkan ID: ";
          cin >> id;
          cout << endl;
          cin.ignore();
          updateQueue(id);
          system("pause");
          goto menu;
          break;
     default:
          cout << "terima kasih!";
          break;
     }

     return 0;
}