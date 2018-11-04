


    int main(){
        float a,b,c,d,x1,x2;
        printf("Enter the value of a b c: ");
        scanf("%f %f %f", &a,&b,&c);

            d = sqrt(pow((b),2)-4*a*c);
            x1 = (-b+d)/(2*a);
            x2 = (-b-d)/(2*a);
            printf("x1 = %f\n x2 = %f",x1,x2);
            return 0;


    }
