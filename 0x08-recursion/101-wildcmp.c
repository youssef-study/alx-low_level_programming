#include "main.h"

int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (actual_sqrt_recursion(n, 0));
}
int actual_sqrt_recursion(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (actual_sqrt_recursion(n, i + 1));
}
#include "main.h"

int actual_prime(int n, int i);
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (actual_prime(n, n - 1));
}
int actual_prime(int n, int i)
{
    if (i == 1)
        return (1);
    if (n % i == 0 && i > 0)
        return (0);
    return (actual_prime(n, i - 1));
}
#include "main.h"

int check_pal(char s, int i, int len);
int _strlen_recursion(chars);
int is_palindrome(char s)
{
    if (s == 0)
        return (1);
    return (check_pal(s, 0, _strlen_recursion(s)));
}
int _strlen_recursion(char s)
{
    if (s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}
int check_pal(char s, int i, int len)
{
    if ((s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_pal(s, i + 1, len - 1));
}
#include "main.h"
int wildcmp(char s1, chars2)
{
    if (s1 == '\0')
    {
        if (s2 != '\0' && s2 == '')
        {
            return (wildcmp(s1, s2 + 1));
        }
        return (s2 == '\0');
    }

    if (s2 == '')
    {
        return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    }
    else if (s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }
    return (0);
}
