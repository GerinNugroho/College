#pragma once
#include <iostream>
#include <iomanip>
#define MAX 5
using namespace std;

struct StructOfQueue
{
 int id;
 int stock;
 bool status;
 float price;
 string name;
};

class Queue
{
private:
 int head = 0;
 int tail = 0;
 StructOfQueue queue[MAX];

public:
 bool isEmpty()
 {
  if (tail == 0)
  {
   return true;
  }
  else
  {
   return false;
  }
 }

 bool isFull()
 {
  if (tail == MAX)
  {
   return true;
  }
  else
  {
   return false;
  }
 }

 void Sort()
 {
  for (int i = head; i < tail; i++)
  {
   StructOfQueue tmp = queue[i];
   int insert_index = i;
   int j = i - 1;
   while (j >= 0 && tmp.name < queue[j].name)
   {
    queue[j + 1] = queue[j];
    insert_index = j;
    j--;
   }
   queue[insert_index] = tmp;
  }
 }

 void push()
 {
  if (!isFull())
  {
   int stock;
   float price;
   string name;
   queue[tail].id = tail + 1;
   cout << "Name : ";
   cin >> name;
   queue[tail].name = name;
   cout << "Stock : ";
   cin >> stock;
   queue[tail].stock = stock;
   cout << "Price : ";
   cin >> price;
   queue[tail].price = price;
   tail++;
   cout << "Berhasil menambah item!" << endl;
  }
  else
  {
   cout << "Penyimpanan penuh!" << endl;
  }
 }

 void printAll()
 {
  if (!isEmpty())
  {
   cout << "ID" << setw(20) << "Name" << setw(20) << "Stock" << setw(20) << "Price" << endl;
   for (int i = head; i < tail; i++)
   {
    cout << queue[i].id << setw(20) << queue[i].name << setw(20) << queue[i].stock << setw(20) << queue[i].price << endl;
   }
  }
  else
  {
   cout << "Penyimpanan Kosong!" << endl;
  }
 }

 void search()
 {
  string name;
  int h, t, m;
  bool find = false;
  cout << "Nama item : ";
  cin >> name;
  h = head;
  t = tail - 1;
  while (h <= t)
  {
   m = (h + t) / 2;
   if (name == queue[m].name)
   {
    find = true;
    break;
   }
   else if (name < queue[m].name)
   {
    t = m - 1;
   }
   else
   {
    h = m + 1;
   }
  }

  if (find)
  {
   cout << queue[m].id << setw(20) << queue[m].name << setw(20) << queue[m].stock << setw(20) << queue[m].price << endl;
  }
  else
  {
   cout << "Item tidak ditemukan!" << endl;
  }
 }

 void pop()
 {
  if (!isEmpty())
  {
   for (int i = head; i < tail; i++)
   {
    for (int j = i + 1; j < tail; j++)
    {
     queue[i] = queue[j];
    }
   }
   tail--;
   cout << "Berhasil menghapus item!" << endl;
  }
  else
  {
   cout << "Penyimpanan belum diisi!" << endl;
  }
 }
};
