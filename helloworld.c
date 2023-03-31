#include <stdio.h>

int main()
{
    printf("Hello from Github, attempt with packagegroups\n");
    fprintf(stdout, "Hello from fprintf");
    
    fprintf(stderr, "Hello from fprintf stderr");
    
    // Add some obvious lines so I can see it in the systemd boot sequence
    printf("*********************\n\n\n\n\n\n\n\n\n\n********************");
    
    return 0;
}
