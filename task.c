include <stdio.h>

int main() 
{
    int n, sum = 0, rem, originalNumber;

    printf("Program to find sum of digits of a number\n");
    
    printf("-----------------------------------------\n");

    printf("Enter any number: ");
    
    scanf("%d", &n);

    originalNumber = n;  

    while (n != 0) 
    {
        rem = n % 10;          
        sum = sum + rem;       
        n = n / 10;            
    }

    printf("The sum of digits of %d is = %d\n", originalNumber, sum);

    printf("Thank you for using this program!\n");

    return 0;
}
