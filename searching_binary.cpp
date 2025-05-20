#include <iostream>

using namespace std;

void search(int arr[], int input)
{
 int left = 0;
 int right = 10 - 1;
 bool find = false;
 int middle;

 while (left <= right)
 {
  middle = (left + right) / 2;
  if (input == arr[middle])
  {
   find = true;
   break;
  }
  else if (input < arr[middle])
  {
   right = middle - 1;
  }
  else
  {
   left = middle + 1;
  }
 }
 if (find)
 {
  cout << "Data di temukan" << endl;
  cout << "index ke : " << middle << endl;
  cout << "Data : " << arr[middle];
 }
 else
 {
  cout << "Data tidak ditemukan" << endl;
 }
}

int main()
{
 int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int input;

 cout << "List data yang bisa dicari" << endl;
 for (int i = 0; i < 10; i++)
 {
  cout << array[i] << " ";
 }

 cout << endl;
 cout << "Masukkan data yang ingin dicari: ";
 cin >> input;

 search(array, input);

 return 0;
}