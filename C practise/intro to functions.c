#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    if(a > b && a > c && a > d)
        max = a;
    else if(b > a && b > c && b > c)
        max = b;
    else if (c > a && c > b && c > d)
        max = c;
    else 
        max = d;
    return max;  
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int greatest_of_four = max_of_four(a, b, c, d);
    printf("%d", greatest_of_four);
    return 0;
}
