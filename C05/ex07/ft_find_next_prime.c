/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:48:26 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/25 15:22:01 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqr_root_rest(int nb)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		counter++;
	}
	if (nb == 0)
		return (0);
	else
		return (counter);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	tester;

	i = 2;
	tester = sqr_root_rest(nb);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (tester == 0)
		return (0);
	while (i < tester)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
			nb++;
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
}
*/
