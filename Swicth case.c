#include<stdio.h>
int main()
{
    int grade = 'D';
    switch (grade){
    case 'A' :
    printf("good");

    case 'B' :
    case 'C' :
        printf("Well done\n");
break;
    case 'D':
        printf("You passed\n");
        break;
    default :
        printf("Invalid grade");
break;

    }

printf("Your grade is %c",grade);
return 0;
}
