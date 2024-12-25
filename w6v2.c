#include <stdio.h>

int main()
{
    int MonthNumber;
    printf("Inter the number of month 1-12:");
    scanf ("%d" ,&MonthNumber);
    switch(MonthNumber){
        case(1):
        printf("Janunary");
        break;
        case(2):
        printf("February");
        break;
        case(3):
        printf("March");
        break;
        case(4):
        printf("April");
        break;
        case(5):
        printf("May");
        break;
        case(6):
        printf("June");
        break;
        case(7):
        printf("July");
        break;
        case(8):
        printf("August");
        break;
        case(9):
        printf("September");
        break;
        case(10):
        printf("October");
        break;
        case(11):
        printf("November");
        break;
        case(12):
        printf("December");
        break;
        default:
        printf("please input Number 1 to 12 only");
    }
        return 0;
}