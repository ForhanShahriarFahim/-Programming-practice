/*Write a C program to print the following characters in a reverse way. Go to the editor
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX*/
#include<stdio.h>
int main()
{
    char c1,c2,c3;
    c1='X';
    c2='M';
    c3='L';
    printf("%c%c%c is reverse to %c%c%c",c1,c2,c3,c3,c2,c1);
}
