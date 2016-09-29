#include <stdlib.h>
#include <stdio.h>

int
main ()
{
  char **env = environ;

  while (*env)
    {
      printf ("%s\n", *env);
      env++;
    }
  return (0);
}
