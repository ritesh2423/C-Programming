#include<stdio.h>
int main()
{
    FILE *ptr;
    char cont[100];

    ptr = fopen("read.txt","r");
    if(ptr==NULL)
    {
        printf("error");
        return 0;
    }

    while((fgets(cont,sizeof(cont),ptr))!=NULL)
    {
        printf("%s",cont);
    }

    fclose(ptr);

    ptr = fopen("read.txt","w");
    char write[1000];
    scanf("%s",&write);
    fputws(write,ptr);
    fclose(ptr);

    return 0;
}