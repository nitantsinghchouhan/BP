#define NULL 0

typedef int pthread_t;

int pthread_create(pthread_t *, void *, void *, void *);

//int g;



void *t1(void *arg) {

  int x = 10;

  while (x > 0 )
    x = x - 1;

  assert(x==0);

}

int main() {


  pthread_t id1;

  int arg1 = 10;

  pthread_create(&id1, NULL, t1, &arg1);
  
  //  assert(g==0);
}
