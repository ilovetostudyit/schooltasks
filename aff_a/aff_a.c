#include <unistd.h>
int main(int argv, char **argc)
{
    int count;

    count = 0;
    while (argc[1][count] != '\0')
    {
        if (argc[1][count] == 'a')
        {
            write(1,&(argc[1][count]), 1);
            write(1,'\n',1);
        }
        count++;
    }
    return(0);
}