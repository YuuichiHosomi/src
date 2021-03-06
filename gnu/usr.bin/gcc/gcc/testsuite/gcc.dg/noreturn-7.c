/* PR optimization/13394 */
/* Origin: Carlo Wood <carlo@gcc.gnu.org> */

/* Verify that a bogus "function does return" warning is not issued
   in presence of tail recursion within a noreturn function.  */

/* { dg-do compile } */
/* { dg-options "-O2 -Wreturn-type -Wmissing-noreturn" } */


void f(void) __attribute__ ((__noreturn__));
void _exit(int status) __attribute__ ((__noreturn__));

int z = 0;

void g()
{
  if (++z > 10)
    _exit(0);
  g();
}             /* { dg-warning "possible candidate" } */

void f()
{
  if (++z > 10)
    _exit(0);
  f();
}             /* { dg-bogus "does return" } */

int h()
{
  if (++z > 10)
    _exit(0);
  return h();
}             /* { dg-bogus "end of non-void function" } */

int k()
{
  if (++z > 10)
    _exit(0);
  k();
}             /* { dg-warning "end of non-void function" } */
