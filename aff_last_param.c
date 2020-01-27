/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolomon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:00:12 by tsolomon          #+#    #+#             */
/*   Updated: 2020/01/27 14:58:08 by tsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //to access the write function

int		main(int argc, char **argv) //for our program to run
{
	int i; //our counter, to iterate through string characters

	if (argc > 1)
	{
		i = 0; //first character in string
		while (argv[argc - 1][i] != '\0') //iterate through string until last character
		{
			write(1, &argv[argc - 1][i], 1); //display current(i) character
			i++; //move to next character
		}
	}
	write(1, "\n", 1); //display newline
	return (0); //exit program
}
