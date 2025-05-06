#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int R,C;
cin>>R>>C;

char grid[R][C];

for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){
        cin>>grid[i][j];
    }
}
int safeSpots = 0;


for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){

        if(grid[i][j] == '.'){
            bool isSafe = true;

            if(i>0 && grid[i-1][j] == '*') isSafe = false;
            if(i<R-1 && grid[i+1][j] == '*') isSafe = false;
            if(j>0 && grid[i][j-1] == '*') isSafe = false;
            if(j<C-1 && grid[i][j+1] == '*') isSafe = false;
            if(isSafe) safeSpots++;
        }
    }
}
cout<<safeSpots<<endl;
 
 
    return 0;
}