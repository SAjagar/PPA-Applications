/*#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];

    printf("Enter name of file that you want to Delete : \n");
    scanf("%s",Name);

    unlink(Name);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
*/
int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter name of file that we want to open : \n");
    scanf("%c",Name);

    fd = open(Name, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file \n"):
    }
    else
    {
        printf("File gets opened with FD %d\n",fd);
    }

    close(fd):
    
}