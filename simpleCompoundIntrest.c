#include<stdio.h>
int main()
{
    float P, r, t;
    
    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    
    printf("Enter Time Period: ");
    scanf("%f", &t);
    
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    
    printf("Simple Interest = %f\n", (P*r*t)/100.0);
    printf("Compound Interest = %f\n", P*pow(1+r/100, t) - P);
}