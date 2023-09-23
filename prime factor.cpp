#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int largest_prime = -1;
    int i = 2;
    while (i * i <= n) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
        i = i + 1;
    }
    if (n > 1) {
        largest_prime = n;
    }
    return largest_prime;

}
int main()
{
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
}
