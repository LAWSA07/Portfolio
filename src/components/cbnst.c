//write program in c find out the root of x3-5x+1 by using secant method
//wap in c to find real root of equation x2*e^-x/2=1 by regula falsey method

#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001
double f(double x)
{
    return x*x*x-5*x+1 ;
}
void secantMethod(double x0, double x1){
    double x2;
    int max_it=1000,i;
    for(int i=0;i<max_it;i++)
    {
        x2=x1-(f(x1)*(x1-x0)/(f(x1)-f(x0)));

        if(fabs(x2-x1)<EPSILON)
        {
            printf("the root is:%.41f\n",x2);
            return;
        }
        x0=x1;
        x1=x2;
    }
    printf("method did not converge.\n");
}


int main()
{
    double x0,x1;
    printf("enter the first guess:");
    scanf("%f",&x0);
    printf("enter the second guess:");
    scanf("%f",&x1);
    secantMethod(x0,x1);
    return 0;
}