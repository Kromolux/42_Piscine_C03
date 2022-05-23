/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:39:40 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:51:57 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = {"This is the s1 string!"};
// 	char	*s2 = {"This is the s9 string!"};

// 	printf("the result of ft_strncmp = %i\n", ft_strncmp(s1, s2, 8));
// 	printf("the result of ft_strncmp = %i\n", ft_strncmp(s1, s1, 8));
// 	printf("the result of ft_strncmp = %i\n", ft_strncmp(s2, s1, 8));
// 	printf("the result of ft_strncmp = %i\n", ft_strncmp(s2, s2, 18));
// 	return (0);
// }
