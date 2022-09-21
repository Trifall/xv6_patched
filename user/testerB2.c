// #include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
// #include "x86.h"

// result printing function for the amount of syscalls made in part B
int main(int argc, char *argv[]) {
  printf(1, "The number of syscalls made so far is: %d\n", SecondPart());
  exit();
}