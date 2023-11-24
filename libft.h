/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:21:58 by pfalli            #+#    #+#             */
/*   Updated: 2023/11/24 18:13:52 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *str[], int n);
int					ft_isalnum(int a);
int					ft_isalpha(char a);
int					ft_isascii(int a);
int					ft_isdigit(int a);
int					ft_isprint(int a);
void				*ft_memchr(const void *memory, int print, int n);
int					ft_memcmp(const void *str1, const void *str2, int n);
void				*ft_memcpy(void *dest, const void *src, int n);
void				*ft_memset(void *memory, int c, int len);
char				*ft_strchr(const char *str, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, int n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int letter);
int					ft_toupper(int letter);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

#endif