/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:22:42 by agumina           #+#    #+#             */
/*   Updated: 2023/05/03 17:02:26 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINFT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char	*format, ...);
int		ft_putint(int nb);
int		ft_putuns(unsigned	int nb);
int		ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_putptr(unsigned long nbr);
int		ft_putx(size_t nbr);
int		ft_puthex(size_t nbr);

#endif