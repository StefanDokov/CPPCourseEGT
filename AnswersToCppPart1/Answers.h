

1:int* ptr = &var;
���� ��������, �� �������� ���� ��� ���������� �� ������������ var.
The pointer is giving a referention to a int type variable var. 

2:While loop ����� �������� ����������, ���� ��������� � ��������� � ������
 ��������� ��� ���������� �� ����, ������ ��������� � �����, ������ do - while ����� ��������
 ���� ��� �������� �������� � ��� ������ ��������� ���� ��������� � while � ��������� � ������ ���������
 ������ ��������� ���� �� �� �������.
 While loop is checking if the condition is true and then executing the code below,
 and do-while loop is doing the comand after the do command one time and then checking if the condition is true or false.

 3: for(int i = 1; i < 5; i++){
 std::cout << i << ennd;
 }
 expected output:
 1
 2
 3
 4
������ ������� �� ����� �������� � �� ����� �� �������� ������. ��� ����� ������� �� i 
 �� ��������� �� ������� �������.
For loop is mostly used to reapeat a operation a certail amount of times. In this case
 we are increasing the value of i 3 times and prining it on the console 4 times.

4:��������� ������ �� �� ������� ���������� �� ��� � �� ��� ��������� � ����������.
 ���� ������ �� �� ��������� ������ ��������������� �� ������� �����, ����� � ��-����� �������� �� ������ ���.
 ���� ���� ��� ����� �� ������� ��� ��������� �� ���� ����� ���� �� ������� ���� �� ���� �����,
 � ����������� �� ��� ����������� �� �������� ��������� �������.
 Functions are very important to prevent code duplication. You can use them to improve your code
 reusability. You can place same function on all the neccessary places, which will make you core 
 more readable and if you need to change that function in the future, that change will affect all the places
 where you have used it. This way you are rewriting just several lines of cone, not many.
 
 double squareOfNumber(double a){
 retunr a * a;
 }

5:���������� �� ����� � �++ � �����, ������ ����� ��� ����� ������� �������� �������� ����� �� ����������� ��.
 ���� ������ int � flot ������ �������� �������� � ���� ������ �� �� �������� ��� ����������� �� �� �� ���� ���������� �� ����� ��������.
 Stack ������� �������� �� ��������� ���������� � ��������� �� ������ � �� ��������� �� �����������, 
 ������ Heap ������� �� ������ ����� ������ � ������������ � � ������ ����������� �� ������, ����� ���� ����. 
Stack memory is managed by the compiler automatically, everything is deallocated when they go out of scope.
 Heap memory is responsability of the programmer, it can be detremental to memory usage.
 

6:�������������� � ������ � ��������������. ���� ��� ���������� �� �����, ���� ������ � �� ������ �� ������� � ���� �����.
 ���� ����� ���� ���� ���������� �������. ��������� �������� � ����� � ���� ��������� ������ �� ���������� ��� ���������.
 Encapsulation is a basic concept in programming. With encapsulation you can stote data into a single object.
 This happens with attributes and methods in classes. Those methods are used to mutate the fields as it is needed.
 

7:������������ �� ����� ������� � ��������������. �� ����� �� �� ������� �� ����� ��� �� � �������� � �� ��� ��-����� �� �� ���������� � ���� ��, � ���� 
 �� �������� ������ ��� �� ����� ������ �����.
 Exceptions are very usefull for error handling in programming. They help you to be more aware about your code and what to expect your function and programs to 
 return. 
 
 #include <stdexcept>
 string checkIfLowerThanZero(int b){
   if (b < 0){
 throw std::runtime_error("Number is below zero");
 }
 return "Above or equal to zero";
 }
 
 
 int main(){
 try {
    int b;
    b = -2;
 checkIfLowerThanZero(b);
} catch(const std::exception& e){
 std::cerr << "Exception is: " << e.what() <<std::endl;
}
 return 0;
}
 should throw excption because here b is below 0. If we use positive number we can take result of function into variable and print it.

8:Vectora � ����� ������� � �++. �������� �� ���������� �, �� ���� �� ������� ���������� ��, ������ ������ �������� �� ���� ���� ������������ ��������.
 ����� �� �������� ����� ��� �������, ����� �� �� �� ���� � ���� ���. ���� ���� ������� ��� ����� ���� ���������������, ����� ��� ����� ���������� �� ����������.
Vectors are very useful in C++ programming. They main advantage is their property that they can change their size. You can push same type values into your vector.
 

9:� ����� ����������� ���������� ���������� �� ���������� ����������� �� ������������.
���������� ����� �� �������� "���������" �� ���� ����� ��� �������� ����� � �������, ������ ������������ ���� ��� ����� �� ���� �� �� �������.

 Pointers can bn used for dynamic memory allocation
int* dynamicInt = new int;
delete dynamicInt;

References are often used for passing parameters to functions by reference.
void modifyValue(int& value) {
value *= 2;
}


10:��������� �� ���������� �� ������ �� �������, ����� ���� ����� ���� � ���� ��������, �� ���� �� �������� �������� �� ��� ���������.
 ���� ���� ��������� � �������� ����� �� ������ �� ���, ��� ������������� �� �������� �������.

#include <iostream>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
int num1 = 5, num2 = 10;
std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

swapValues(num1, num2);

std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

std::string str1 = "Hello", str2 = "World";
std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

swapValues(str1, str2);

std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

return 0;
