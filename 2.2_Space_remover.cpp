#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char str[80]="This is a program ";
   int i=0,len,j;
   len=strlen(str);
   for(i=0;i<len;i++){
      if(str[i]==' '){
         for(j=i;j<len;j++)
            str[j]=str[j+1];
            len--;
      }
   }
   cout<<str;
   return 0;
}
