#include <bits/stdc++.h>
//NAME: RUDRADIP RAY
//PROG: THE COW-SIGNAL
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=665
//LANG: C++

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;
    std::vector<std::string> lines = {};
    for (int i=0;i<m;i++) {
        std::string line;
        std::cin >> line;
        lines.push_back(line);
    }
    for (auto j : lines) {
        for (auto h : j) {
            std::cout << h << h;
        }
        std::cout << "\n";
    }
    return 0;
}
