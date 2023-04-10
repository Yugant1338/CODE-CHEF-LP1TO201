#include<stdio.h>
int main(void){
    int test;
    scanf("%d",&test);//No of testcases are taken as input
    for(int i=0;i<test;i++){
        int N,X,space,rating;
        scanf("%d %d",&N,&X);// No of movies and the space limit is taken input
        int best=0;
        /*A temporary variable is taken to store the value of maximum rating with space limit under consideration*/
        for(int j=0;j<N;j++){
            scanf("%d %d",&space,&rating);
            /* All possible movies' storage and their rating are taken for N times*/
            if(X>=space && rating>best){
        /*User conditions are considered here and the ratings are stored in the temporary variable*/
                best=rating;
            }
        }
        printf("%d\n",best);
        /*The best rating movie is given as output*/
    }
    return 0;
}
