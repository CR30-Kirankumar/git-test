//program to find whether second string is rotation string of first string if true find the number of rotation in second string.

#include "../hdr/hd.h"
#include "../src/rot.c"

int main()
{
 char str1[MAX];
 char str2[MAX];
 int k;
 printf("Enter the string\n");
 fgets(str1, MAX, stdin);
 if(fgets != NULL) {                    //fgets validation for first string.
    printf("fgets true\n"); }
  else
    printf("error in fgets\n");
 printf("Enter the rotated string\n");
 fgets(str2, MAX, stdin);                // fgets validation for second string.
 if(fgets != NULL) {
    printf("fgets true\n"); }
  else
    printf("error in fgets\n");
 k = rotation(str1,str2);               //calling function of checking condition.
  if(k) {
    printf("strings are rotated %d\n", k);}  //if fuction returns true.
  else{
      printf("string are not rotated\n");    //if function return false.
    }
 return 0;
}
     
  
