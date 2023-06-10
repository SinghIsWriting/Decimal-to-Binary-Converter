#include <stdio.h>

int quotient(int dividendo, int divisor){
    int quotient;
    quotient = dividendo/divisor;
    return quotient;
}

int decimal_to_binary(int num){
    int arr[100], remainder, i=0;
    while (num)
    {
        remainder = num%2;
        arr[i] = remainder;
        num = quotient(num, 2);
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    
}

int main()
{
    int num;
    printf("Enter the number to convert in binary: ");
    scanf("%d", &num);
    decimal_to_binary(num);

    return 0;
}