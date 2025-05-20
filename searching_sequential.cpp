#include <iostream>

using namespace std;

void search(int arr[], int input)
{
 int find = false;
 int index;
 for (int i = 0; i < 10; i++)
 {
  if (input == arr[i])
  {
   find = true;
   index = i;
  }
 }

 if (find)
 {
  cout << "Data ditemukan!" << endl;
  cout << "di index :" << index << endl;
  cout << "Data : " << arr[index];
 }
 else
 {
  cout << "Data tidak ditemukan!";
 }
}

int main()
{
 int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int input;
 cout << "Data yang dapat dicari : " << endl;
 for (int i = 0; i < 10; i++)
 {
  cout << array[i] << " ";
 }
 cout << endl;
 cout << "Masukkan data yang ingin dicari : ";
 cin >> input;

 search(array, input);
 return 0;
}