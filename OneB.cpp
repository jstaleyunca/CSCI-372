/* 
 * File:   main.cpp
 * Author: John
 *
 * Created on January 27, 2015, 2:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n; 
    cout << "Please enter a positive integer: ";
    cin >> n;
    int a = n % 15; 
    int b = n % 5; 
    int c = n % 3; 
    int x = (n - a) / 15; 
    int y = (n - b) / 5; 
    int z = (n - c) / 3; 
    int xAdd = (((x * x) + x) / 2) * 15; 
    int yAdd = (((y * y) + y) / 2) * 5; 
    int zAdd = (((z * z) + z) / 2) * 3; 
    int d = (yAdd + zAdd) - xAdd;
    if(a == 0 || b == 0 || c == 0) {
        d = d - n;
    }
    cout << "The sum of all multiples of 3 and 5 below " << n << ": " << d;
}

