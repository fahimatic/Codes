#include<bits/stdc++.h>
using namespace std;

int main()
{
    short n;
    cin>>n;
    int counter=0;
    int i=1;
    while(1){
        if(counter == n)
            break;
        if(i %4 ==0)
        {
            cout<< "PUM" <<endl;
            i++;
            counter++;
            continue;
        }
        cout<< i << " ";
        i++;
    }
}
