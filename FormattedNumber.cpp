
#include<bits/stdc++.h>
using namespace std;
 

string formatNumber(int A){
    string num = to_string(A);
    int n = num.size();
    string result;
    int count = 0;


    for (int i = n-1; i>= 0; --i){
    result.push_back(num[i]);
    count++;
    if(count%3 == 0 && i!= 0){
        result.push_back(',');
    }
}

reverse(result.begin(), result.end());
return result;
 


}






int main()
{

int A;
cin>>A;
cout<<formatNumber(A)<<endl;

 
 
    return 0;
}