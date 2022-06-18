#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"please enter a number"<<"\n";
    cin>>a;
    while(a%2 == 0)
    {
        cout<< 2 <<" ";
        a = a/2;

    }
    // now the number we obtain is an odd number
    for(int i = 3; i<=sqrt(a); i++)
    {
        if(a%i== 0)
        {
            cout<<i<<" ";
            a = a/i;
        }
    }
    if(a!= 1)
    {
        cout<< a<<" ";
    }
    return 0;
}