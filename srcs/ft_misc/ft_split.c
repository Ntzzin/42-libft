/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:45:54 by nado-nas          #+#    #+#             */
/*   Updated: 2025/10/27 11:41:18 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_freesplit(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_words(char const *s, char c)
{
	int	ct;
	int	i;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ct++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ct);
}

/**
 * @brief Allocates (with malloc(3)) and copies the word starting at 's',
 * stopping at the delimiter 'c'. Also updates the index to point just past
 * the end of the copied word.
 * @param i A pointer to the current index in the source string.
 * @param s The string to analyze.
 * @param c The delimiter character.
 * @return The new allocated word or NULL if allocation fails.
 */
static char	*ft_word(int *i, char const *s, char c)
{
	char	*word;
	int		wlen;

	wlen = ft_wordlen(s, c) + 1;
	word = malloc(wlen);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, wlen);
	*i += wlen - 1;
	return (word);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**l;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	l = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!l)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		l[j] = ft_word(&i, &(s[i]), c);
		if (!l[j])
			return (ft_freesplit(l), NULL);
		j++;
	}
	l[j] = NULL;
	return (l);
}
