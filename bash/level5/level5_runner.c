#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    setgid( 0 );   // you can set it at run time also
    system( "/home/level5/portforce.sh" );
    return 0;
 }