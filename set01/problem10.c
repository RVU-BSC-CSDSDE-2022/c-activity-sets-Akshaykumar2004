#include<stdio.h>
#include<string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char str1[100],str2[100];
  int res;
  input_two_strings(str1,str2);
  res=stringcompare(str1,str2);
  output(str1,str2,res);
}

void input_two_strings(char *string1, char *string2)
{
  scanf("%s %s",&string1,&string2);
}

int stringcompare(char *string1, char *string2)
{
  int result;
  result=strcmp(string1,string2);
  return result;
}

void output(char *string1, char *string2, int result)
{
  if(result==0)
  {
    printf("strings are equal");
  }
  else if(result>1)
  {
    printf("string one is great");
  }
  else
  {
    printf("string 2 is great");
  }
}

