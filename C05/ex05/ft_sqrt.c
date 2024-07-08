/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:30:24 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/24 18:17:40 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	substractor;

	counter = 0;
	substractor = 1;
	while (nb > 0)
	{
		nb -= substractor;
		counter += 1;
		substractor += 2;
	}
	if (nb == 0)
		return (counter);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("square of %d = %d", atoi(argv[1]),ft_sqrt(atoi(argv[1])));
}
*/
