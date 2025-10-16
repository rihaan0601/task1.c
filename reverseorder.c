#include <stdio.h>

int main()
{
    char sentence[200];
    int length = 0;
    int i;

    printf("This program will reverse the sentence you enter.\n");
    printf("-------------------------------------------------\n");

    printf("Enter a sentence (up to 10 words): ");
    fgets(sentence, sizeof(sentence), stdin); 

    
    for(i = 0; sentence[i] != '\0'; i++)
    {
        if(sentence[i] == '\n')
        {
            sentence[i] = '\0';
            break;
        }
    }

    printf("\nCounting how many characters are there...\n");

    for(i = 0; sentence[i] != '\0'; i++)
    {
        length++;
    }

    printf("Total characters: %d\n", length);

    printf("\nNow reversing the sentence...\n");

    printf("\n-------------------------------------\n");
    
    printf("Reversed sentence: ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", sentence[i]);
    }

    printf("\n-------------------------------------\n");

    printf("\nThe sentence has been reversed successfully!\n");
    
    printf("Thank you for using this program.\n");

    return 0;
}
