#include<iostream>
#define N 20
using namespace std;
int main()
{
    int n, arr1[N][N], arr2[N][N], res[N][N];
    cout<<"Enter the size of matrix: ";
    cin>>n;
    cout<<"Enter matrix 1:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter matrix 2:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"Resultant matrix:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<n;k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}