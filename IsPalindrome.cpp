#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int left = 0, right = s.length()-1;
    while(left<right){
        if(s[left] != s[right])
        return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
string s;
cin>>s;
cout<<(isPalindrome(s)? "Yes" : "No")<<endl;

    return 0;
}