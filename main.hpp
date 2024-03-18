#include <iostream>
using namespace std;
//********************
// Declare Function Prototypes
//********************

int getTwoValues(int &input1, int &input2){
    cout << "Enter the first value: ";
    cin >> input1;
    cout << "Enter the second value: ";
    cin >> input2;
    
}

int getNextPrime(int &x){
    int i;
    int num = x;
    bool isPrime = true;
    while(true){
        isPrime = true;
        num++;
        for(i = 2; i <= num / 2; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            x = num;
            break;
        }
    }
}
int getPrevPrime(int &x){
    int i;
    int num = x;
    bool isPrime = true;
    while(true){
        isPrime = true;
        num--;
        for(i = 2; i <= num / 2; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            x = num;
            break;
        }
    }
}   