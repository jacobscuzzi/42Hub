/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:06:38 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 17:48:43 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
int	main(int argc, char ** argv)
{
	if (argc == 3)
		printf("%s ^ %s = %d", argv[1], argv[2], 
		ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
*/
