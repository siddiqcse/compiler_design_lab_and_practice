#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int count=0,i;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    for(i=1; s[i] != '\0'; i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]== '/' || count++);
    }

    cout<<"Number of operators in a given String are: "<<count<<endl;

    return 0;
}
