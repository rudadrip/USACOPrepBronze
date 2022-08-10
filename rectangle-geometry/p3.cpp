#include <bits/stdc++.h>
//RUDRADIP RAY
//PROBLEM: WHITE SHEET
//LINK: https://codeforces.com/contest/1216/problem/C
//LANG: C++

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    int area = (x2-x1)*(y2-y1);
    int x3, y3, x4, y4;
    std::cin >> x3 >> y3 >> x4 >> y4;
    int x5, y5, x6, y6;
    std::cin >> x5 >> y5 >> x6 >> y6;
    std::vector<int> white = {x1, y1, x2, y2};
    std::vector<int> black1 = {x3, y3, x4, y4};
    std::vector<int> black2 = {x5, y5, x6, y6};
    //Couldn't Solve
    return 0;
}
