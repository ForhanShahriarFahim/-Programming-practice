#include<stdio.h>
#include<stdlib.h>

int main()
{
    enum company { GOOGLE, FACEBOOK, XERON, YAHOO, EBAY, MICROSOFT };
    enum company xeron = XERON;
    enum company google = GOOGLE;

    enum company ebay = EBAY;
    printf("The value is : %d\n %d\n %d\n",xeron,google,ebay);
    return 0;
}

