

int main() {

  int x;

  if(x>=0) 
   while(x>0) 
    x=x-1;
  else
   while(x<0)
    x=x+1;

  assert(x>0);
}


