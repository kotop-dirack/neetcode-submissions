class Solution {
public:
    void sdelai(int a,int b, char op,stack<int>& st){
        double a_i = b;
        double b_i = a;
        int result;
        switch(op){
            case '-': result = a_i - b_i; break;
            case '+': result = a_i + b_i; break;
            case '*': result = (a_i * b_i); break;
            case '/': result = int(a_i / b_i); break;
        }
        st.pop();
        st.push(result);
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        string oper = "+-*/";
        for (int i = 0; i<tokens.size();i++){
            if (oper.find(tokens[i]) == string::npos) {
                st.push(stoi(tokens[i]));
            }
            else{
                int t = st.top();
                st.pop();
                sdelai(t,st.top(),tokens[i][0],st);
                
            }
        }
        return st.top();
    }
};
