#include <stdio.h>
#include <math.h>
double f(double x)
{
    return x*x*x + 12*x*x + 1;
}
int main() {
    double a = -15, b = -10;
    double m;
    double epsilon = 0.00001;

    if(f(a) * f(b) > 0)
    {
        printf("no root in this inteval\n");
        return 1;
    }
    while((b - a) > epsilon)
    {
        m = (a+b)/ 2.0;
        if(f(a) * f(m) <= 0)
        {
            b = m;
        }else{
            a = m;
        }
    }
    m = (a+b)/ 2.0;
    printf("Approximate root: %.2f\n", m);
    printf("f(root) = %.5f\n", f(m));
}
