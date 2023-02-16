#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char *str) 
{
    int i = 0;
    int j = 0;
    int k = 0;
    int size = 0;
    int len = strlen(str);
    char **res;

    while (i < len) 
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) 
            i++;
        if (str[i]) 
	    {
            size++;
            while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) 
                i++;
        }
    }
    res = (char**)malloc(sizeof(char*) * (size + 1));
    if (res == NULL) 
        return NULL;
    i = 0;
    while (i < len) 
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) 
            i++;
        if (str[i]) 
	    {
            j = i;
            while (str[j] && (str[j] != ' ' && str[j] != '\t' && str[j] != '\n')) 
                j++;

            res[k] = (char*)malloc(sizeof(char) * (j - i + 1));
            if (res[k] == NULL) 
                return NULL;

            strncpy(res[k], str + i, j - i);
            res[k][j - i] = '\0';
            k++;
            i = j;
        }
    }
    res[k] = NULL;
    return (res);
}