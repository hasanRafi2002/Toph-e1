#include<bits/stdc++.h>
using namespace std;

void printFibonacciInRange(int L, int R){
    set<int> fibSet;
    int a=0, b=1;

    while(a<=R){
        if(a>=L) fibSet.insert(a);
        int next = a+b;
        a=b;
        b=next;
    }

    for(int num: fibSet){
        cout<<num<<endl;
    }
}

int main()
{
int L,R;
cin>>L>>R;
printFibonacciInRange(L,R);

    return 0;
}