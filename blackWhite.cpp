#include<bits/stdc++.h>
using namespace std;

int main()
{
string A,B;
cin>>A>>B;

int lastDigitA = A.back() - '0';
int lastDigitB = B.back() - '0';

if((lastDigitA+lastDigitB)%2==0)
cout<<"Black"<<endl;
else
cout<<"White"<<endl;

    return 0;
}