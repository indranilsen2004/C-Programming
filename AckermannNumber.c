
// The Ackermann Function is a recursive mathematical function that is used to demonstrate deep recursion. It is not primitive recursive, meaning it grows much faster than ordinary recursive functions. It is commonly used in computer science to study recursion and the limits of computation.
// The Ackermann function is a recursive function.
// It grows very rapidly.
// Avoid using large values such as (4,1) or higher because the program may take a very long time or cause a stack overflow due to deep recursion.


// MATHEMATICAL REPRESENTATION:---
// A(m,n) = n+1,if m=0
//        = A(m-1,1),if(m>0 and n=0)
//        = A(m-1,A(m,n-1)),if(m>0 and n>0)

#include <stdio.h>

int ackermann(int m, int n){
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main(){
    int m, n;

    printf("Enter values of m and n: ");
    scanf("%d %d", &m, &n);

    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));

    return 0;
}