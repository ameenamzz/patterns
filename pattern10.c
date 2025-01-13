#include<stdio.h>
void main(){
    int n=4,number=50;
    for(int i=0;i<n;i++){
        for (int j = 0; j <=i; j++)
        {
            
            printf("%d\t",number);
            number=number-5;
        }
        printf("\n");
    }
}