extern "C" int
func(int x, int y)
{
  return x + y;
}

int main(void)
{
  // args will have individual function and parameter
  int randpm = 222;
  int x = 10;
  int y = 20;
  int z = func(x, y);

  return 0;
}
