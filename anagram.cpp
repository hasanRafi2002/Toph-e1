#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string A,B;
cin>>A>>B;

transform(A.begin(), A.end(), A.begin(), ::tolower);
transform(B.begin(), B.end(), B.begin(), ::tolower);

sort(A.begin(), A.end());
sort(B.begin(), B.end());

if(A==B){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}
 
 
 
    return 0;
}