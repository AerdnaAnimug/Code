#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1000
#endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *save);
#endif