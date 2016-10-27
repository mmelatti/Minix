#include <lib.h>
#include <unistd.h>

int sema_init(int semaphore_number, int start_value)
{
  message m;
  return( _syscall(SS_PROC_NR, SEMA_INIT, &m) );
}

int sema_down(int semaphore_number)
{
  message m;
  return( _syscall(SS_PROC_NR, SEMA_DOWN, &m) );
}

int sema_up(int semaphore_number)
{
  message m;
  return( _syscall(SS_PROC_NR, SEMA_UP, &m) );
}

int sema_release(int semaphore)
{
  message m;
  return( _syscall(SS_PROC_NR, SEMA_RELEASE, &m) );
}
