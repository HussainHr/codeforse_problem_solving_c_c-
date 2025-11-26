#include <stdio.h>

int main() {
    int i;
    long long ll;
    char c;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &i, &ll, &c, &f, &d);

    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", c);
    printf("%f\n", f); 
    printf("%lf\n", d); 

    return 0;
}
