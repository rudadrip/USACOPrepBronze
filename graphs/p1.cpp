#include <bits/stdc++.h>
//NAME: RUDRADIP RAY
//PROG: GRASS PLANTING
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=894
//LANG: C++

int d[10000];

int main() {
    int n;
    std::cin >> n;
    for (int i=0;i<n-1;i++) {
        int a, b;
        std::cin >> a >> b;
        d[a-1]++;
        d[b-1]++;
    }
    int max = 0;
    for (auto i : d) {
        if (i>max) {
            max = i;
        }
    }
    std::cout << max+1;
    return 0;
}
