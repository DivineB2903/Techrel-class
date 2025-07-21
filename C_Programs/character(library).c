
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter anything : ");
    scanf("   %c", &ch);

    if(isupper(ch)){
        printf("capital letter");
    }
    else if(islower(ch)){
        printf("small letter");
    }
    else if(isdigit(ch)){
        printf("digits ");
    }
    else {
        printf("Special characters");
    }

    return 0;
}