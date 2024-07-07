#include <stdio.h>

#define MODULO 12345

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 1 || n >= 10000) {
        printf("Invalid input. n should be in the range 2 to 9999.\n");
        return 1;
    }
    
    int dp0 = 1; // dp0[1]
    int dp1 = 1; // dp1[1]
    
    for (int i = 2; i <= n; ++i) {
        int new_dp0 = (dp0 + dp1) % MODULO;
        int new_dp1 = dp0;
        
        dp0 = new_dp0;
        dp1 = new_dp1;
    }
    
    int result = (dp0 + dp1) % MODULO;
    
    printf("%d\n", result);
    
    return 0;
}
