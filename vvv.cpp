// vvv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    //4
    int x, y,res;
    std::cout << "x=(x>0)\n";
    cin >> x;
    if (x > 0) {
        std::cout << "y=(y>0)\n";
        cin >> y;
        if (y > 0) {
            res = x / y;
            cout << "Result: " << res << endl;
        }
        cout << "Y>0!!!!" << endl;
    }else
    cout << "X>0!!!!" << endl;
    //21
    int c;
    std::cout << "c=(c>0)\n";
    cin >> c;
    if (c <= 0) {
        cout << "C>0!";
    }
    else if (c%2==0){
        cout << "This is even number";
    }
    else {
        cout << "this is odd number";
    }
   
    return 0; 
}

