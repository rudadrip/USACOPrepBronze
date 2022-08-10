#include <bits/stdc++.h>
//RUDRADIP RAY
//PROBLEM: BLOCKED BILLBOARDS 2
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=783
//LANG: C++

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    std::cin >> ax1 >> ay1 >> ax2 >> ay2;
    std::cin >> bx1 >> by1 >> bx2 >> by2;
    std::vector<int> a = {ax1, ay1, ax2, ay2};
    std::vector<int> b = {bx1, by1, bx2, by2};
    int numCorners = 0;
    std::vector<std::vector<int>> corners = {{ax1,ay1},{ax1,ay2},{ax2,ay2},{ax2,ay1}};
    for (auto i : corners) {
        if (i[0]>=bx1&&i[0]<=bx2&&i[1]>=by1&&i[1]<=by2) {
            numCorners++;
        }
    }
    std::cout << numCorners << "\n";
    if (numCorners==3) {
        std::cerr << "Something not right";
    }
    if (numCorners==0||numCorners==4) {
        std::cout << 0;
    }
    if (numCorners==1) {
        std::cout << (ax2-ax1)*(ay2-ay1);
    }
    if (numCorners==2) {
        int width = std::min(ax2,bx2)-std::max(ax1,bx1);
        int length = std::min(ay2,by2)-std::max(ay1,by1);
        std::cout << (ax2-ax1)*(ay2-ay1)-width*length;
    }
    return 0;
}
