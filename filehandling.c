#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpointer;int i,j;char ch;
    fpointer=fopen("../abc.txt","r");

    while ((ch=fgetc(fpointer))!=EOF){
    i++;
    if (ch=='\n')
    {
        j++;
    }
    }
    fclose(fpointer);

    printf("the number of words is:%d",i);
    printf("\nThe number of lines is:%d",j);
       return 0;
}
