#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
static bool isStrongPrime(int n)
{
    if (!isPrime(n) || n == 2)
        return false;
    
    int previous_prime = n - 1;
    int next_prime = n + 1;
 
    while (!isPrime(next_prime))
        next_prime++;
 
    while (!isPrime(previous_prime))
        previous_prime--;
 
    
    int mean = (previous_prime + next_prime) / 2;
 
    if (n > mean)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    if(isStrongPrime(n))cout<<"YES";
    else cout<<"NO";
}
