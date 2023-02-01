#include <iostream>
using namespace std;
int main()
{
    int i;
    int x;
    i = 0;
    cout<<"Number of lines:";
    cin>>x;
   // cout<<"your number is"<<x;
    while (i < x)
    {
        int j;
        j = 0;
        while (j < x)
        {
            cout << ".";
            j = j + 1;
        }
        cout << "*" << endl;
        x = x - 1;
    }
}