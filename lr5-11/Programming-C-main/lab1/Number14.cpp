// Example program
#include <iostream>
#include <cmath>

int main()
{
 double a = 2;
 double b = 19.03;
 double pi = M_PI;
    double c = (b/a)*((4.3 * sin((a/b+1)*pi))/(1-cos(((a/b)-1)* pi)))+log(b);
    std::cout<<c;
}
