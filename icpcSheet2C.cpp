#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int even=0, odd=0, pos=0, neg=0;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;

        if(num%2!=0)
        {
            odd++;
        } else
        {
            even++;
        }
        if(num<0){
        neg++;
        } else if(num>0)
        {
            pos++;
        }
    }
    cout<< "Even: "<<even<<endl;
    cout<< "Odd: "<<odd<<endl;
    cout<< "Positive: "<<pos<<endl;
    cout<< "Negative: "<<neg<<endl;


    return 0;
}
