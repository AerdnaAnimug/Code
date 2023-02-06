/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:22:42 by agumina           #+#    #+#             */
/*   Updated: 2023/02/06 17:38:43 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINFT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const	char *format, ...);
void	ft_putchar(char c);

#endif