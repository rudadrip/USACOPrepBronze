#include <bits/stdc++.h>
//RUDRADIP RAY
//PROBLEM: SQUARE PASTURE
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=663
//LANG: C++

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    std::cin >> ax1 >> ay1 >> ax2 >> ay2;
    std::cin >> bx1 >> by1 >> bx2 >> by2;
    std::vector<int> a = {ax1, ay1, ax2, ay2};
    std::vector<int> b = {bx1, by1, bx2, by2};
    std::vector<int> differences = {};
    differences.push_back(std::abs(ax2-ax1));
    differences.push_back(std::abs(ax2-bx1));
    differences.push_back(std::abs(ax2-bx2));
    differences.push_back(std::abs(ax1-bx1));
    differences.push_back(std::abs(ax1-bx2));
    differences.push_back(std::abs(bx1-bx2));
    differences.push_back(std::abs(ay2-ay1));
    differences.push_back(std::abs(ay2-by1));
    differences.push_back(std::abs(ay2-by2));
    differences.push_back(std::abs(ay1-by1));
    differences.push_back(std::abs(ay1-by2));
    differences.push_back(std::abs(by1-by2));
    std::sort(differences.begin(),differences.end());
    int out = differences[11];
    std::cout << out*out;
    return 0;
}
