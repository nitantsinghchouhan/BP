/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 13 "files/volatile_alias.c"
int main(void) 
{ int volatile   a ;
  int *p ;
  int volatile   __cil_tmp3 ;
  int __cil_tmp4 ;

  {
#line 15
  a = (int volatile   )4;
#line 16
  p = (int *)(& a);
#line 17
  p = (int *)(& a);
#line 18
  __cil_tmp3 = (int volatile   )4;
#line 18
  a = a - __cil_tmp3;
  {
#line 19
  __cil_tmp4 = *p;
#line 19
  if (__cil_tmp4 != 0) {
    ERROR: 
#line 20
    goto ERROR;
  } else {

  }
  }
#line 22
  return (0);
}
}
