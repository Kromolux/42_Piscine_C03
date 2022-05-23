/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:04:08 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:52:29 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_length;
	int	result;

	i = 0;
	result = -1;
	to_find_length = ft_strlen(to_find);
	if (to_find_length > 0)
	{
		while (result == -1)
		{
			if (str[i] == to_find[0])
			{
				if (ft_strncmp(&str[i], to_find, to_find_length) == 0)
					return (&str[i]);
			}
			else if (str[i] == '\0')
				return (0);
			i++;
		}
	}
	return (str);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	result = 2;
	while (result == 2 && i < n)
	{
		if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
		}
		else if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			result = 0;
		}
		i++;
	}
	if (result == 2)
		result = 0;
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = {"This is the search string!"};
// 	char	*to_find = {"string!0"};

// 	printf("the result of ft_strstr = %s\n", ft_strstr(str, to_find));
// 	printf("the result of ft_strstr = %s\n", ft_strstr(str, ""));
// 	printf("the result of ft_strstr = %s\n", ft_strstr(str, "9841561551"));
// 	return (0);
// }
