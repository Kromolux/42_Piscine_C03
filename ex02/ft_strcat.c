/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:45:50 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:52:00 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	while (src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[255] = {"This is the s1 string!"};
// 	char	*s2 = {"This is the s2 string!"};

// 	printf("the result of ft_strcat = %s\n", ft_strcat(s1, s2));
// 	printf("the result of ft_strcat = %s\n", ft_strcat(s1, " Don't do this!"));
// 	return (0);
// }
