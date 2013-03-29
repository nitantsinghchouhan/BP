

int main() {

  int x = 10;

  while(x>0)
    x = f(x);

    assert(x>0);
}

int f(int y) {

  return y-1;
}

