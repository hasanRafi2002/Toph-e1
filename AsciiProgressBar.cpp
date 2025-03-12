#include<bits/stdc++.h>
using namespace std;

int main()
{
double P;
cin>>P;

int percentage = floor(P);
int progress = percentage/10;

cout<<"[";
for(int i=0; i<progress; i++) cout<<"+";
for(int i=progress; i<10; i++) cout<<".";
cout<<"] "<<percentage<<"%"<<endl;

    return 0;
}