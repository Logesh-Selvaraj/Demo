/*#include <stdio.h>
int stringlength(char a[])
{
    int count = 0;
    while (a[count]!='\0')
    {
        count++;
    }
    return count;
}
int main()
{
    char a[100];
    int count;
    printf ("enter the string : ");
    scanf ("%s",&a);

    count = stringlength(a);
    printf("string count is:%d",count);
    return 0;
}*/

/*#include <stdio.h>
int stringlength(char a[], char copystr[])
{
    int count = 0;
    while (a[count]!='\0')
    {
        copystr[count] = a[count];
        count++;
    }
    copystr[count] = '\0';
}
int main()
{
    char a[100];
    char copystr[100];
    printf ("enter the string : ");
    scanf ("%s",&a);

    stringlength(a, copystr);
    printf("copy of the string : %s",copystr);
    return 0;
}*/


/*#include <stdio.h>
void stringreverse(char a[])
{
    int start = 0;
    int end = 0;
    char temp;

    while (a[end]!='\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char a[100];
    printf ("enter the string : ");
    scanf ("%s",&a);

    stringreverse(a);
    printf ("reverse of th string : %s",a);
    return 0;

}*/

/*#include <stdio.h>
int stringcompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i]!='\0' && str2[i]!='\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    if (str1[i] == str2[i])
    {
        return 1;
    }
}
int main()
{
    char str1[100], str2[100];
    printf ("enter the first string : ");
    scanf ("%s",&str1);
    printf ("enter the second string : ");
    scanf ("%s",&str2);

    if (stringcompare(str1, str2))
    {
        printf ("string are equal.\n");
    }
    else
    {
        printf ("string are not equal.\n");
    }
    return 0;
}*/

#include <stdio.h>

int stringConcatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[100];

    stringConcatenate(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    return 0;
}
