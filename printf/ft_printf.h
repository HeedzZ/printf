/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:51:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 14:51:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printu(unsigned int nb);
int	ft_printdec(int nb);
int	ft_int_to_hex(unsigned int nb);
int	ft_u_to_hex(uintptr_t n);
int	ft_ptr_len(uintptr_t num);
int	ft_print_ptr(unsigned long long ptr);
int	ft_int_to_hexmaj(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif