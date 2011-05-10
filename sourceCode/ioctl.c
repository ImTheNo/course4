#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include "module.h"
#define MODULE_DEVICE "/dev/module"

int main(int argc, char ** argv)
{
    struct module_trans tr;
    int res;
    int fd;

    strcpy(tr.bin_file, "/root/module/module_test2");
    tr.addr = 0x4005f8;
    memset(tr.new_cont,0,sizeof(tr.new_cont));
    strncpy(tr.new_cont, "system_u:system_r:module2_t:s0-s0:c0.c1023", CONT_MAXLEN-1);

    fd = open( MODULE_DEVICE, O_RDWR );

    if (fd < 0) {
        return (-1);
    }

    res = ioctl(fd, MODULE_IOCTL_SET_BREAK, &tr);

    close(fd);

    return 0;
}
