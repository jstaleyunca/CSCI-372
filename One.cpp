/* 
 * File:   main.cpp
 * Author: John
 *
 * Created on January 26, 2015, 2:08 PM
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
    int xAdd = 0;
    int tAdd = 0;
    int yAdd = 0;
    for (int t = 0; t < n; t += 3) {
            tAdd += t;
    }
    for (int x = 0; x < n; x += 5) {
            xAdd += x;
    }
    for (int y = 0; y < n; y += 15) {
            yAdd += y;
    }
    int z = xAdd + tAdd - yAdd;
    cout << "The sum of all multiples of 3 and 5 below " << n << ": " << z;
}