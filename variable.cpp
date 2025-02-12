#include <iostream>
#include <cmath>

int main()
{
    int x; // defining var x
    int y;
    x = 2;
    std::cout << "please provide an integer for y";
    std::cin >> y;
    int result = static_cast<int>(std::pow(x,y));
    std::cout << "x to the power of y is :  " << result;
    return 0;
}
