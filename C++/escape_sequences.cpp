#include<iostream>
using namespace std;
int main()
{
    //demonstration of escape sequences
    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt << endl;
    string txt1 = "Hello\nWorld!";
    cout << txt1 << endl;
    string txt2 = "Hello\tWorld!";
    cout << txt2 << endl;
    string txt3 = "Hello\bWorld!";
    cout << txt3 << endl;
    string txt4 = "Hello\rWorld!";
    cout << txt4 << endl;
    string txt5 = "Hello\fWorld!";
    cout << txt5 << endl;
    string txt6 = "Hello\aWorld!";
    cout << txt6 << endl;
    string txt7 = "Hello\vWorld!";
    cout << txt7 << endl;
    string txt8 = "Hello\\World!";
    cout << txt8 << endl;
    string txt9 = "Hello\'World!";
    cout << txt9 << endl;
    string txt10 = "Hello\"World!";
    cout << txt10 << endl;
    string txt11 = "Hello\?World!";
    cout << txt11 << endl;
    string txt12 = "Hello\0World!";
    cout << txt12 << endl;
    string txt13 = "Hello\x41World!";
    cout << txt13 << endl;
    return 0;
}