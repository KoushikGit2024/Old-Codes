#include<iostream>
using namespace std;
int main()
{
    int i, j, k,nm,temp;
    cout << "\nEnter the column number : ";
    cin >> nm;
    temp=nm/2;
    for(j=0;j<(2*temp+1);j++)
        cout << "*";
    cout << "" << endl;    
    for(i=0;i<temp;i++)
    {
        for(j=0;j<(temp-i);j++)
        {
            cout << "*";
        }
        for(k=0;k<=2*i;k++)
        {
            cout << " ";
        }
        for(j=0;j<(temp-i);j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(i=0;i<temp;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout << "*";
        }
        for(k=0;k<=2*(temp-i-1);k++)
        {
            cout << " ";
        }
        for(j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(j=0;j<(2*temp+1);j++)
        cout << "*";
    return 0;
}