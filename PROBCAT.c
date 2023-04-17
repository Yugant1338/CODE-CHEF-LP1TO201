#include <stdio.h>

int main(void) {
    int test;
    //Number of testcases are taken input here
    scanf("%d",&test);
    for(int i=0;i<test;i++){ // For testcases for loops is runned 
        int rating;
        scanf("%d",&rating); // Admin Rating was taken as input
        if(rating>0 && rating<100){
            printf("Easy\n");
        }
        else if(rating>99 && rating<200){
            printf("Medium\n");
        }
        else{
            printf("Hard\n");
        }
      /* All the possible conditions were taken under considerations and then printed*/
    }
	return 0;
}
