#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    bool isNumeric = false;
    if ((character >= '0') && (character <= '9'))
    {
        isNumeric = true;
        printf("\nis numeric: %d\n", isNumeric);
    }
                     //%d int, %c char (ASCII Code 1 :))

    // is upper case
    bool isUpperCase = false;
    char result1 = 45;
    if ((character >= 'A') && (character <= 'Z'))
    {
        isUpperCase = true;
        printf("\nis Upper: %d\n", isUpperCase);

         // to lower case
        if (isUpperCase)
        {
            char result1 = character + 32;
            printf("\nis now lower case: %c\n", result1);
        }
    }
    
    // is lower case
    bool isLowerCase = false;
    char result2 = 45;
    if ((character >= 'a') && (character <= 'z'))
    {
        isLowerCase = true;
        printf("\nis lower: %d\n", isLowerCase);

        // to upper case
        if (isLowerCase)
        {
            char result2 = character - 32;
            printf("\nis now Upper case: %c\n", result2);
        }
    }
    
    // is alpha
    bool isAlpha = false;
    if (isLowerCase || isUpperCase)
    {
        isAlpha = true;
        printf("\nis alpha: %d\n", isAlpha);
    }
    
    // is alpha numeric
    bool isAlphaNumeric;
    if (isAlpha || isNumeric)
    {
        isAlphaNumeric = true;
        printf("\nis alpha numeric: %d\n", isAlphaNumeric);
    }

    else
    {
        printf("\nI don't know what that is %c\n", 1);
    }

    return 0;
}