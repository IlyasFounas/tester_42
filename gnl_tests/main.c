/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifounas <ifounas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:38:00 by ifounas           #+#    #+#             */
/*   Updated: 2024/12/16 13:00:56 by ifounas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		i;
	char	*s;
	int		fd = 0;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	// fd = 0;
	s = get_next_line(fd);
	while (i < 60)
	{
		printf("%s", s);
		free(s);
		s = get_next_line(fd);
		i++;
	}
	close(fd);
// clear; cc -Wall -Wextra -Wall -g3 -D BUFFER_SIZE=1 main.c get_next_line.c get_next_line_utils.c && valgrind ./a.out ; 
}
