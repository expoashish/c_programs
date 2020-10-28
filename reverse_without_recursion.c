//C program to Reverse a Sentence without Using Recursion

#include <stdio.h>
void rev_string();

int main() {
    printf("Enter any sentence for reverse: ");
    rev_string();
    printf("\n");
    return 0;
}

void rev_string() {
    char c;
    scanf("%c",&c);
    if (c != '\n')
    {
    	rev_string();
    	printf("%c",c);
    }
}