/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:51:10 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:52:19 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_dest;
	unsigned int	i_src;

	if (nb > 0)
	{
		i_dest = 0;
		i_src = 0;
		while (dest[i_dest])
		{
			i_dest++;
		}
		while (src[i_src] && (i_src) < nb)
		{
			dest[i_dest] = src[i_src];
			i_dest++;
			i_src++;
		}
		dest[i_dest] = '\0';
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[255] = {"This is the s1 string!"};
// 	char	*s2 = {"This is the s2 string!"};

// 	printf("the result of ft_strncat = %s\n",
//		ft_strncat(s1, s2, 5));
// 	printf("the result of ft_strncat = %s\n",
//		ft_strncat(s1, " Don't do it!", 5));
// 	return (0);
// }
