#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
  while (start < end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start ++;
    end--;
}

void printArray( int arr[], int size)
{
  for ( int i = 0; i < size, i++)
  {
    cout << arr[i] << " " << endl;
  }
}
}
int main()
{
  int arr[] = size;
  printArray(arr,size);
  reverseArray(arr,start,end);
  printArry(arr,size);
  return 0;
}
