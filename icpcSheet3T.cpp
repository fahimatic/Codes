#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int space= n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout<< " ";
        }
        for(int k=1; k<i*2;k++)
        {
            cout<< "*";
        }
        space--;
        cout<<endl;
    }
}
