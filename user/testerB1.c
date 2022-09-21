// #include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
// #include "x86.h"

// pid tester function for making a syscall in part B
int main(int argc, char *argv[]) {
  printf(1, "My PID is: %d\n", getpid());
  exit();
}