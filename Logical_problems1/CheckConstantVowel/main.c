#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter your character(a-z/A-Z)\n");
    ch = getch();
    switch(ch)
    {
    case 'a':
    case 'e':
     case 'i':
     case '0':
     case 'u':
      case 'A':
       case 'E':
        case 'I':
        case 'O':
        case 'U':printf("the character you entered %ch is vowel,ch");
        default:printf(" the character entered is consonent %C",ch);

    }
    return 0;
}
