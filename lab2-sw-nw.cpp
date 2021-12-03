// Lab2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <limits>

using namespace std;

typedef std::numeric_limits<double> dbl;

int main()
{
    double y;
    double x;
    double i;
    double j;
    double n;


    cout.precision(5);


    std::cout << "Please enter x value!\n";
    std::cin >> x;
    std::cout << "Please enter n value!\n";
    std::cin >> n;


    if (x < 0) {
        for (i = 1; i <= n - 1; i++) {
            for (j = 1; j <= n; j++) {
                y = y + (j / (j * j + j));
            }
        }
    }
    else {
        for (i = 1; i <= n - 1; i++) {
            y = y + i;
        }
        y = x - y;
    }

    std::cout << "y = " << y;




}

