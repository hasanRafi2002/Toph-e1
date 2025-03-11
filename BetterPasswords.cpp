#include<bits/stdc++.h>
using namespace std;

int main()
{

string A;
cin>>A;

if(!A.empty()){
    A[0]=toupper(A[0]);
}

string result;
result += A[0];

for (int i =1; i<A.size(); i++){
    if(A[i] == 's') result += '$';
    else if (A[i] == 'i') result += '!';
    else if (A[i] == 'o') result += "()";
    else result += A[i];
}

result += '.';
cout<<result<<endl;

    return 0;
}