#include<stdio.h>
void main(){
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            if (j==i || j==0)
            {
               printf("*");
            }else{
                printf(" ");
            }
        }
        for(int j=i+1;j<n;j++){
            if(j!=n-1){
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }


//  int i,j,k,n=5; 
// for(i=0;i<n;i++){ 
// for(j=0;j<n;j++){ 
// if(j==0||j==n-1||i==j){ 
// printf("* "); 
// } 
// else{ 
// printf(" "); 
// } 
// } 
// printf("\n");
    
// }