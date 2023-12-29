#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    // Function to push an element onto the stack
    void push(const T& value) {
        elements.push_back(value);
    }

    // Function to pop an element off the stack
    void pop() {
        if (!empty()) {
            elements.pop_back();
        }
        else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Function to get the top element of the stack
    T top() const {
        if (!empty()) {
            return elements.back();
        }
        else {
            std::cerr << "Stack is empty. No top element." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Function to check if the stack is empty
    bool empty() const {
        return elements.empty();
    }
};

int main() {
    // Example usage of the stack
    Stack<int> intStack;

    intStack.push(5);
    intStack.push(10);
    intStack.push(15);

    std::cout << "Top element: " << intStack.top() << std::endl;

    intStack.pop();
    intStack.pop();

    std::cout << "Is the stack empty? " << (intStack.empty() ? "Yes" : "No") << std::endl;

    return 0;
}