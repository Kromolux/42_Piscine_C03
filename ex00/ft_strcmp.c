/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:29:44 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:51:55 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	result = 2;
	while (result == 2)
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
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = {"This is the s1 string!"};
// 	char	*s2 = {"This is the s9 string!"};

// 	printf("the result of ft_strcmp = %i\n", ft_strcmp(s1, s2));
// 	printf("the result of ft_strcmp = %i\n", ft_strcmp(s1, s1));
// 	printf("the result of ft_strcmp = %i\n", ft_strcmp(s2, s1));
// 	printf("the result of ft_strcmp = %i\n", ft_strcmp(s2, s2));
// 	return (0);
// }
