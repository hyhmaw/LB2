
#include <iostream>
using namespace std;



int maxOfThree(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else if (c > a && c > b) {
        return c;
    }
}


int main() {
    int num1, num2, num3;

   cout << "Enter 3 numb.: ";
   cin >> num1 >> num2 >> num3;

    int maxNum = maxOfThree(num1, num2, num3);

    cout << "Max numb.: " << maxNum << endl;

    return 0;
}

void Folder(){
    cout<< "Hello"<<endl;
}