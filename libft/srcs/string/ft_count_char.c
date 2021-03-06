/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 19:51:35 by jguyet            #+#    #+#             */
/*   Updated: 2016/01/08 19:51:36 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_char(char *txt, char c)
{
	int i;
	int line;

	i = 0;
	line = 0;
	while (txt[i])
	{
		if (txt[i] == c)
			line++;
		i++;
	}
	return (line);
}
