#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include "libft.h"

typedef struct		s_arr
{
	int				fd;
	char			*rem;
	struct s_arr	*next;
}					t_arr;

int					get_line(int fd, char **line, char **rem);
int					get_next_line(const int fd, char **line);
char				*check_rem(char *rem, char **line);
t_arr				*new_el(int fd);
#endif