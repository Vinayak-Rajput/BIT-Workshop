#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file;
    ifstream file1;
    string line;
    file1.open("file.txt");
    while(getline(file1,line))
    {
        cout<<line<<endl;
    }
    file1.close();
    /*
    file.open("file.txt");
    file<<"Hello World\n";
    file.close();
    */
    return 0;
}