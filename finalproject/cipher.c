#include <stdio.h>
#include <string.h>
int main()
{
    int i, c;
    char str[100];

    printf("Enter the Text Message : ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        switch (str[i])
            {
            case 'a':
                str[i] = 'e';
                continue;
            case 'b':
                str[i] = 'f';
                continue;
            case 'c':
                str[i] = 'g';
                continue;
            case 'd':
                str[i] = 'h';
                continue;
            case 'e':
                str[i] = 'i';
                continue;
            case 'f':
                str[i] = 'j';
                continue;
	         case 'g':
		          str[i] = 'k';
		          continue;
	        case 'h':
		          str[i] = 'l';
		          continue;
	        case 'i':
		        str[i] = 'm';
		        continue;
         case 'j':
		        str[i] = 'n';
		        continue;
	       case 'k':
		      str[i]='o';
		      continue;
	case 'l':
		str[i]='p';
		continue;
	case 'm':
		str[i]='q';
		continue;
	case 'n':
		str[i]='r';
		continue;
	case 'o':
		str[i]='s';
		continue; 
	case 'p':
		str[i]='t';
		continue;
	case 'q':
		str[i]='u';
		continue;
	case 'r':
		str[i]='v';
		continue;
	case 's':
		str[i]='w';
		continue;
	case 't':
		str[i]='x';
		continue;
	case 'u':
		str[i]='y';
		continue;
	case 'v':
		str[i]='z';
		continue;
	case 'w':
		str[i]='a';
		continue;
	case 'x':
		str[i]='b';
		continue;
	case 'y':
		str[i]='c';
		continue;
	case 'z':
		str[i]='d';
		continue;
	   }
	}

    printf("Encrypted Message: \n");
    puts(str);
}
