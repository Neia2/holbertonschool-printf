PrintF:


Printf function is an output function that prints characters to stdout / console / command shell. Printf function returns the number of characters printed to the output file stream(stdout / console / shell).

Printf takes a formatting string and a number of optional arguments. Printf converts these arguments (char, string, int, long, float, double etc) to printable strings and the final constructed string is transferred to the stdout file stream.

The symbol “%” denotes the beginning of a format mark. The mark “%d” is replaced by the value of variable counter and the resulting string is printed. The symbol “\n” represents a new line.

___________________________________________________________________________________________________________________________________________________

## Complilations's Command 

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf

___________________________________________________________________________________________________________________________________________________

This project has been developed and tested in an Ubuntu 20 environment. The tools needed to compile and run the program are:

GCC
Git

___________________________________________________________________________________________________________________________________________________

## Utilisation Exemples:

#include "printf.h"

int main() {
    _printf("Hello, %s!\n", "World");
    _printf("The answer is %d\n", 32);

    return 0;
}

Output

Hello, World!
The answer is 32

___________________________________________________________________________________________________________________________________________________


Full documentation of the _printf function can be found on the manual page by running the following command:

man ./man_3_printf

___________________________________________________________________________________________________________________________________________________


Exemples:


#include <stdio.h>
 
int main()
{
    // using printf to print "Hello Guys!"
    printf("Hello Guys!");
 
    return 0;
}

Output
Hello Guys!


#include <stdio.h>
int main()
{
    int num1 = 99;
    int num2 = 1;
    printf("The sum of %d and %d is %d\n", num1, num2,
           num1 + num2);
    return 0;
}

Output
The sum of 99 and 1 is 100


___________________________________________________________________________________________________________________________________________________

# Flowchart

![Logo](https://cdn.discordapp.com/attachments/1216497227732877403/1223239602425430048/Blank_diagram.png?ex=661921a7&is=6606aca7&hm=999565f4567705e364141d7e302762c1727e4bbc66ba55c3437ff30b8ef22e7d&)
