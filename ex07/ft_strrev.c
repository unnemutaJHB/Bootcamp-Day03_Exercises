/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:48:54 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/12 08:58:44 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len;
	int i;
	char temp;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	i=0;
	while(i < (len-1))
	{
		temp = str[i];
		str[i] = str[len -1];
		str[len-1] = temp;
		len--;
		i++;
	}
	return str;
}
