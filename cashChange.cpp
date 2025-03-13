#include<bits/stdc++.h>
using namespace std;


void findMinimumNotes(int N){
    vector<int> denominations = {500, 100, 50, 10, 5, 1};
    vector <int> result;

    for(int  note: denominations){
        while(N>=note){
            N -= note;
            result.push_back(note);
        }
    }

    sort(result.begin(), result.end());
    for(int note : result){
        cout<<note<<" ";
    }
    cout<<endl;
}


int main()
{
int N;
cin>>N;

findMinimumNotes(N);

    return 0;
}