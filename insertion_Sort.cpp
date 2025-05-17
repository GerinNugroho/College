#include <iostream>

using namespace std;

void sortAscending(int arr[])
{
 for (int i = 1; i < 10; i++)
 {
  int tmp = arr[i];
  int insert_index = i;
  int j = i - 1;
  while (j >= 0 && tmp < arr[j])
  {
   arr[j + 1] = arr[j];
   insert_index = j;
   j--;
  }
  arr[insert_index] = tmp;
 }
 for (int i = 0; i < 10; i++)
 {
  cout << arr[i] << " ";
 }
}

void sortDescending(int arr[])
{
 for (int i = 1; i < 10; i++)
 {
  int tmp = arr[i];
  int insert_index = i;
  int j = i - 1;
  while (j >= 0 && tmp > arr[j])
  {
   arr[j + 1] = arr[j];
   insert_index = j;
   j--;
  }
  arr[insert_index] = tmp;
 }
 for (int i = 0; i < 10; i++)
 {
  cout << arr[i] << " ";
 }
}

int main()
{
 int array[10] = {2, 4, 5, 8, 1, 7, 9, 10, 3, 6};
 sortAscending(array);
 cout << endl;
 sortDescending(array);
 return 0;
}
