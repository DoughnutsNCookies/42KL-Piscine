#include <stdlib.h>

int				is_charset(char c, char *charset)
{
	int index;

	index = 0;
	while (charset[index])
	{
		if (charset[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int				ft_len(char *str, char *charset)
{
	int index;
	int length;

	length = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] && !is_charset(str[index], charset))
			length++;
		while (str[index] && !is_charset(str[index], charset))
			index++;
		index++;
	}
	return (length);
}

int				ft_word_len(char *str, char *charset)
{
	int length;

	length = 0;
	while (str[length] && !is_charset(str[length], charset))
		length++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int length;

	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (length);
}

char			**ft_split(char *str, char *charset)
{
	char	**output;
	int		length;
	int		index1;
	int		index2;

	output = malloc(sizeof(char *) * (ft_len(str, charset) + 1));
	if (output == NULL)
		return (NULL);
	index1 = 0;
	index2 = 0;
	while (str[index1] && index2 < ft_len(str, charset))
	{
		while (str[index1] && is_charset(str[index1], charset))
			index1++;
		length = ft_word_len(str + index1, charset);
		output[index2] = malloc(sizeof(char) * length);
		if (output[index2] == NULL)	
			return (NULL);
		ft_strlcpy(&strs[index2], str + index1, len + 1);
		index2++;
		index1 += length;
	}
	output[index2] = NULL;
	return (output);
}
