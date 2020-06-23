#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>


int chown(const char *pathname, uid_t owner, gid_t group)
{
    return ENOSYS;
}

int fchown(int fd, uid_t owner, gid_t group)
{
    return ENOSYS;
}

int lchown(const char *pathname, uid_t owner, gid_t group)
{
    return ENOSYS;
}

int fchownat(int dirfd, const char *pathname, uid_t owner, gid_t group, int flags)
{
    return ENOSYS;
}