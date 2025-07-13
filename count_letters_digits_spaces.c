#include <stdio.h>
#include <string.h>

int is_digits(char c)
{
    return (c >= '0' && c <= '9');
}
int is_letters(char c)
{
    return (c >= 'a' && c <= 'z');
}
int is_spaces(char c)
{
    return (c == ' ');
}
int main()
{
    char *st = "1337 is the best";
    int i = 0, count_l = 0, count_d = 0, count_s = 0;
    while (st[i])
    {
        if(is_digits(st[i]))
        {
            count_d++;
        }
        if(is_letters(st[i]))
        {
            count_l++;
        }
        if(is_spaces(st[i]))
        {
            count_s++;
        }
        i++;
    }
    printf("digits : %d\n",count_d);
    printf("letters : %d\n",count_l);
    printf("spaces : %d\n",count_s);   
}
