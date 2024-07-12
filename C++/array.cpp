#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    string arr1[5] = {"one", "two", "three", "four", "five"};
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nArray elements are: ";
    for(string i : arr1)
    {
        cout << i << " ";
    }   
    cout<<"\nlength of array is: "<<sizeof(arr)/sizeof(arr[0]); // sizeof(arr) gives the size of array in bytes and sizeof(arr[0]) gives the size of one element in bytes. So, dividing the size of array by size of one element gives the length of array.

    return 0;
}