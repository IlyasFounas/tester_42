/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifounas <ifounas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:38:00 by ifounas           #+#    #+#             */
/*   Updated: 2024/12/19 12:29:06 by ifounas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <fcntl.h>
# include <stdio.h>
// cc -Wall -Wextra -Werror main.c ft_printf.c ft_printf_utils.c  ; ./a.out
int	main(void)
{
	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        CHAR                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");
	char c = '0';
	printf("\nnb_words : %d \n\n", ft_printf("%c", c));
	printf("\nnb_words : %d \n", printf("%c", c));


	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        STRING                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");

	printf("\nnb_words : %d \n", ft_printf("%s", "a"));
	printf("\nnb_words : %d \n", printf("%s", "a"));

	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        U INTEGER                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");

	printf("\nnb_words : %d \n\n", ft_printf("%u ", -1));
	printf("\nnb_words : %d \n\n", printf("%u ", -1));


	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        LOW HEXA                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");
	printf("\nnb_words : %d \n\n", ft_printf("%x", -42));
	printf("\nnb_words : %d \n", printf("%x", -42));

	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        UPP HEXA                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");
	printf("\nnb_words : %d \n\n", ft_printf("%X", -42));
	printf("\nnb_words : %d \n", printf("%X", -42));

	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        INTEGER                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");

	printf("\nnb_words : %d \n\n", ft_printf("%d", -42));
	printf("\nnb_words : %d \n", printf("%d", -42));


	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        PTR                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");

	//int x = 12416;
	printf("\nnb_words : %d \n\n", ft_printf("%p", NULL));
	printf("\nnb_words : %d \n", printf("%p", NULL));

	printf("\n\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n");
	printf("                        PRINT 0                        \n");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\n");

	printf("\nnb_words : %d \n\n", ft_printf(0));
	printf("\nnb_words : %d \n", printf(0));
}