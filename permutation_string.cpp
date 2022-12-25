//Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
//In other words, return true if one of s1's permutations is the substring of s2.
// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").

class Solution {
private:
    bool check(int count1[],int count2[]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int a = s1.length();
        for(int i=0;i<a;i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i=0;
        int count2[26] = {0};
        int b = s2.length();
        while(i<a && i<b){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        //iske baad i change ho gya hai i
        if(check(count1,count2)){
            return 1;
        }
        while(i<b){
            int index = s2[i] - 'a';
            count2[index]++;
            index = s2[i-a]-'a';   //isliye yha par satify kar rha hai.
            count2[index]--;
            i++;
            if(check(count1,count2)){
                return 1;
            }
        }
        return 0;
    }
};