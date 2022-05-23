/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:12:09 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 09:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	src_length;
	unsigned int	dest_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i_dest = dest_length;
	i_src = 0;
	while (src[i_src] && i_src < (size - dest_length - 1) && dest_length < size)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	if (size < dest_length)
		return (size + src_length);
	else
		return (dest_length + src_length);
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
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	destination[50] = {"This is the destination string!"};
// 	char	*source = {"<appended>"};

// 	printf("the result of ft_strlcat = %i %s\n",
// 		fr_strlcat(destination, source, 35), destination);
// 	printf("the result of ft_strlcat = %i %s\n",
// 		ft_strlcat(destination, " + apple", 0), destination);
// 	printf("the result of ft_strlcat = %i %s\n",
// 		ft_strlcat(destination, "the", 41), destination);
// 	return (0);
// }