#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, q; scanf("%d %d", &n, &q);
    int c = 1;

    while(n || q){
        for(int i = 0; i < n; i++){
            int x; scanf("%d", &x);
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        printf("CASE# %d:\n", c);
        
        for(int i = 0; i < q; i++){
            int y; scanf("%d", &y);
            printf("%d ", y);
            vector<int>::iterator k;
            k = lower_bound(v.begin(), v.end(), y);

            if(v[k-v.begin()] == y) {
                cout << "found at " << k-v.begin()+1 << endl;
            } else cout << "not found\n";
        }

        v.clear(); c++;
        scanf("%d %d", &n, &q);
    }
}
