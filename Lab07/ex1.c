/* longest common prefix
condition: if the character do not math with each other and one string ends -> stop */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMinString (char[100][100], int);
void longestCommonPrefix (char[100][100], int, char[100]);

int main ()
{
    char arr[][100] = {"abcdef", "abcd", "abcgh", "abcok"};
    int n = sizeof(arr) / sizeof(arr[0]);
    char result[100];
    longestCommonPrefix(arr, n, result);
    if (strlen(result))
        printf ("The longest common prefix is: %s", result);
    else
	    printf("\nThere is no common prefix");
    return 0;
}

int findMinString (char arr[][100], int n)
{
    int min = strlen(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (strlen(arr[i]) < min)
        {
            min = strlen(arr[i]);
        }
    }
    return min;
}

void longestCommonPrefix (char arr[][100], int n, char result[])
{
    int minlen = findMinString(arr, n);
    int index = 0;
    char current;
    for (int i = 0; i < minlen; i++)
    {
        current = arr[0][i];
        for (int j = 1; j < n; j++)
        {
            if (arr[j][i] != current)
            {
                result[index] = '\0';
                return ;
            }
        }
        result[index++] = current;
    }
    result[index] = '\0';
}
