// SPDX-License-Identifier: zlib-acknowledgement

int 
main(int argc, char *argv[])
{
  int N = 10000;
  unsigned long long minlaunch = 999999;
  unsigned long long totallaunch = 0;
  unsigned long long minjoin = 999999;
  unsigned long long totaljoin = 0;

//      ru_utime (user mode)
//      ru_stime (kernel mode)
// long   ru_nvcsw;         /* voluntary context switches */ hasn't finished in time slice given
// long   ru_nivcsw;        /* involuntary context switches */ higher priority process
  struct rusage r_usage = {};
  if (getrusage(RUSAGE_SELF, &r_usage)) {
    perror("getrusage");
  } else {
    printf("From getrusage:\n");
    printf("  max rss (KiB): %ld\n", ru.ru_maxrss);
  }
  // args will have individual function and parameter

  return 0;
}
