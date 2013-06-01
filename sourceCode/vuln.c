#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void read_config() {
    char buf[1024];
    int fd;
    fd = open("/etc/app.conf", 0, O_RDONLY);
    if (read(fd, buf, 1024) < 0) 
    {
        _exit(-1);
    }
    //do something with info from config file
}

void process_input() {
    char *buf;
    size_t num;
    int fd;
    if (getline(&buf, &num, stdin) < 0) 
    {
        _exit(-1);
    }
    //do something with *buf
    fd = open("/var/log/app.log", 0, O_RDONLY);
    if (read(fd, buf, 1024) < 0) 
    {
        _exit(-1);
    }
    //do something with info from logs
}

int main(int argc, char** argv)
{
    read_config();
    while(1) {
        process_input();
    }
    return 0;
}
