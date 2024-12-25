#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the string:");
    gets(str);
    printf("The string that you was entered:%s\n",str);
    str[0]='A';
    str[1]='B';
    printf("Modify string first and second charecter to AB:");
    printf("%s",str);

}