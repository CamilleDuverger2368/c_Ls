/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:53:12 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/06 12:28:56 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <string.h>

# define C_NONE         "\033[0m"
# define C_BOLD         "\033[1m"
# define C_BLACK        "\033[30m"
# define C_RED          "\033[31m"
# define C_GREEN        "\033[32m"
# define C_BROWN        "\033[33m"
# define C_BLUE         "\033[34m"
# define C_MAGENTA      "\033[35m"
# define C_CYAN         "\033[36m"
# define C_GRAY         "\033[37m"

typedef struct	s_list {
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_swap(int *a, int *b);
int				ft_power(int nb, int power);
int				ft_sqrt(int nb);
int				ft_factorial(int nb);
int				ft_count_words(char const *str, char c);
int				ft_is_sort(int *tab, int lenght, int (*f)(int, int));
char			*ft_strrev(char *str);
char			*ft_strcapitalize(char *str);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *mdr);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstpushback(t_list **blst, void const *content,
				size_t content_size);
char			*ft_itoa(int i);
char			*ft_strtrim(char const *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_striter(char *s, void (*f)(char *));
void			ft_putnbr_fd(int nb, int fd);
void			ft_putnbr(int nb);
char			**ft_strsplit(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strequ(char const *s1, char const *s2);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *s);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
void			*ft_memmove(void *dest, void const *src, size_t n);
int				ft_memcmp(void const *s1, void const *s2, size_t n);
void			*ft_memchr(void const *str, int c, size_t n);
size_t			ft_strlcat(char *dest, char const *src, size_t len);
char			*ft_strrchr(char const *str, int c);
char			*ft_strchr(char const *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memcpy(void *dest, void const *src, size_t n);
int				ft_atoi(char const *str);
void			ft_bzero(void *str, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, void const *src, int c, size_t n);
void			*ft_memset(void *str, int c, size_t len);
char			*ft_strcat(char *dest, char const *src);
int				ft_strcmp(char const *s1, char const *s2);
char			*ft_strcpy(char *dest, char const *src);
char			*ft_strdup(char const *src);
size_t			ft_strlen(char const *str);
char			*ft_strncat(char *dest, char const *src, size_t nb);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
char			*ft_strncpy(char *dest, char const *src, size_t n);
char			*ft_strnstr(char const *str, char const *to_find, size_t n);
char			*ft_strstr(char const *str, char const *to_find);
#endif
