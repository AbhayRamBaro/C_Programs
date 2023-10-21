////////////////  NATURAL NUMBERS   //////////////
/**
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("\nEnter upto what number do you want to print the NATURAL NUMBERS: ");
    scanf("%i",&n);
    printf("\nThe Natural Numbers are: \n");
    for(int i=0;i<n;i++){
        printf("%d ",i+1);
    }

    return 0;
}
**/
////////   EVEN NUMBERS   /////////////////////
/*checking even numbers */
/**
#include  <stdio.h>
int main() {
    int num;
    printf("Enter the number to check for even number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is not an even number.\n", num);
    }

    return 0;
}
**/
/*Printing even numbers upto n*/
/**
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number upto which you want to print the even numbers: ");
    scanf("%d", &num);

    printf("Even numbers up to %d are:\n", num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
**/
//////////////////// ODD NUMBERS //////////////
/*printing list of Odd Numbers
/**
#include <stdio.h>
int main(){
    int n;
    printf("Enter upto which you want to print the odd numbers: ");
    scanf("%d", &n);
    
    printf("The odd numbers are: ");
    
    for(int i=1;i<=n;i++){
        if(i%2==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
**/
//Checking if number is odd
/**
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to check for odd numbers: ");
    scanf("%d", &n);
    
    if(n%2==1){
        printf("The %d is a odd number. ",n);
    }else{
        printf("The %d is NOT an odd number.",n);
    }
    printf("\n");
    return 0;
}
**/
/////////////////////////  PRIME NUMBERS ////////////////////
/*Printing Prime Numbers */
/**
#include <stdio.h>
int main() {
    int n, i, j;
    int isPrime;

    printf("Enter a number upto which we are to print the prime numbers: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
**/

