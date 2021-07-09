#include <stdio.h>
#include <string.h>
    void main()
    {
        char arr[10][8], tname[10][8], temp[8];
        int i, j, n;

        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d string :  \n", n);

        for (i=0;i<n;i++)
        {
            scanf("%s",arr[i]);
            strcpy(tname[i], arr[i]);
        }

        for (i=0;i<n-1;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (strcmp(arr[i],arr[j])>0)
                {
                    strcpy(temp, arr[i]);
                    strcpy(arr[i], arr[j]);
                    strcpy(arr[j], temp);
                }
            }
        }
        printf("Input NameSorted names\n");
        for (i=0;i<n;i++)
        {
            printf("%s ", tname[i]);
        }
        printf("\n\n");
        for(int i=0;i<n;i++)
        {
            printf("%s ",arr[i]);
        }

    }
