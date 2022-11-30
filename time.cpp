// SPDX-License-Identifier: zlib-acknowledgement

unsigned long long 
time_ns(void)
{
  struct timespec ts = {};
  clock_gettime(CLOCK_MONOTONIC_RAW, &ts);

  return ((unsigned long long)ts.tv_sec) * 1000000000ULL +
         (unsigned long long)ts.tv_nsec;
}

void
memory(int argc, char *argv[])
{
  if (argc < 3) {
    die_with_usage(argv);
  }

  int MEMSIZEMB = atoi(argv[2]);

  // If use_thread = 0, measuring pthread launch performance; otherwise
  // measuring fork performance.
  int use_thread = 0;
  if (!strcmp(argv[1], "thread")) {
    use_thread = 1;
  } else if (!strcmp(argv[1], "fork")) {
    use_thread = 0;
  } else {
    die_with_usage(argv);
  }

  int N = 1000;
  unsigned long long minlaunch = 999999;
  unsigned long long totallaunch = 0;
  unsigned long long minjoin = 999999;
  unsigned long long totaljoin = 0;

  for (int i = 0; i < N; i++)
  {

  }

  printf("%.4f", average_time);

}

int
main(int argc, char *argv[])
{
  memory(argc, argv);

  return 0;
}
