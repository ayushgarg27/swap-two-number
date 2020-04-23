#include<stdio.h>
int main(){
    int n1;
    int n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    int swap;
    swap = n1;
    n1 = n2;
    n2 = swap;
    printf("The swap of the two number is: ");
    printf("%d", n1 );
    printf("%d", n2);
}