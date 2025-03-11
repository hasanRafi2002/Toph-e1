#include<bits/stdc++.h>
using namespace std;

int main()
{

int N;
cin>>N;

int prev, current;
cin>>prev;

bool isAscending = true;

for (int i = 1; i< N; i++){
    cin >> current;
    if(current<prev){
        isAscending = false;
    }
    prev = current;
}
cout << (isAscending ? "Yes":"No")<<endl;

    return 0;
}