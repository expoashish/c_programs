#include <stdio.h>
#include <string.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[]="HackerRank";

    int i2;
    double d2;
    char s2[100];

    scanf("Enter no:%d", &i2);
    scanf("Enter float no:%lf", &d2);
    scanf("Enter string:%*[\n] %[^\n]", s2); 

    printf("%d\n", i + i2);
    printf("%.01lf\n", d + d2);
    printf("%s%s", s, s2);

    
    return 0;

}