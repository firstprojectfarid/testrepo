#include<stdio.h>
#include<conio.h>
int main(){

    int result,years,months,weeks,days;
    int var1 = 365,var2 = 30,var3 = 7;
    printf("enter the no of days \n");
    scanf("%d",& result);
    years = result/var1;
    result = result-years*var1;
    months = result/var2;
    result = result-months*var2;
    weeks = result/var3;
    result = result-weeks*var3;
    days = result;

    printf("years:%d\n  months:%d\n  weeks:%d\n  days:%d",years,months,weeks,days);
    getch();
    return 0;
}





