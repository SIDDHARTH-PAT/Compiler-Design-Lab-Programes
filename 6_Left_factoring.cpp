#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char production[20],a1[20],a2[20],m[20],n[20],t[20];  
    int i,j=0,k=0,l=0,pos;
	int flag=0;  
    printf("Enter Production : A->");  
    gets(production);  
    for(i=0;production[i]!='|';i++,j++)  
        a1[j]=production[i];  
    a1[j]='\0';  
    for(j=++i,i=0;production[j]!='\0';j++,i++)  
        a2[i]=production[j];  
    a2[i]='\0';  
    for(i=0;i<strlen(a1)||i<strlen(a2);i++)  
    {  
        if(a1[i]==a2[i])  
        {  
            flag=1;
            m[k]=a1[i];  
            k++;  
            pos=i+1;  
        }  
    }  
    for(i=pos,j=0;a1[i]!='\0';i++,j++){  
        n[j]=a1[i];  
    }  
    n[j++]='|';  
    for(i=pos;a2[i]!='\0';i++,j++){  
        n[j]=a2[i];  
    }  
    m[k]='X';  
    m[++k]='\0';  
    n[j]='\0';  
    if(flag==0){
    	printf("Grammar is not left factoring\n");
	}
	else{
		printf("Grammar is left factoring\n");
	    printf("\n A->%s",m);  
        printf("\n X->%s\n",n);	
	}
      
}
