#include <iostream>
#include <stdlib.h>
using namespace std;

const int SIZE = 10;

struct Queue
{
 int data[SIZE];
 int head = 0;
 int tail = 0;
} queue;

bool isFull()
{
 return queue.tail == SIZE - 1 ? true : false;
}

bool isEmpty()
{
 return queue.tail == 0 ? true : false;
}

void printQueue()
{
 if (!isEmpty())
 {
  for (int i = queue.head; i < queue.tail; i++)
  {
   cout << "ini adalah antrian ke- " << i + 1 << ": " << queue.data[i] << endl;
  }
 }
 else
 {
  cout << "antrian masih kosong" << endl;
 }
 cout << "\n\n";
}

void inQueue()
{
 int num;
 cout << "Masukkan data ke-" << queue.tail + 1 << ": ";
 cin >> num;
 if (!isFull())
 {
  queue.data[queue.tail] = num;
  queue.tail++;
 }
 else
 {
  cout << "antrian penuh";
 }
 cout << "\n\n";
}

void dequeue()
{
 if (!isEmpty())
 {
  for (int i = queue.head; i < queue.tail; i++)
  {
   queue.data[i] = queue.data[i + 1];
  }
  queue.tail--;
  cout << "antrian telah selesai" << endl;
 }
 else
 {
  cout << "antrian masih penuh" << endl;
 }
 cout << "\n\n";
}

int main()
{
 inQueue();
 printQueue();
 inQueue();
 printQueue();
 dequeue();
 printQueue();
 return 0;
}