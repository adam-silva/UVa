#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; scanf("%d", &n);

    while(n) {
        char str[100]; scanf("%s", str);
        n = int (strlen(str) / n);
        vector<char> st;
        char c;

        for(int i = 0; i < strlen(str); i++) {
            c = str[i];
            st.push_back(c);
            if(st.size() == n){
                reverse(st.begin(), st.end());
                for(int i = 0; i < st.size(); i++) cout << st[i];
                st.clear();
            }
        }

        reverse(st.begin(), st.end());
        for(int i = 0; i < st.size(); i++) cout << st[i];
        st.clear();
        cout << endl;

        scanf("%d", &n);
    }
}