////////////////////////  Important Binomaial expansion Formulas
#include <stdio.h>
int main() {
    int a, b;
    int c;
    while(c!=1){
    printf("\nEnter the choice of what operation you want to perform: ");
    printf("\nChocie:\n 1.(a+b)^2\t2.(a-b)^2\t3.(a+b+c)^2 \t4.a^2 - b^2\n");
    printf("4.(a+b)^3\t5.(a-b)^3\t6.a^3 - b^3 \t7.a^3 + b^3 \t8.a^3+b^3+c^3\nEnter:");
    scanf("%d",&c);
    switch(c){
        case 1: printf("Enter values for a and b for (a + b)^2: ");
                scanf("%d %d", &a, &b);
                int result1 = a*a + b*b + 2*a*b ;
                printf("(a + b)^2 = %d\n", result1);
        break;
        case 2: printf("Enter the values of a and b for (a - b)^2: ");
                scanf("%d %d",&a, &b);
                int result2= a*a + b*b - 2*a*b;
                printf("(a - b)^2= %d\n",result2);
        break;
        case 3: printf("Enter values for a, b, and c for (a + b + c)^2: ");
                scanf("%d %d %d", &a, &b, &c);
                int result3 = a*a + b*b + c*c + 2*a*b + 2*a*c + 2*b*c;
                printf("(a + b + c)^2 = %d\n", result3);
        break;
        case 4: printf("Enter the values of a and b for (a+b)^3: ");
                scanf("%d %d",&a, &b);
                int result4 = pow(a,3) + pow(b,3) + 3*a*a*b + 3*a*b*b;
                printf("(a + b)^3 = %d\n", result4);
        break;
        case 5: printf("Enter the values of a and b for (a-b)^3: ");
                scanf("%d %d",&a,&b);
                int result5= pow(a,3) - pow(b,3) - 3*a*b*(a - b);
                printf("(a - b)^3 = %d\n", result5);
        break;
        case 6: printf("Enter the value of a and b for a^3 - b^3: ");
                scanf("%d %d",&a,&b);
                int result6= (a-b)*(a*a + b*b + a*b);
                printf("a^3 - b^3 = %d\n", result6);
        break;
        case 7: printf("Enter the value of a and b for a^3 + b^3: ");
                scanf("%d %d",&a,&b);
                int result7= (a+b)*(a*a + b*b - a*b);
                printf("a^3 + b^3 = %d\n", result7);
        break;
        case 8: printf("Enter the values of a,b and c for a^3+b^3+c^3: ");
                scanf("%d %d %d",&a,&b,&c);
                int result8= (a + b + c)*(a*a + b*b + c*c - a*b - b*c - c*a);
                printf("a^3+b^3+c^3 = %d\n", result8);
        break;
        default:printf("Invalid response. Please try again: ");
        break;
                
        }
    }
    
    
    
    

    return 0;
}
