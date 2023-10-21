//////////////////// TEST of DIVISIBILITY
#include <stdio.h>

int div_by_2(int n);
int div_by_3(int n);
void div_by_4(int n);
void div_by_5(int n);
void div_by_6(int n);
void div_by_8(int n);
void div_by_9(int n);
void div_by_11(int n);
void div_by_19(int n);

int main(){
    int c,n;
    while(c!=1){
    printf("Enter the value of n to check for divisibility : ");
    scanf("%d",&n);
        printf("Choose the options: \n");
        printf("1. divisibility by 2\t2. Divisibility by 3\t3. Divisibility by 4\t4. Divisibility by 5\n");
        printf("5. Divisibility by 6\t6. Divisibility by 8\t7. Divisibility by 9\n");
        printf("8. Divisibility by 11\t9. Divisibility by 19\nEnter: ");
        scanf("%d",&c);
    
        switch(c){
            case 1: div_by_2(n);
            break;
            case 2: div_by_3(n);
            break;
            case 3: div_by_4(n);
            break;
            case 4: div_by_5(n);
            break;
            case 5: div_by_6(n);
            break;
            case 6: div_by_8(n);
            break;
            case 7: div_by_9(n);
            break;
            case 8: div_by_11(n);
            break;
            case 9: div_by_19(n);
            break;
            default:printf("Invalid Option!");
            break;
        }
    }//END of while loop
}//END of main Function
int div_by_2(int n){
    int lastDigit = n % 10;

    if (lastDigit == 0 || lastDigit % 2 == 0) {
        printf("The number %d is divisible by 2.\n", n);
        return 1;
    } else {
        printf("The number %d is not divisible by 2.\n", n);
        return 0;
    }
}//End of div_by_2
int div_by_3(int n){
    int temp = n;
    int digit,sum=0;

    // Calculating the sum of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (sum % 3 == 0) {
        printf("The number %d is divisible by 3.\n", n);
        return 1;
    } else {
        printf("The number %d is not divisible by 3.\n", n);
        return 0;
    }
}//End of div_by_3
void div_by_4(int n){
    // Extract the last two digits
    int lastTwoDigits = n % 100;

    if (lastTwoDigits % 4 == 0) {
        printf("The number %d is divisible by 4.\n", n);
    } else {
        printf("The number %d is not divisible by 4.\n", n);
    }

    return 0;
}//End of div_by_4
void div_by_5(int n){
    if (n % 5 == 0) {
        printf("The number %d is divisible by 5.\n", n);
    } else {
        printf("The number %d is not divisible by 5.\n", n);
    }
}//End of div_by_5
void div_by_6(int n){
    if(div_by_2(n) && div_by_3(n)==1){
        printf("The number %d is divisible by 6.\n",n);
    }else{
        printf("The number %d is not divisible by 6.\n",n);
    }
    return 0;
}//End of div_by_6
void div_by_8(int n) {
    int lastThreeDigits = n % 1000;

    if (lastThreeDigits % 8 == 0) {
        printf("The number %d is divisible by 8.\n", n);
    } else {
        printf("The number %d is not divisible by 8.\n", n);
    }
}//End of div_by_8
void div_by_9(int n) {
    int sum = 0;
    int temp = n;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum % 9 == 0) {
        printf("The number %d is divisible by 9.\n", n);
    } else {
        printf("The number %d is not divisible by 9.\n", n);
    }
}//End of div_by_9
void div_by_11(int n) {
    int sum_even = 0, sum_odd = 0;
    int remainder, count = 1;

    while (n != 0) {
        remainder = n % 10;
        if (count % 2 == 0) {
            sum_even += remainder;
        } else {
            sum_odd += remainder;
        }
        n /= 10;
        count++;
    }

    if ((sum_odd - sum_even) % 11 == 0) {
        printf("The number is divisible by 11.\n");
    } else {
        printf("The number is not divisible by 11.\n");
    }
}//End of div_by_11
void div_by_19(int n) {
    int sum = 0, temp = n / 10;
    int unit_digit = n % 10;
    sum = temp - (2 * unit_digit);

    if (sum % 19 == 0) {
        printf("The number %d is divisible by 19.\n", n);
    } else {
        printf("The number %d is not divisible by 19.\n", n);
    }
}//End of div_by_19