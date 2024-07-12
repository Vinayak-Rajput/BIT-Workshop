#include<iostream>
#define MAX 100
using namespace std;
int main()
{
    int n, arr1[MAX][MAX], arr2[MAX][MAX], sum[MAX][MAX];
    cout<<"Enter the size of matrix: ";
    cin>>n;
    cout<<"Enter the elements of first matrix: \n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix: \n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of the matrices is: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}