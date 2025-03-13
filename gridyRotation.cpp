#include<bits/stdc++.h>
using namespace std;

void rotateClockwise(vector<vector<int>> &grid, int r, int c){

    int topLeft = grid[r-1][c-1];
    int topMid = grid[r-1][c];
    int topRight = grid[r-1][c+1];
    int midRight = grid[r][c+1];
    int bottomRight = grid[r+1][c+1];
    int bottomMid = grid[r+1][c];
    int bottomLeft = grid[r+1][c-1];
    int midLeft = grid[r][c-1];


    grid[r-1][c-1] = midLeft;
    grid[r-1][c] = topLeft;
    grid[r-1][c+1] = topMid;
    grid[r][c+1] = topRight;
    grid[r+1][c+1] = midRight;
    grid[r+1][c] = bottomRight;
    grid[r+1][c-1] = bottomMid;
    grid[r][c-1] = bottomLeft;
}

void printGrid(const vector<vector<int>> &grid){
    for (const auto &row : grid){
        for (int val : row){
            cout <<val<<" ";
        }
        cout<<endl;
    }
}

int main()
{
int M,N;
cin>>M>>N;

vector<vector<int>> grid(M, vector<int>(N));

for (int i = 0; i<M; i++){
    for (int j = 0; j<N; j++){
        cin>>grid[i][j];
    }
}

int Q;
cin>>Q;

for (int i = 0; i<Q; i++){
    int r,c;
    cin>>r>>c;

    rotateClockwise(grid, r, c);

    printGrid(grid);
}

    return 0;
}