// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void create(char s[],char temp[],int i,int j){
    //base case
    char ch =s[i];
    if(s[i] == '\0'){
        return;
    }
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        temp[j]=ch;
        return create(s,temp,i+1,j+1);
    }
    if(ch>='A' && ch<='Z'){
        temp[i]=ch+32;
        return create(s,temp,i+1,j+1);
    }
    return create(s,temp,i+1,j);
}
bool check(char temp[],int s,int e){
    // base case
    if(s>e){
        return true;
    }
    if(temp[s]==temp[e]){
        return check(temp,s+1,e-1);
    }
    else{
        return false;
    }    
}
int count_length(char name[],int i){
    // base case
    if(name[i]=='\0'){
        return i;
    }
    return count_length(name,i+1);
}

int main() {
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    char temp[20]  = "\0";
    create(name,temp,0,0);
    cout<<temp<<endl;
    int ans = count_length(temp,0);
    bool result = check(temp,0,ans-1);
    if(result){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}