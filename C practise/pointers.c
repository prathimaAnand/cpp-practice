#include <stdio.h>

void update(int *a,int *b) {//getting values
    // Complete this function  
    int c = *a;
    *a = *a + *b;
    *b = abs(c - (*b));
    // if(b_dash < 0)
    //     b_dash = (-1) * b_dash;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;// pointers storing address
    
    scanf("%d %d", &a, &b);// sending address
    update(pa, pb);  
    printf("%d\n%d", a, b);

    return 0;
}




