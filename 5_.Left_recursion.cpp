#include<iostream>  
using namespace std;
int main () {
    char terminal;  
    char b,a;  
    int n;
    bool flag=false;
    char production[10][10];  
    int index=3;   
    cout<<"Enter Number of Production : "<<endl;  
    cin>>n;  
    cout<<"Enter "<<n<<" productions"<<endl;  
    for(int i=0;i<n;i++){  
        cin>>production[i];  
    }  
    for(int i=0;i<n;i++){  
        terminal=production[i][0];  
        if(terminal==production[i][index]) {
            a=production[i][index+1];  
            cout<<"Grammar is left recursive"<<endl;  
            flag=true;
            while(production[i][index]!='\0' && production[i][index]!='|'){
                index++;
            }
            if(production[i][index]!='\0'){
                b=production[i][index+1];
                cout<<"Grammar without left recursion"<<endl;
                cout<<terminal<<"->"<<b<<terminal<<"'"<<endl;
                cout<<terminal<<"'->"<<a<<terminal<<"'|e"<<endl;
            }
        }
        index=3;
    }
    if(flag==false){
        cout<<"Grammar is not left recursive"<<endl;
        for(int i=0;i<n;i++){  
            cout<<production[i]<<endl;  
        }
    }
}   
