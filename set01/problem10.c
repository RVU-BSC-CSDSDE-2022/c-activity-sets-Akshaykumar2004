#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char str1[1000],str2[1000];
  int res;
  input_two_strings(str1,str2);
  //printf("%s",str1);
  res=stringcompare(str1,str2);
  printf("result=%d\n",res);
  output(str1,str2,res);
  
    
}
void input_two_strings(char *string1,char *string2)
{
  int i;
  printf("enter string 1:\n");
  scanf("%s",string1);
  printf("enter string 2:\n");
  scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
  int i,res;
  i=0;
  res=NULL;
  while((*string1 != '\0')&&(*string2 != '\0'))
      {
        if(string1[i] == string2[i]){
        res=0;
        break;
        }
      else {
        if(string1[i] < string2[i]){
        res=1;
        break;
        }
      else{
        res=2;
        break;
        }
        }
      i=i+1;
      }
   
  return res;
}
void output(char *string1, char *string2, int result)
{
  if(result==0){
    printf("strings are equal");
  }
  else if(result==1){
    printf("string1 is big");
  }
  if(result==2){
    printf("string2 is big");
  }
}