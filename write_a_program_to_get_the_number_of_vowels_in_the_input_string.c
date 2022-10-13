#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.size(),c=0;
    for(int i=0;i<n;i++){
        
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ) c++;
    }
    cout<<c;
    return 0;
}