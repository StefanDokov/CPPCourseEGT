// Unique Pointer

#include <iostream>
#include <memory>

int main() {
	auto ptr = std::make_unique<int>(10);
} // The ptr reaches end of scope, no memory leaks

//Shared Pointer

#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_shared<int>(10);

    std::cout << ptr.use_count() << "\n"; // Prints the reference count (1)
    {
        auto ptr2 = ptr; // Reference count is now 2
        std::cout << ptr2.use_count() << '\n'; // Prints the reference count (2)
    } // The ptr2 reaches end of scope, reference count is 1 so resource not freed

    std::cout << *ptr << "\n";
} // The ptr reaches end of scope, reference count is 0 so resource is freed

//Exception Safety

#include <iostream>
#include <memory>

void unsafe_pointer() {
    int* ptr = new int(10);

    if (*ptr == 10) {
        throw;
    }

    delete ptr; // The ptr not freed because the function throws beforehand
}

void safe_pointer() {
    auto ptr = std::make_unique<int>(10);

    if (*ptr == 10) {
        throw;
    }
} // The ptr freed because destructors are called automatically when leaving scope