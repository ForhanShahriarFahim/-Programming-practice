#include<stdio.h>
#include<string.h>
char words[][2][40]=
{
    "dog", "Hund",
    "no", "nein",
    "year", "Jahr",
    "child", "kind",
    "i", "Ich",
    "drive", "fahren",
    "to",    "zu",
    ","
};

int main(void)
{
    char english[80];
    int i;
    printf("Enter the english work: ");
    gets(english);
i=0;
while(strcmp(words[i][0],""))
{
    if(!strcmp(english, words[i][0]))
    {
        printf("German translation: %s",words[i][1]);
        break;
    }
    i++;
}
if(!strcmp(words[i][0],""))
    printf("Not in dictionary\n");
return 0;
}
