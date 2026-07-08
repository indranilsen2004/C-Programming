#include <stdio.h>

int main() {
    char str[100], rev[100];
    char *sptr = str, *rptr = rev;
    int len = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    // Find length using pointer
    while (*sptr != '\0') {
        len++;
        sptr++;
    }
    
    sptr--; // Point to the last character before null
    
    // Copy in reverse
    while (len > 0) {
        *rptr = *sptr;
        rptr++;
        sptr--;
        len--;
    }
    *rptr = '\0'; // Null-terminate the reversed string
    
    printf("Reversed String: %s\n", rev);
    
    return 0;
}