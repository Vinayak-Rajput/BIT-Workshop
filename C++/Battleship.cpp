#include<iostream>
using namespace std;
int main()
{
    int arr[10][10]={0}, boardsize,numships,x,y, count1=0,count2=0,leftships;
    cout<<"Enter the size of the board: ";
    cin>>boardsize;
    cout<<"Enter the number of ships: ";
    cin>>numships;
    leftships=numships;
    srand(time(0)); //seed for random number generation
    for(int i=0;i<numships;)
    {
        x=rand()%boardsize;
        y=rand()%boardsize;
        if(arr[x][y]==0)
            arr[x][y] = 1;
        i++;
    }
    while(leftships!=0)
    {
        do
        {
            cout<<"Player 1's turn\n";
            cout<<"Enter the position of the missile: ";
            cin>>x>>y;
            if(x>=boardsize || y>=boardsize)
            {
                cout<<"Invalid position\n";
            }
        }while(x>=boardsize || y>=boardsize);
        if(arr[x][y]==1)
        {
            cout<<"Hit\n";
            count1++;
            leftships--;
            arr[x][y]=0;
        }
        else
        {
            cout<<"Miss\n";
        }
        if(leftships==0)
        {
            break;
        }
        do
        {
            cout<<"Player 2's turn\n";
            cout<<"Enter the position of the missile: ";
            cin>>x>>y;
            if(x>=boardsize || y>=boardsize)
            {
                cout<<"Invalid position\n";
            }
        }while(x>=boardsize || y>=boardsize);
        if(arr[x][y]==1)
        {
            cout<<"Hit\n";
            count2++;
            leftships--;
            arr[x][y]=0;
        }
        else
        {
            cout<<"Miss\n";
        }
        if(leftships==0)
        {
            break;
        }
    }        
    if(count1>count2)
    {
        cout<<"Player 1 wins\n";
    }
    else if(count2>count1)
    {
        cout<<"Player 2 wins\n";
    }
    else
    {
        cout<<"It's a tie\n";
    }
    return 0;
}