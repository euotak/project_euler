#include <stdio.h>

/*If we list all the natural numbers below 10 that are multiples of  3 or 5,
we get 3,5,6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 bellow 1000*/

int main(){
    
    int natural_number =0;
    int sum =0;

    for(natural_number == 0; natural_number <1000;natural_number++){
        if(natural_number % 3 == 0 || natural_number % 5 == 0){
            sum += natural_number;
        }
    }
    printf("numero natural %d e somatorio %d\n", natural_number,sum);
    return 0;
}

