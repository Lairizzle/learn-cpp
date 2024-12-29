#include <iostream>
//The caller of a function can pass parameters to the function
//Examples:

//This function takes one int parameter named x
//The caller will supply x to the function parameter
void printValue(int x){
    std::cout << x << '\n';
}

//This function has two integer parameters, one y and one x
int add(int x, int y){
    return x + y;
}

//You can also use a return value of a function and pass it to another function
//as a parameter

int myReturnFunction(){
    return 10;
}

//We can pass the return value of the previous function to this parameter
void printMyNum(int myNum){
    std::cout << myNum << '\n';
}

int doubleNumber(int num){
    return num * 2;
}

int main(){
    printValue(5);
    int result {add(5, 5)};
    std::cout << result << '\n';
    //call the function printMyNum() and use the return value from myReturnFunction()
    printMyNum(myReturnFunction());
    std::cout << doubleNumber(6) << '\n';
    return 0;
}

