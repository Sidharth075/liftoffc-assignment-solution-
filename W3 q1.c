 #include<stdio.h>

int  gcd(int c, int d) 
{
    if (d != 0)
        return gcd(d, c % d);
    else
        return c;
}

int main() 
{
    int a, b;
    printf("Enter any two positive numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}
