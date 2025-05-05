#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int Y;
cin>>Y;
// problem says A leap year occurs when the year is a multiple of 4 but not a multiple of 400.
if((Y%4==0 && Y%100 != 0) && (Y%400 != 0)){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}
 
 
 
    return 0;
}