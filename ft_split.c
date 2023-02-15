/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:44:22 by yestello          #+#    #+#             */
/*   Updated: 2023/02/15 15:46:30 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	*count_word(const char *str, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[j])
	{
		if (str[j] != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (str[j] == 0)
			count = c;
		j++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*result;
	int	i;

	i = 0;
	result = 
}

char	**ft_split(char const *s, char c)
{

}
