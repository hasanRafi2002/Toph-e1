#include<bits/stdc++.h>
using namespace std;



bool hasCarry(int A, int B){
    int carry = 0;
    while(A>0 || B>0){
        int sum = (A%10) + (B%10) + carry;
        if(sum>=10){
            return true;
        }
        carry = sum /10;
        A /= 10;
        B /= 10;
    }
    return false;
}

int main (){
    int A,B;
    cin>>A>>B;
    if(hasCarry(A,B)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}


