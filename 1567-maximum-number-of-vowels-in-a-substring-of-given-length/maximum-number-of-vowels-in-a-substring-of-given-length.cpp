class Solution {
public:
    bool vow(char& ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int c=0,m=0;
        for(int i=0;i<min(k,(int)s.length());i++){
            if(vow(s[i])){
                c++;
            }
            if(c>m){
                m=c;
            }
        }
        int st=0,e=k-1;
        if(e>=s.length()){
            return m;
        }
        while(e<s.length()){
            e++;
            if( e<s.length()&&vow(s[e]))c++;
            if(vow(s[st]))c--;
            st++;
            if(c>m){
                m=c;
            }
        }
        return m;
    }
};