
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        stack<string> st;

        while (ss >> word) {
            st.push(word);
        }

        string result = "";

        while (!st.empty()) {
            result += st.top();
            st.pop();

            if (!st.empty()) {
                result += " ";
            }
        }

        return result;
    }
};
