#include <stdio.h>

int main()
{
    char name[20];
    int v=0, w=0;
    printf("Enter your name: ");
    gets(name);
    for(int i = 0; name[i] != '\0'; i++)
    {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            {
                v += 1;
            }
    }
    for(int i = 0; name[i] != '\0'; i++)
    {
        w=w+1;
    }
    printf("\n");
    printf("No. of Letters in the String is: %d\n", w);
    printf("No. of Vowels in the String is: %d\n", v);
    printf("Your name is: ");
    puts(name);
}
