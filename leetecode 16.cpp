bool findRedundantBrackets(string &s) {

    stack<char> st;

    for(char ch : s) {

        if(ch == '(' ||
           ch == '+' ||
           ch == '-' ||
           ch == '*' ||
           ch == '/') {

            st.push(ch);
        }

        else if(ch == ')') {

            bool redundant = true;

            while(st.top() != '(') {

                char top = st.top();

                if(top == '+' ||
                   top == '-' ||
                   top == '*' ||
                   top == '/') {

                    redundant = false;
                }

                st.pop();
            }

            st.pop();

            if(redundant) {
                return true;
            }
        }
    }

    return false;
}
