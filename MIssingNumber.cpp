#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int totalSum, a, b, c;
cin>>totalSum;
cin>>a>>b>>c;

int missingNumber = totalSum-(a+b+c);
cout<<missingNumber<<endl;

    return 0;
}