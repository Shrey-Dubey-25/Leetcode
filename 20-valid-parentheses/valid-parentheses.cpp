class Solution {
public:
    bool isValid(string t) {
        stack<int>s;
        for(auto i:t){
            if(i=='['||i=='{'||i=='('){
                s.push(i);
            }else if(s.empty()){
                return false;
            }
            else if(i=='}'&&s.top()=='{'||i==']'&&s.top()=='['||i==')'&&s.top()=='('){
                s.pop();
            }else{
                return false;
            }
        }
        return s.empty();
    }
};