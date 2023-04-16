#include <stdio.h>

int main() {
    int test;
    scanf("%d",&test);//Number of testcases are taken
    for(int i=0;i<test;i++){
        float s,a,b,c;
        scanf("%f %f %f %f",&s,&a,&b,&c);
        /*All possible inputs are taken from the user*/
        int shareprice=s+((s/100)*c);
      /*The buying price of the paarticular stock is calculated from the given inputs feom the user*/
        if(shareprice>=a && shareprice<=b){ 
          /*The buying conditions mentioned by the question was considered here and then the desired result was printed*/
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
