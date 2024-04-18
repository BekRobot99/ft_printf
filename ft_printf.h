/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 02:24:13 by abekri            #+#    #+#             */
/*   Updated: 2024/04/02 07:19:28 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_put_in_format(char conv, va_list ap);
int		ft_nbrlen(int n);
void	ft_putptr(void *ptr);
int		ft_ptrlen(void *ptr);
void	ft_putnbr_base(unsigned int nbr, char *base);
void	ft_put_unbr_fd(unsigned int n, int fd);
void	ft_putull_base(unsigned long long nbr, char *base);
int		ft_nbrlen_base(unsigned long long n, int base);

int		ft_put_s(char *ap);
int		ft_put_d(signed int ap);
int		ft_put_c(char ap);
int		ft_put_p(void *ap);
int		ft_put_x(unsigned int ap);
int		ft_put_hexa(unsigned int ap);
int		ft_put_i(int ap);
int		ft_put_u(unsigned int ap);
int		ft_unbrlen(unsigned int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(char *s);
#endif
