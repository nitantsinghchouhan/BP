/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 10 "files/mutex_lock_int.c"
void err(void) 
{ 

  {
  ERROR: 
#line 11
  goto ERROR;
}
}
#line 13 "files/mutex_lock_int.c"
void mutex_lock(int *a ) 
{ int __cil_tmp2 ;

  {
  {
#line 15
  __cil_tmp2 = *a;
#line 15
  if (__cil_tmp2 == 1) {
    {
#line 15
    err();
    }
  } else {

  }
  }
#line 16
  *a = 1;
#line 17
  return;
}
}
#line 19 "files/mutex_lock_int.c"
void mutex_unlock(int *b ) 
{ int __cil_tmp2 ;

  {
  {
#line 21
  __cil_tmp2 = *b;
#line 21
  if (__cil_tmp2 != 1) {
    {
#line 21
    err();
    }
  } else {

  }
  }
#line 22
  *b = 0;
#line 23
  return;
}
}
#line 25 "files/mutex_lock_int.c"
int main(void) 
{ int m ;

  {
  {
#line 28
  m = 0;
#line 30
  mutex_lock(& m);
#line 34
  mutex_lock(& m);
  }
#line 37
  return (0);
}
}
