#include <iostream>
using namespace std;
 
string removeComments(string prgm)
{
    int n=prgm.length();
    string res;
    bool s_cmt=false;
    bool m_cmt=false;
    for(int i=0;i<n;i++)
    {
        if(s_cmt==true && prgm[i]=='\n')
            s_cmt=false;
        else if(m_cmt==true&&prgm[i]=='*' && prgm[i+1]=='/')
            m_cmt=false,i++;
        else if(s_cmt||m_cmt)
            continue;
        else if(prgm[i]=='/'&&prgm[i+1]=='/')
            s_cmt = true, i++;
        else if(prgm[i]=='/'&&prgm[i+1]=='*')
            m_cmt=true,i++;
        else res+=prgm[i];
    }
    return res;
}
int main()
{
    string prgm="   /* Test program */ \n"
                "   int main()  \n"
                "   {           \n"
                "      // variable declaration \n"
                "      int a, b, c;    \n"
                "      /* This is a test  \n"
                "          multiline     \n"
                "          comment for   \n"
                "          testing */      \n"
                "      a = b + c;       \n"
                "   }           \n";
    cout<<"Given Program \n";
    cout<<prgm<<endl;
    cout<<" Modified Program ";
    cout<<removeComments(prgm);
    return 0;
}
