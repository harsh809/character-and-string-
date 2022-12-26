class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int ansindex = 0;
        int a = chars.size();
        while(index<a){
            char ch = chars[index];
            int i=index+1;
            while(i<a && ch == chars[i]){
                i++;
            }
            chars[ansindex++]=ch;
            int count = i-index;
            if(count>1){
                string cnt = to_string(count);
                for(char ch:cnt){
                    chars[ansindex++] = ch;
                }
            }
            index = i;
        }
        return ansindex;
    }
};