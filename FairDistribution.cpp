#include<bits/stdc++.h>
using namespace std;

int main()
{
int X,Y;
    cin>>X>>Y;
    int remainder = Y%X;
    int additionalChocolates = (remainder == 0)? 0 : (X-remainder);
    cout<<additionalChocolates<<endl;


    return 0;
}