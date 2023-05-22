#include <iostream>
#include <vector>

/*
 * Created by Manuel/ImagoMortis
 */


// Function that checks if a number is a prime or not
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// vector function
std::vector<int> find_prime_factors(int n) {
    //vector that stores the prime factors
    std::vector<int> prime_factors;
    // for loop that calculates the prime factors
    for (int i = 2; i <= n; i++) {
        while (n % i == 0 && is_prime(i)) {
            // append de result to the vector
            prime_factors.push_back(i);
            n /= i;
        }
    }
    return prime_factors;
}

int main() {
    // n ist the number which we want to check for prime factors
    int n;
    std::cout << "Please input a number to find Prime_factors";
    std::cin >> n;
    // function that calculates the prime factors gets called
    std::vector<int> prime_factors = find_prime_factors(n);
    // checking if there are 2 elements in vector
    if (prime_factors.size() % 2 == 0) {
        // output of the prime factors
        std::cout << "The prime factors of " << n << " are: ";
        for (auto p : prime_factors) {
            std::cout << p << " ";
        }
        // output of p and q
        std::cout << std::endl;
        int p = prime_factors[0];
        int q = prime_factors[1];
        std::cout << "p = " << p << std::endl;
        std::cout << "q = " << q << std::endl;
      // if there aren't prime factors output
    } else {
        std::cout << n << " is not a product of two primes." << std::endl;
    }
    return 0;
}



