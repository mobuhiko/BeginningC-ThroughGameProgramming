/* Not really understand the question and overloading */
#include <iostream>
#include <string>
using namespace std;
int number_output(int number); 
void number_output(string text = "hello\n");

int main() { 
    int number;
    cout << "Enter number: \n";
    cin >> number;
    number_output(number);
    cout << "\n";
    
    number_output();
    return 0; 
}

int number_output(int number) {
    cout << "you entered " << number;
    return number;
}

void number_output(string text) {
    int number;
    cout << "Enter number: \n";
    cin >> number;
    cout << "you entered " << number;
    return;
}
