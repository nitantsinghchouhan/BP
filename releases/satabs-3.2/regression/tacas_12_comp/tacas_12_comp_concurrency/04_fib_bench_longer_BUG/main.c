/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 50 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 53 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_3 {
   char __size[56] ;
   long __align ;
};
#line 53 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_3 pthread_attr_t;
#line 225 "/usr/include/pthread.h"
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
#line 234
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
#line 3 "fib_bench_longer_BUG.c"
int i  =    1;
#line 3 "fib_bench_longer_BUG.c"
int j  =    1;
#line 7 "fib_bench_longer_BUG.c"
void *t1(void *arg ) 
{ int k ;
  void *__cil_tmp3 ;

  {
#line 10
  k = 0;
#line 12
  k = 0;
  {
#line 12
  while (1) {
    while_0_continue: /* CIL Label */ ;
#line 12
    if (k < 6) {

    } else {
      goto while_0_break;
    }
#line 13
    i = i + j;
#line 12
    k = k + 1;
  }
  while_0_break: /* CIL Label */ ;
  }
  {
#line 15
  __cil_tmp3 = (void *)0;
#line 15
  pthread_exit(__cil_tmp3);
  }
}
}
#line 18 "fib_bench_longer_BUG.c"
void *t2(void *arg ) 
{ int k ;
  void *__cil_tmp3 ;

  {
#line 21
  k = 0;
#line 23
  k = 0;
  {
#line 23
  while (1) {
    while_1_continue: /* CIL Label */ ;
#line 23
    if (k < 6) {

    } else {
      goto while_1_break;
    }
#line 24
    j = j + i;
#line 23
    k = k + 1;
  }
  while_1_break: /* CIL Label */ ;
  }
  {
#line 26
  __cil_tmp3 = (void *)0;
#line 26
  pthread_exit(__cil_tmp3);
  }
}
}
#line 29 "fib_bench_longer_BUG.c"
int main(int argc , char **argv ) 
{ pthread_t id1 ;
  pthread_t id2 ;
  pthread_t * __restrict  __cil_tmp5 ;
  void *__cil_tmp6 ;
  pthread_attr_t const   * __restrict  __cil_tmp7 ;
  void *__cil_tmp8 ;
  void * __restrict  __cil_tmp9 ;
  pthread_t * __restrict  __cil_tmp10 ;
  void *__cil_tmp11 ;
  pthread_attr_t const   * __restrict  __cil_tmp12 ;
  void *__cil_tmp13 ;
  void * __restrict  __cil_tmp14 ;

  {
  {
#line 34
  __cil_tmp5 = (pthread_t * __restrict  )(& id1);
#line 34
  __cil_tmp6 = (void *)0;
#line 34
  __cil_tmp7 = (pthread_attr_t const   * __restrict  )__cil_tmp6;
#line 34
  __cil_tmp8 = (void *)0;
#line 34
  __cil_tmp9 = (void * __restrict  )__cil_tmp8;
#line 34
  pthread_create(__cil_tmp5, __cil_tmp7, & t1, __cil_tmp9);
#line 35
  __cil_tmp10 = (pthread_t * __restrict  )(& id2);
#line 35
  __cil_tmp11 = (void *)0;
#line 35
  __cil_tmp12 = (pthread_attr_t const   * __restrict  )__cil_tmp11;
#line 35
  __cil_tmp13 = (void *)0;
#line 35
  __cil_tmp14 = (void * __restrict  )__cil_tmp13;
#line 35
  pthread_create(__cil_tmp10, __cil_tmp12, & t2, __cil_tmp14);
  }
#line 37
  if (i >= 377) {
    goto _L;
  } else {
#line 37
    if (j >= 377) {
      _L: /* CIL Label */ 
      goto ERROR;
      ERROR: ;
    } else {

    }
  }
#line 43
  return (0);
}
}
