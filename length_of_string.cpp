#include <iostream>
using namespace std;

int count_length(char arr[],int i){
    //base case
    if(arr[i] == '\0'){
        return i;
    }
    return count_length(arr,i+1);
}
int main(){
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    int ans = count_length(name,0);
    cout<<"Length of string is:"<<ans<<endl;
    return 0;
}