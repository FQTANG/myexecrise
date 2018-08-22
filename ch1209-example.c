#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char ** get_words(int num);
static void find_words(char **start, char **end);

int main(void)
{
	int num;
	char ** words;

	printf("How many words do you wish to enter?\n");
	if (scanf("%d", &num) == 1 && num> 0)
	{
			printf("Enter %d words now:\n", num);

		while (getchar() != '\n')
			continue;
		words = get_words(num);

		printf("Here are your words:\n");
		for (int count = 0; count < num; count++)
			pust(words[count]);
	}

	return 0;
}

char ** get_words(int num)
{
	char temp[255];
	int count;
	char * words_start;
	char * words_end;
	int words_length;

	char ** words_array=(char **) malloc(num * sizeof(char *));

	words_start = fgets(temp, 255, stdin);

	for (count= 0;count < num; count++)
	{
		find_words(&words_start, &words_end);
		if (*words_start == '\0')
			break;
		words_length = words_end - words_start;
		words_array[count] = (char *) malloc((words_length + 1) * sizeof(char));
		if (words_array[count] != NULL)
		{
			strncpy(words_array[count], words_start, words_length);
			words_array[count][words_length] = '\0';
		}
		
		words_start = words_end;
	}
	if (count < num)
		for (; count< num; count++)
		{	
			words_array[count] = (char *) malloc(sizeof(char));
			*words_array[count] = '\0';
		}
	return words_array;
}

static void find_words(char **start, char **end)
{
	while (isspace(**start))
		(*start)++;

	*end = *start;

	while (!isspace(**end) && **end != '\0')
		(*end)++;
}