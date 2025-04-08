#include<bits/stdc++.h>
using namespace std;

int main()
{
int N,D;
cin>>N>>D;
int whole = N/D;
int remainder  = N%D;
cout<<whole<<" "<<remainder<<" "<<D<<endl;

    return 0;
}