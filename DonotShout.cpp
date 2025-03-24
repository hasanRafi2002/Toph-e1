#include<bits/stdc++.h>
using namespace std;

bool isUppercase(const string &word){
    for (char ch : word){
        if(!isupper(ch)) return false;
    }
    return true;
}

int main()
{
string line, word, result;
getline(cin, line);

stringstream ss(line);
bool first = true;

while (ss>>word){
    if(!isUppercase(word)){
        if(!first) result += " ";
        result += word;
        first = false;
    }
}

cout<<result<<endl;

    return 0;
}