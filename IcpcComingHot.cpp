#include<bits/stdc++.h>
using namespace std;

int main()
{
string N;
cin>>N;

int freq[10]={0};

for (char digit : N){
    freq[digit - '0']++;
}

int maxFreq = 0, resultDigit = 0;
for (int i = 0; i<10; i++){
    if (freq[i]>maxFreq){
        maxFreq = freq[i];
        resultDigit = i;
    }
}

cout<<resultDigit<<endl;

    return 0;
}