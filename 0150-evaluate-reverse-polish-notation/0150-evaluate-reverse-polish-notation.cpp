class Solution {
public:
    long long  operate( long long a , long long b , string op){
        if(op == "+") return a + b ;
        if(op == "-") return a - b ;
        if(op == "*") return a * b ;
        else return a / b ;
        return 0 ;
    }
    int evalRPN(vector<string>& tokens) {
        stack<long long> sn ;
        for( auto token : tokens ) {
            if(isdigit(token[token.length()-1])) sn.push(stoi(token)) ;
            else {
                long long top1 = sn.top() ; sn.pop() ;
                long long top2 = sn.top() ; sn.pop() ;
                long long result = operate(top2 , top1 , token) ;
                sn.push(result) ;
            }
        }
        int ans = sn.top() ; sn.pop() ;
        return ans;
    }
};