#include<bits/stdc++.h>
using namespace std;

long long factorial (int n){
    long long result = 1;
    for (int i = 2; i<=n; i++){
        result *= i;
        result %=10000;
    }
    return result;
}

int main()
{

int N;
cin>>N;

long long fact = factorial(N);

if (fact == 0){
    cout<<"0000"<<endl;
}else{
    cout<<fact<<endl;
}

    return 0;
}