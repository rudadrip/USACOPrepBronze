#include <bits/stdc++.h>
//RUDRADIP RAY
//PROBLEM: TWO TABLES
//LINK: https://codeforces.com/problemset/problem/1555/B
//LANG: C++

bool doesIntersect (int a, int b, std::vector<int> cord) {
    if (cord[0]<a&&cord[1]<b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        int width, height;
        std::cin >> width >> height;
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        int w, k;
        std::cin >> w >> k;
        std::vector<int> solutions = {};
        for (int j1=0;j1<=height-y2;j1++) {
            if (doesIntersect(w, k, {x1,y1+j1,x2,y2+j1}) == false) {
                solutions.push_back(j1);
            }
        }
        for (int j2=0;j2<=width-x2;j2++) {
            if (doesIntersect(w, k, {x1+j2,y1,x2+j2,y1}) == false) {
                solutions.push_back(j2);
            }
        }
        if (solutions.size() == 0) {
            std::cout << -1 << "\n";
        } else {
            std::sort(solutions.begin(),solutions.end());
            std::cout << solutions[0] << "\n";
        }
    }
    return 0;
}
