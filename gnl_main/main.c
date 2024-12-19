/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifounas <ifounas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:38:00 by ifounas           #+#    #+#             */
/*   Updated: 2024/12/19 12:55:27 by ifounas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

// clear; cc -Wall -Wextra -Wall -g -D BUFFER_SIZE=10 main.c get_next_line.c get_next_line_utils.c && valgrind ./a.out ;
int	main(void)
{
	char	*s;
	int		fd = 0;

	fd = open("test.txt", O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		printf("%s", s);
		free(s);
		s = get_next_line(fd);
	}
	close(fd);
}
