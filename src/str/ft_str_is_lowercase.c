/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 09:21:10 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 09:21:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] < 'a') || (s[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}