/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolomon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:02:10 by tsolomon          #+#    #+#             */
/*   Updated: 2020/01/27 15:10:01 by tsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int			main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a') //if current(i) character is equal to the chracter 'a'
			{
				write(1, "a", 1); //display 'a' if the above condition is met
				break ; //to exit the while loop after after displaying 'a'
			}
			i++;
		}
	}
	else if (argc == 1)
	{
		write(1, "a", 1);
	}
	write(1, "\n", 1);
	return (0);
}
