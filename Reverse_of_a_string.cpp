#include <iostream>
using namespace std;

void reverse(char name[],int s,int e){
    // base case
    if(s>e){
        return;
    }
    else{
        swap(name[s],name[e]);
        return reverse(name,s+1,e-1);
    }
}
int count_length(char name[],int i){
    //base case
    if(name[i] == '\0'){
        return i;
    }
    else{
        return count_length(name,i+1);
    }
}
int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    int ans = count_length(name,0);
    reverse(name,0,ans-1);
    cout<<"reverse:"<<name<<endl;
    return 0;
    
}