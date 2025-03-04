/*
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
*/
#include <unistd.h>
int is_space(char c)
{
    if (c == 32 || c == 9)
        return(1);
    return(0);
}
int is_alpha_cap(char c)
{
    if ( c >= 'a' && c <= 'z')
        return(1);
    if (c >= 'A' && c <= 'Z')
        return(2);
    return (0);
}
char *last_char(char *s)
{
    while (*s)
    {
        if(is_alpha_cap(*s))
            s++;
    }
    return(s--);
}

int main(int argc, char *argv[])
{
    int i;
    int z;
    char *s;

    i = 0;
    if (argc > 1)
    {
        while(argv[i])
        {
            z = 0;
            s = argv[i];
            while(s[z])
            {
                if (is_alpha_cap(s[z]) == 2 && !last_char(&(s[z])))
                    
                
                write(1, &s[z], 1);
                z++;
            }
            write(1, "\n", 1);
            i++;

        }

    }
    write(1, "\n", 1);
    return(0);
}