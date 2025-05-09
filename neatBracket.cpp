#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string s;
cin>>s;

int balance = 0;

for (char ch : s){
    if(ch == '('){
        balance++;
    }else if(ch == ')'){
        balance--;

        if(balance<0){
            cout<<"No"<<endl;
            return 0;
        }
    }

}

if(balance == 0){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}
    return 0;
}