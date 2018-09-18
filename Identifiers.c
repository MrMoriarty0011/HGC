#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 32
int main()
{
    int i,count=0,j;char word[10];
    char *keywords[32]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

    printf("Enter a word:");
    scanf("%s",&word);
    for (i=0;i<32;i++){
        if (strcmp(word,keywords[i])==0){
            printf("This is a keyword baby!!");
            exit(0);
        }
        }
            if (word[0]>='a'&&word[0]<='z' || word[0]>='A'&&word[0]<='Z' || word[0]=='_'){
                for (j=0;j<strlen(word);j++){
                        if (word[j]>='a'&&word[j]<='z' || word[j]>='A'&&word[j]<='Z' || word[j]=='_' || word[j]>='0' && word[j]<='9')
                            count++;
                }
            }
        if (count==(strlen(word)))
            printf("This is a Identifier");
        else
            printf("Sorry Folk,Ivalid entry");
    return 0;
}
