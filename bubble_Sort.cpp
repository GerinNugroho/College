#include <iostream>

using namespace std;

void sortAscending(int arr[])
{
 for (int i = 0; i < 10; i++)
 {
  for (int j = i + 1; j < 10; j++)
  {
   if (arr[i] > arr[j])
   {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
   }
  }
 }
 for (int i = 0; i < 10; i++)
 {
  cout << arr[i] << " ";
 }
};

void sortDescending(int arr[])
{
 for (int i = 0; i < 10; i++)
 {
  for (int j = i + 1; j < 10; j++)
  {
   if (arr[i] < arr[j])
   {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
   }
  }
 }
 for (int i = 0; i < 10; i++)
 {
  cout << arr[i] << " ";
 }
};

int main()
{
 int array[10] = {2, 4, 5, 8, 1, 7, 9, 10, 3, 6};
 sortAscending(array);
 cout << endl;
 sortDescending(array);
 return 0;
};