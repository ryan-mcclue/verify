#if defined(FUNC)
extern "C" int
func(int x, int y)
{
  return x + y;
}
#endif

int main(void)
{
#if defined(FUNC)
  int randpm = 222;
  int x = 10;
  int y = 20;
  int z = func(x, y);
#endif

  return 0;
}
