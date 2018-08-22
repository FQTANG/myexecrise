#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <memory.h>
#include <string.h>

void p12_9(void)
{
    int n_word;
    char **word;
    char word_tmp[256];

    printf("How many words do you wish to enter? ");
    scanf_s("%d", &n_word);

    word = (char **)malloc(sizeof(char *) * n_word);

    printf("Enter %d words now:\n", n_word);
    for (int i = 0; i < n_word; i++)
    {
        scanf("%s", word_tmp, 256);
        int word_length = strlen(word_tmp);
        word[i] = (char *)malloc(word_length+1);
        strcpy(word[i], word_length + 1, word_tmp);
    }

    printf("Here are your words:\n");
    for (int i = 0; i < n_word; i++)
    {
        printf("%s\n", word[i]);
    }

    // 别忘记释放内存
    for (int i = 0; i < n_word; i++)
    {
        free(word[i]);
    }
    free(word);
}

int main(int argc, char **argv)
{
    p12_9();

    while (getchar());

    return 0;
}