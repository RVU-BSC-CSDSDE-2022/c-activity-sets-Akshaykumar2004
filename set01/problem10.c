 #include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2);
int main()
{
  char str1,str2;
  input_two_strings(&str1,&str2);
  output(&str1,&str2);
  
}
void input_two_strings(char[100] *string1, char[100] *string2)
{
  scanf("%s",&string1);
  scanf("%s",&string2);
}
void output(char *string1, char *string2)
{
  printf("%s\n%s\n",string1,string2);
}