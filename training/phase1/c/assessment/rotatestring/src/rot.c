#include "../hdr/hd.h"

int rotation(char *str1, char *str2)
{
  if(strlen(str1) != strlen(str2))               //condition to check if both strings of equal length.
  {
    return 0;                                    //if different lengths returns false.
  }
  int count = strlen(str2);                      //finding length of string two.
  count = count -1;
  char *start1;
  char *start2;
  start1 = str1;
  start2 = str2;
  while(*str2 != '\n') {                          //string two should compare upto last character.
         if(*str1==*str2) {                       //checking characters of both strings same or not if same increment both.
           str1++;
           str2++;}
         else if(*str1 =='\n'){                    //condition to check if first string meets last character.
            str1=start1;}                          //asign first string to initial value.
         else if(*str2 == '\n'){                   //condition to check if second string meets last character.
            break;}                                //break if true.
         else {
           count--;                                //decrement count value by 1. 
            if(count == 0){break;}                 //if count 0 break.
           str2=start2;                            //assign string two to the initial value.
           str1++;}
    }
    return count;                                  //returns count.
}

