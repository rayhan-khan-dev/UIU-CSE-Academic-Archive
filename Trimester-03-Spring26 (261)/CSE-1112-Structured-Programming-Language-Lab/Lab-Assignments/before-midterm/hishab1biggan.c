#include <stdio.h>

int main() {
    long long a, b;
    
   
    if (scanf("%lld %lld", &a, &b) != 2) return 0;

   
    long long gcd = 1;
    long long smaller = (a < b) ? a : b;
    
    for (long long i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break; 
        }
    }

    
    
    long long lcm = 0;
    for (long long i = a; ; i += a) {
        if (i % b == 0) {
            lcm = i;
            break; 
        }
    }

   
    printf("%lld %lld\n", gcd, lcm);

    return 0;
}