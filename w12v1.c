#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string:");gets(str);
    printf("The string that you was entered:%s\n",str);
    printf("Convert string to lowcase:");
    printf("%s",strlwr(str));
    return 0;
}