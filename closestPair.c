#include <stdio.h>
#include <math.h>
#include <float.h>

double distance(int x1, int y1, int x2, int y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main(){
    int N;
    scanf("%d", &N);

    int points[N][2];

    for (int i=0; i<N; i++){
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    double minDist = FLT_MAX;

    for (int i=0; i<N; i++){
        for (int j =i+1; j<N; j++){
            double dist  = distance(points[i][0], points[i][1], points[j][0], points[j][1]);

            if(dist<minDist){
                minDist = dist;
            }
        }
    }

    printf("%.14f\n", minDist);

    return 0;
}