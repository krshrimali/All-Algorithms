1. Non static data members are initialized in Constructor's Initializer List.
    ```cpp
    struct Point {
        double X, Y;
        // Initialization using Initializer List
        Point(double const x = 0.0, double const y = 0.0) X(x), Y(y) {}
    };
    ```
    **Note**: Order in which non-static data members are initialized is the order in which they were declared in the definition.
    On the other hand, the order in which they are destroyed is the reversed order of construction.
    
    ```cpp
    // Initialization
    X(x), Y(y)
    // Destruction
    ~Y, ~X
    ```
2. Example of using assignment operator for initialization instead of Initializer list.

    ```cpp
    struct foo {
        foo() {
            std::cout << "Default Constructor" << std::endl;
        }
        foo(std::string const &text) {
            std::cout << "Constructor: " << text << std::endl;
        }
        foo(foo const &other) {
            std::cout << "Copy Constructor" << std::endl;
        }
        foo(foo&& other) {
            std::cout << "Move constructor" << std::endl;
        };
        foo& operator=(foo const & other) {
            std::cout << "Assignment" << std::endl;
            return *this;
        }
        foo& operator=(foo&& other) {
            std::cout << "Move Assignment" << std::endl;
            return *this;
        }
        ~foo() {
            std::cout << "Destructor" << std::endl;
        }
    };
    ```