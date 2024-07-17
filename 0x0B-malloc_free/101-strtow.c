#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: Input string
 *
 * Return: Number of words
 */
static int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (count);
}
/**
 * copy_word - Copies a word from source to destination
 * @src: Source string
 * @start: Starting index of the word in src
 * @len: Length of the word
 *
 * Return: Pointer to the copied word
 */
static char *copy_word(char *src, int start, int len)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		word[i] = src[start + i];
	word[len] = '\0';
	return (word);
}
/**
 * strtow - Splits a string into words
 * @str: Input string
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int len, num_words, word_len;
	int i, j, start;

	if (str == NULL || *str == '\0')
	return (NULL);
	len = 0;
	while (str[len] != '\0')
	len++;
	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	return (NULL);
	j = 0;
	for (i = 0; i < len && j < num_words; i++)
	{
		while (i < len && str[i] == ' ')
		i++;
		if (i < len && str[i] != ' ')
		{
			start = i;
			while (i < len && str[i] != ' ')
				i++;
			word_len = i - start;

			words[j] = copy_word(str, start, word_len);
			if (words[j] == NULL)
			{
				for (j--; j >= 0; j--)
					free(words[j]);
				free(words);
				return (NULL);
			}
			j++;
		}
	}
	words[num_words] = NULL;
	return (words);
}
