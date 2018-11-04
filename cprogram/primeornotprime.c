#include<stdio.h>
void main(){
    int x = 2,n,temp=0;
    printf("enter the number of:");

    scanf("%d",&n);

    while(x<=n/2){
        if(n%x==0){
            temp=1;
        }
        else{
                temp=0;

        }
        x++;
    }
    if(temp==1){
        printf("not prime");
    }
    else{
        printf("prime");

    }

}
