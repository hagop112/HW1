#include <stdio.h>

int p(int n) {
    if (n < 2) return 0; // numbers less than 2 are not prime
    
    
    for (int i = 2; i * i <= n; i++) // check divisibility from 2 to sqrt(n)
        if (n % i == 0) return 0; //if divisible, it's not a prime number
    
    return 1; // if no divisors found, the number is prime
}

int main() {
    int N; 

    scanf("%d", &N); // asking for input user
    
   
    printf(p(N) ? "%d is a prime number" : "%d is not a prime number", N);  // Check if N is a prime number and print the result
    
    for (int i = 1; i <= N; i++)// Loop to find and print all prime numbers from 1 to N
        if (p(i)) printf("%d ", i); // Print prime numbers in the range
    
    return 0; 
}
