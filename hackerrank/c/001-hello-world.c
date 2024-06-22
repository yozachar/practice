#include <stdio.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", s);
    // Format specifies type 'char *' but the argument has type 'char (*)[100]' clang(-Wformat)
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}

