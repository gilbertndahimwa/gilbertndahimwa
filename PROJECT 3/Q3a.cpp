#include <iostream>
using namespace std;

int sum_from_to(int a, int b) {
    // Ensure that a is less than or equal to b
    if (a > b) {
        std::swap(a, b);
    }

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int a;
    int b ;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter last number"<<endl;
    cin>>b;
    int sum = sum_from_to(a, b);
    std::cout << "Sum from " << a << " to " << b << " is: " << sum << std::endl;
    return 0;
}

