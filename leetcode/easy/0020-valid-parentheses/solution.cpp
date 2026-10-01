class Solution {
public:
    bool isValid(string s) {
        stack<char> sym;
        
        for (int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
                sym.push(ch);
            else
            {
                if (sym.empty()) return false;
            char top=sym.top();
            sym.pop();
            if ((ch==')' && top!='(')
                
                || (ch=='}' && top!='{')
               
                || (ch==']' && top!='[')) return false;
                
            }
            
           
        }

        return sym.empty();
        
    }
};