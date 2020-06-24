#include <errno.h>
#include <sys/stat.h>

/* WASI BLOCKHUNTERS */

int chmod(const char *pathname, mode_t mode)
{
    return ENOSYS;
}

int fchmod(int fd, mode_t mode)
{
    return ENOSYS;
}

int fchmodat(int dirfd, const char *pathname, mode_t mode, int flags)
{
    return ENOSYS;
}
