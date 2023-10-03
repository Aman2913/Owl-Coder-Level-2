#include <iostream> 

using namespace std; 

int countWaysToClimbStairs(int n) { 

    if (n <= 1) { 

        return 1; 

    } else { 

        return countWaysToClimbStairs(n - 1) + countWaysToClimbStairs(n - 2); 

    } 

} 

int main() { 

    int n; 

    cin>>n; 

    cout << countWaysToClimbStairs(n) <<endl; 

    return 0; 

} 
