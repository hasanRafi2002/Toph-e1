
#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int H,M;
cin>>H>>M;


double minuteAngle = M*6.0;
double hourAngle = (H%12)*30.0+M*.5;


double angle = abs(hourAngle-minuteAngle);

angle = min(angle,360-angle);

cout<<fixed<<setprecision(4)<<angle<<endl;
 
 
    return 0;
}

