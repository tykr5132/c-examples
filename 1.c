#include <stdio.h>

int main() {
  static int i=5;
  if(i>=0)
  {
      printf("the avalue is %d\n",i);
      main();
      i--;
  }

    return 0;
}

#include <stdio.h>

int main() {
  static int i=5;
  if(i>=0)
  {
      printf("the avalue is %d\n",i);
     i--;
      main();
     
  }

    return 0;
}

#include <stdio.h>

int main() {
  static int i=5;
  if(i>=0)
  {
      printf("the avalue is %d\n",i);
      i--;
      return;
      main();
     
  }

    return 0;
}
 
