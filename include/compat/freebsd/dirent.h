#if defined(__GLIBC__)
#   include_next <dirent.h>
#else
#   include <sys/dirent.h>
#endif
