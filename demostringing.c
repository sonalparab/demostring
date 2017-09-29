#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  /*strcat
    char *strcat(char *dest, const char *src);
    concatenating strings together
    must make sure destination char array has room to add the
     new string
    is automatically null terminated
  */

  char str[19] = "";
  char str1[] = "Hello ";
  char str2[] = "there ";
  char str3[] = "class!";
  printf("str is: %s\n",str);
  printf("str1 is: %s\n",str1);
  printf("str2 is: %s\n",str2);
  printf("str3 is: %s\n",str3);
  strcat(str,str1);
  strcat(str,str2);
  strcat(str,str3);
  printf("str is now: %s\n",str);
  printf("\n");

  
  /*strncat
    char *strncat(har *dest, const char *src, size_t n);
    similar to strcat in concatenating strings together
    however, the additional parameter, n, is used to specify how
     many bytes of the second string parameter is concatenated to 
     the first
    writes n+1 bytes to the first string parameter if the second 
     string parameter has n or more bytes because of null termination
  */

  char nstr[22] = "";
  char nstr1[] = "Hello class!";
  char nstr2[] = "there is a cat.";
  char nstr3[] = "everyone is asleep!";
  char nstr4[] = "!!!";
  printf("nstr is: %s\n",nstr);
  printf("nstr1 is: %s\n",nstr1);
  printf("nstr2 is: %s\n",nstr2);
  printf("nstr3 is: %s\n",nstr3);
  printf("nstr4 is: %s\n",nstr4);
  strncat(nstr,nstr1,6);
  strncat(nstr,nstr2,6);
  strncat(nstr,nstr3,8);
  strncat(nstr,nstr4,1);
  printf("nstr is now: %s\n",nstr);
  printf("\n");

  //parameter n can be bigger than the length of the second string
  char nst[4] = "";
  char nst1[] = "Hey";
  printf("nst is: %s\n",nst);
  printf("nst1 is: %s\n",nst1);
  strncat(nst,nst1,4);
  printf("nst is now: %s\n",nst);
  printf("\n");

  return 0;
}
