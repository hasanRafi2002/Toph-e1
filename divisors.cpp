
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int A;
    cin>>A;

    for (int i=1; i<=A; i++){
        if (A%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}