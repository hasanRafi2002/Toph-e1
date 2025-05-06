#include <stdio.h>

int main(){
    int R,C;
    scanf("%d %d", &R, &C);
    char grid[R][C];
    for (int i=0; i<R; i++){
        scanf("%s", grid[i]);
    }
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0,0,-1,1};

    int safeSpots = 0;

    for (int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(grid[i][j] == '.'){
                int isSafe = 1;

                for (int k=0; k<4; k++){
                    int newX = i+dx[k];
                    int newY = j+dy[k];

                    if(newX>=0 && newX<R && newY>=0 && newY<C && grid[newX][newY] == '*'){
                        isSafe = 0;
                        break;
                    }
                }
                if (isSafe){
                    safeSpots++;
                }
            }
        }
    }
    printf("%d\n", safeSpots);

    return 0;
}