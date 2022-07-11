/*  Program treba usporedit 2 stringa bez koristenja strcmp funkcije.  */

#include<stdio.h>

int main()
{
        char str1[20], str2[20];
        int i=0, c=0;

        printf("Unesi prvi string : ");
        gets(str1);
        printf("\nUnesi drugi string : ");
        gets(str2);

        printf("\nStringovi su : \n\n");
    puts(str1);
    puts(str2);

        while((str1[i]!='\0') || (str2[i]!='\0'))
    {
                if(str1[i]!=str2[i])
                        c++;
                i++;
        }

        if(c==0)
                puts("\nStringovi su jednaki.\n");
        else
                puts("\nStringovi nisu jednaki.\n");

        return 0;
}
