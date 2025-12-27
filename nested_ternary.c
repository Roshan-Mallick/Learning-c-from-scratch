#include <stdio.h>

int main() {
    int  marks;
    scanf("%d",&marks);
    int result = (marks < 0 || marks > 100)? printf("invalid makrs entered ") : (marks > 30 ) ? printf("PASSED") : printf ("FAILED");
    
    return 0;
}


