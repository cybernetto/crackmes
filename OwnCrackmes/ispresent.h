
#include <stdio.h>
#include <sys/ptrace.h>
int ispresent()
{
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
    {
	printf("Eii!! Não vai me pagar nem uma cerveja?\n");
	return 1;
    }
    // normal execution
    return 0;
}

