/*
Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.
Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
$>__second Test A Little Bit   Moar Complex$
    But... This Is Not That Complex$
      Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/
int is_alpha_cap(char c)
{
    if(c >= 'A' && c <= 'Z')
        return(1);
    else if (c >= 'a' && c <= 'z')
        return (2);
    return(0);
}
int main(int argc, char *argv[])
{
    int s_count;
    int char_count;
    char c;

    s_count = 0;
    char_count = 0;
    if (argc > 0)
    {
        while(argv[s_count])
        {
            c = argv[s_count][char_count];
            while(c)
            {
                while(c == 32)
                    char_count++;
                if (is_alpha_cap(c) == )
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}