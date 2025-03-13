#include<bits/stdc++.h>
using namespace std;

string makeEvenBaaaa(string s){
    int a_count = s.length()-1;

    if(a_count%2!=0){
        if(a_count==1) s+='a';
        else s.pop_back();
    }
    return s;
}
int main()

{
int N;
cin>>N;
cin.ignore();
vector<string> lines(N);
int max_length = 0;

for (int i = 0; i<N; i++){
    getline(cin, lines[i]);
    lines[i] = makeEvenBaaaa(lines[i]);
    max_length = max(max_length, (int)lines[i].length());
}

for (const string& line : lines){
    int spaces = (max_length - line.length())/2;
    cout<<string(spaces, ' ')<<line<<endl;
}
    return 0;
}