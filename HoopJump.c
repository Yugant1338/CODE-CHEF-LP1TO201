#include<stdio.h>
void ho(int h){// A funtion is made
    int p1=1;// Player1 starts from Hoop 1
    int p2=h; // Player2 starts from the Last hoop named h(refernce variable)
    for(int i=0;i<(h/2)+1;i++){
        if(p1!=p2){
            p1++;// Player1 goes forward every hoop by 1 
            p2--;// Player2 goes backward every hoop by 2
        }
        else{
            printf("%d",p1); // if no hoop is left for both players i.e. both land on same hoop then the condition fails and breaks
            break;
        }
    }
}
int main(){
    int test;
    int hoops;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&hoops);
        ho(hoops);// The function is called again here
    }
    return 0;
}
