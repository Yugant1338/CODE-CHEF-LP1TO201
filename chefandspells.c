#include <stdio.h>

int main(void) {
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int spell[3];//An array is taken to store the power of each spell
	    scanf("%d %d %d",&spell[0],&spell[1],&spell[2]);//Power of each spell is taken as input and filled in the array
	    for(int i=0;i<3;i++){
	        for(int j=i+1;j<3;j++){
	            if(spell[i]<spell[j]){   //Bubble sorting method was used for sorting
	                int a=spell[i];
	                spell[i]=spell[j];
	                spell[j]=a;
	            }
            /*The descending order sorting of spell array was done*/
	        }
	    }
	    printf("%d\n",spell[0]+spell[1]);
      /*As the array was sorted in descending order so the first and second element are the highest powered spells
      Hence the power of them were added and printed above*/
    }
	return 0;
}
