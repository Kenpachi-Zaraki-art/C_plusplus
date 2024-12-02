// Example program
#include <iostream>
#include <cmath>

int main()
{
 double a = 4;
 double b = 0.707;
 double pi = M_PI;
    double c = pow((exp(0.5*((1-cos(b)*pi)/(1-sin(a)*pi)))+exp(0.3*(1+cos(a)*pi)/(1+sin(b)*pi))),3/2);
    std::cout<<c;
}
