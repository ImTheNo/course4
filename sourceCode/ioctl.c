#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include "sad_droid.h"

int main(int argc, char ** argv)
{
    struct module_trans tr;
    int res;
    int fd;

    strcpy(tr.bin_file, "/usr/bin/app");
    tr.addr = 0xbf3705f2;
    memset(tr.new_cont,0,sizeof(tr.new_cont));
    strncpy(tr.new_cont, "system_u:system_r:test1_log_t:s0-s0:c0.c1023", CONT_MAXLEN-1);
    fd = open("/dev/sad_droid" , O_RDWR);
    if (fd < 0) {
        return (-1);
    }
    res = ioctl(fd, MODULE_IOCTL_SET_BREAK, &tr);
    close(fd);
    return 0;
}
