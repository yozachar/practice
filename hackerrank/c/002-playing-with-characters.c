#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char sr[50];
    char st[100];

    scanf(" %c", &ch); // Notice the space before %c to consume any leading whitespace
    //scanf("\n");
    scanf(" %49s", sr); // Read up to 49 characters to prevent buffer overflow
    //scanf("\n");
    scanf(" %[^\n]%*c", st); // Read until newline, %[^\n] captures everything until newline
    // %*c reads and discards \n character

    printf("%c\n%s\n%s", ch, sr, st);
    return 0;
}

