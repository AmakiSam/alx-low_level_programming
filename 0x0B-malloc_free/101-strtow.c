#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: input string to count words from
 *
 * Return: number of words in str
 */
static int count_words(char *str)
{
	int len = 0;
	int count = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		while (i < len && (str[i] == ' ' || str[i] == '\t'))
			i++;

		if (i < len && str[i] != ' ' && str[i] != '\t')
		{
			count++;
			while (i < len && str[i] != ' ' && str[i] != '\t')
				i++;
		}
	}

	return (count);
}

/**
 * copy_word - copies a word from str starting at index start
 * @str: input string to copy word from
 * @start: starting index of the word in str
 * @len: length of the word to copy
 *
 * Return: newly allocated string containing the word, or NULL on failure
 */
static char *copy_word(char *str, int start, int len)
{
	char *word = malloc(sizeof(char) * (len + 1));
	int i;

	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[start + i];
	word[len] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: input string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int len, word_count, word_len;
	int i, j, start;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < len && j < word_count; i++)
	{
		while (i < len && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (i < len && str[i] != ' ' && str[i] != '\t')
		{
			start = i;
			while (i < len && str[i] != ' ' && str[i] != '\t')
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
	words[word_count] = NULL;
	return (words);
}
