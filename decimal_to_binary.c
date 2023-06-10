#include <stdio.h>

// Defining a function that takes two numbers and returns quotient
int quotient(int dividendo, int divisor){
    int quotient;
    quotient = dividendo/divisor;
    return quotient;
}

// Defining a function that takes an integer number, then it prints after converting this integer into binary form
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
    // Declaring variable
    int num;

    // Taking number as input from user
    printf("Enter the number to convert in binary: ");
    scanf("%d", &num);

    // Calling decimal_to_binary function
    decimal_to_binary(num);

    return 0;
}