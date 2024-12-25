#include<stdio.h>
int main(){
    char str[20];
    int index;
    printf("Enter the string :");
    // gets(str);
    fgets(str, sizeof str, stdin);
     for (index = 0; index < 20; index++) {
        if(index % 2 == 0){
            str[index] = 'z'; // odd index change to 'z'
        }
            
        
    }
             
    printf("Modified string: %s\n", str);
  
   
    return 0;
}
    