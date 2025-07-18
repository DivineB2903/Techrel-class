#include<stdio.h>
int main()
{
    char ch;
    printf("Enter anything : ");
    scanf("%s", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("capital letter");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("small character");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("digit");
    }
    else {
        printf("special character");
    }

    return 0;
}