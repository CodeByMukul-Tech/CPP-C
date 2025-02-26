// calculating the simple interest 
// Author : Mukul Vats
#include <stdio.h>
int main(){
    int p , n ;
    float r,s;
    p = 1000;
    n = 3; 
    r = 6.6;

    // formula of simple interest is
    s = p*n*r/100;
    printf("The simple interest is %f",s);

    return 0 ; 
}