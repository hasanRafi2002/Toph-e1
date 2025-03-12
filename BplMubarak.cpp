#include<bits/stdc++.h>
using namespace std;

int main()
{

int T;
cin>>T;


    while(T--){
        string S;
        cin>>S;

        int legalBalls = 0;

        for(char ch : S){
            if((ch>='0' && ch<='6') || ch=='O'){
                legalBalls++;
            }
        }

    int overs = legalBalls/6;
    int balls = legalBalls%6;

    if(overs>0){
        cout<<overs<<" OVER";
        if(overs>1) cout<<"S";
    }
    if(balls>0){
        if(overs>0) cout<<" ";
        cout<<balls<<" BALL";
        if(balls>1) cout<<"S";
    }
    cout<<endl;
    }

    return 0;
}