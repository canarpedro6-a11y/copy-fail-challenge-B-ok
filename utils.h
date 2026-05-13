
#ifndef COPY_FAIL_UTILS_H
#define COPY_FAIL_UTILS_H

#include <sys/types.h>

int patch_chunk(int file_fd, off_t offset, const unsigned char four_bytes[4]);

#endif /* COPY_FAIL_UTILS_H */