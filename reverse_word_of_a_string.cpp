// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverse(string& s,int a,int e){
    while(a<=e){
        char ch = s[a];
        s[a++] = s[e];
        s[e--] = ch;
    }
}
int main() {
    string s = "the sky is blue";
    int a = s.size();
    int b=0;
    int i=0;
    while(i<a){
        if(s[i]==' '){
            reverse(s,b,i-1);
            b=i+1;
        }
        i++;
    }
    reverse(s,b,i-1);
    reverse(s,0,a-1);
    cout<<s;
    return 0;
}