#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter Swastik Size(n):";
    cin >> n;
    cout << "** ";

    for(i=0; i<n-2; i++)
        cout << "   ";

    for(i=0; i<n; i++)
        cout << "** ";

    cout << "\n";
    cout << "** ";

    for(i=0; i<n-2; i++)
        cout << "   ";

    for(i=0; i<n; i++)
        cout << "** ";

    cout << "\n";
    for(j=0; j<n-2; j++)
    {
        cout << "** ";
        for(i=0; i<n-2; i++)
            cout << "   ";
        cout << "** \n";
    }

    for(i=0; i<n*2-1; i++)
        cout << "** ";
    cout << "\n";
    for(i=0; i<n*2-1; i++)
        cout << "** ";
    cout << "\n";

    for(j=0; j<n-2; j++)
    {
        for(i=0; i<=n-2; i++)
            cout << "   ";
        cout << "** ";
        for(i=0; i<n-2; i++)
            cout << "   ";
        cout << "** \n";
    }

    for(i=0; i<n; i++)
        cout << "** ";
    for(i=0; i<n-2; i++)
        cout << "   ";
    cout << "** \n";
    for(i=0; i<n; i++)
        cout << "** ";
    for(i=0; i<n-2; i++)
        cout << "   ";
    cout << "** ";
    return 0;
} 