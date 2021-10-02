#include <stdio.h>

int main() {
    int a=2,b=3,c=4,p,q,u=4,v=3;
    p=a-b;
    q=p*c;
    p=u*v;
    q+=p;
    printf("p= %d \n", p);
    printf("q= %d \n", q);
    return 0;
}
