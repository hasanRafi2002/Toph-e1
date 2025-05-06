#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int N,A,B;
cin>>N>>A>>B;

vector <int> arr(N);

for(int i =0; i<N; i++){
    cin>>arr[i];
}

int sum = 0;
for(int i=A; i<=B; i++){
    sum += arr[i];
}

cout<<sum<<endl;
 
 
 
    return 0;
}