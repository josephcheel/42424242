#include <stdio.h>
#include "pipex.h"

static int get_split_lenght(char *str, int j)
{
    int len;
    
    len = 0;
    if ((str[j - 1] == 34 || str[j - 1] == 39))
    {
        if (str[j - 1] == 34)
        {
            while (str[j + len] != 34 && str[j + len - 1] != 92)
                len++;

        }
        else if (str[j - 1] == 39)
        {
            while (str[j +len] != 39 && str[j + len - 1] != 92)
                len++;
        }
    }
    else
    {
        while (str[j + len] != ' ')
            len++;
    }
    return (len);
}

char **ft_split_quotes(char *str)
{
    char **split;
    int i;
    int len;
    int j;

    j = 0;
    len = 0;
    i = 0;

    int x = ft_get_words(str);
    split = malloc(sizeof(char *) * x + 1);
    if (!split)
        return (NULL);
    while (i < x)
    {
        while ((str[j] == ' ' || ((str[j] == 34  || str[j] == 39) && str[j - 1] != 92)) && str[j])
            j++;
        len = get_split_lenght(str, j);
        printf("$%d$\n", len);
        split[i] = ft_substr(&str[j], 0, len, 0);
        j += len;
        //printf("%c", str[j]);
        i++;
    }
    split[i] = NULL;
    return (split);


}

int ft_get_words(char *str)
{
    int words;

    words = 0;
    if (*str == '\0')
        return (words);
    while (*str)
    {
        if (*str == 39 && *(str - 1) != 92)
        {
            str++;
            while (*str != 39 || ((*str == 39 && *(str - 1 ) == 92) && *str))
                str++;
            words++;
        }
        else if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
            words++;
        else if (*str == 34 && *(str - 1) != 92)
        {
            str++;
            while (*str != 34 || ((*str == 34 && *(str - 1 ) == 92) && *str))
                str++;
            words++;
        }
        str++;
    }
    return (words);
}

// static int printword(char *str)
// {
//     printf("%s\n", str);
//     return (0);
// }

int main(void)
{
    char **str;
    int i = 0;
    // printf("%d\n%s\n", ft_get_words("awk \"{count++} END {printf \\\"count: %i\\\" , count}\""), "awk \"{count++} END {printf \\\"count: %i\\\" , count}\"" );
    str = ft_split_quotes("awk \"{count++} END {printf \\\"count: %i\\\" , count}\"");
    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }
    //printf("%d", get_split_lenght())
    //printword("awk \"{count++} END {printf \\\"count: %i\\\" , count}\"");
    //printf("%d", get_split_lenght("awk \"{count++} END {printf \\\"count: %i\\\" , count}\"", 4));
   
    //printf("%d", countparam("awk \"{count++} END {printf \\\"count: %i\\\" , count}\""));
}