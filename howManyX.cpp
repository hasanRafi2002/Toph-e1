#include<bits/stdc++.h>
using namespace std;

int main(){

string input;
getline(cin, input);

int count = 0;
for(char c : input){
    if(c == 'X' || c == 'x'){
        count++;
    }

}
cout<<count<<endl;

    return 0;
}