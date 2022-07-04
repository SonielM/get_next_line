#include "get_next_line.h"

int main()
{
    int fd = open("big_line_no_nl", O_RDONLY);
    char    *line;

    while(1)
    {
        line = get_next_line(fd);
        if (!line)
            break;
        printf("%s", line);
        free (line);
    }
    return (0);
}