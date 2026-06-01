//Student Grade Calculator
#include <stdio.h>
int main (){
    int num;
    printf("Enter marks (0-100)\n");
    printf("Enter number :");
    scanf("%d",&num);
    if(num < 0 || num > 100)
    {
    printf("Not Valid");
    }
    else if(num>=90 ){
        printf("Grade A\n");
        printf("Pass");
    }
    else if (num>=80)
    {
        printf("Grade B\n");
        printf("Pass");
    }
    else if (num>=70)
    {
       printf("Grade C\n");
       printf("Pass");
    }
    else if (num>=60)
    {   printf("Grade D\n");
        printf("Pass");
      
    }
    else if (num>=40)
    {
        printf("Grade E\n");
        printf("Pass");
    }
    else 
    {
        printf("Grade F\n");
        printf("Fail");
   
    }
    return 0;
    
    
    
    
}

