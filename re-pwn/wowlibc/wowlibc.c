#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

    if(argc != 2) {
        fprintf(stderr, "Usage: $ %s <Argument>\n", argv[0]);
        return -1;
    }

    //Present to give you the appropriate privileges.
    unsigned int gid = geteuid();
    unsigned int uid = geteuid();
    setresgid(gid, gid, gid);
    setresuid(uid, uid, uid);

    char buffer[40];
    gets(buffer);

    return 0;
}