#include <stdio.h>


int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str && str[i])
    {
      i++;
    }
    return (i);
}


int main()
{
    char *str1 = "raj";
    char *str2 = "biraj";
    char *str3 = NULL;
    
    printf("STR 1 len: %i\n", ft_strlen(str1));
    printf("STR 2 len: %i\n", ft_strlen(str2));
    printf("STR 3 len: %i\n", ft_strlen(str3));
}
