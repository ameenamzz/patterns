#include<stdio.h>
void main(){
    int n=5;
   for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" \t");
        }
        for(int j=1;j<=i;j++){
            printf("*\t");
        }
        for(int j=0;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }
}