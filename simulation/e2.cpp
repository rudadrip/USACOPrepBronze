#include <bits/stdc++.h>
//NAME: RUDRADIP RAY
//PROG: SPEEDING TICKET
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=568
//LANG: C++

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> limit = {};
    for (int i1=0;i1<n;i1++) {
        int a, b;
        std::cin >> a >> b;
        limit.push_back({a,b});
    }
    std::vector<std::vector<int>> bessie = {};
    for (int i2=0;i2<n;i2++) {
        int c, d;
        std::cin >> c >> d;
        bessie.push_back({c,d});
    }
    std::vector<int> limit2 = {};
    for (auto h1 : limit) {
        for (int h2=0;h2<h1[0];h2++) {
            limit2.push_back(h1[1]);
        }
    }
    std::vector<int> bessie2 = {};
    for (auto b1 : bessie) {
        for (int b2=0;b2<b1[0];b2++) {
            bessie2.push_back(b1[1]);
        }
    }
    int max = 0;
    for (int v=0;v<100;v++) {
        if (bessie2[v]>limit2[v]&&bessie2[v]-limit2[v]>max) {
            max = bessie2[v]-limit2[v];
        }
    }
    std::cout << max;
    return 0;
}
