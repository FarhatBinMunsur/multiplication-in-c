#include<stdio.h>
int main()
{
    char ch;

    printf("enter a word :");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
    printf("%c is a vowel\n",ch);
    }
    else{
        printf("%c is a consonant",ch);
    }
}
