#include <stdio.h>
#include <string.h>

void f(void){
    system("echo \"flag: \" > /var/spool/mail/flag");
}

int a( char * c ) {
    char buffer[200];
    strcpy(buffer,c);
    if ( !strcmp( buffer, "thisispassword") ){
        f();
    }

    return 0;
}

int main(int argc, char** argv)
{
    a( argv[1]);
    return 0;
}
