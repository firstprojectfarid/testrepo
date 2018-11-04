#include<stdio.h>
int main(){

    int result,hour,min,sec;
    int var1 = 3600,var2 = 60;
    printf("enter the no of days \n");
    scanf("%d",& result);
    hour = result/var1;
    result = result-hour*var1;
    min = result/var2;
    result = result-min*var2;
    sec = result;

    printf("hour:%d\n  min:%d\n  sec:%d",hour,min,sec);
    getch();
    return 0;
}
