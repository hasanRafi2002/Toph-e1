#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int N;
cin>>N;

int maxVal = 0;

for (int i = 0; i<N; i++){
    int num;
    cin>>num;
    if(num>maxVal){
        maxVal = num;
    }
}

cout<<maxVal<<endl;
 
 
 
    return 0;
}