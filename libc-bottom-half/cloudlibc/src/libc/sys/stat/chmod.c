#include <sys/stat.h>
#include <wasi/api.h>
#include <fcntl.h>

int chmod(const char *path, mode_t mode)
{
    return 6;
    // __wasi_errno_t error = __wasi_fd_fdstat_set_rights() 
}