1. **Creating Type Aliases**:
    - Synonyms for each type. Note: Doesn't work for a `template` type.
    - Example: `std::vector<T>` is a class of types, where T is a placeholder. While 
    `std::vector<int>` is a type.
    - In `C++11`: Both of the below aliases are introduced using `using` syntax.
        - Type Alias: Name for another already declared type
        - Alias Template: Name for another already declared template
    - Example: mentioned in `example_aliases.cpp`.

2. **Understanding Uniform Initialization**
    - (a.k.a) Braze Initialization method
    - Another method: Direct Initialization Method:
        - `std::string sample_1("sample string"); // explicitly using constructor`
        - `std::string sample_2 = "test"; // using copy initialization`
    - Examples of Uniform Initialization:
        - Standard Containers: 
            - `std::vector<bool> vec_sample {true, false, true};`
            - `std::map<int, std::string> m { {1, "one"}, {2, "two"} };`
        - Dynamically Allocated Arrays:
            - `int* arr_sample = new int[3] {1, 2, 3};`
        - Arrays:
            - `int arr_sample[3] {1, 2, 3};`
        - Built-in Types:
            - `int i { 42 };`
            - `double d { 1.2 };`
        - User-defined Types:
            - 
            ```cpp
            class foo {
                int a;
                double b;
            public:
                foo(): a(0), b(0) {}
                foo(int a, double b = 0.0): a(a), b(b) {}
            };
            foo f1{}; // default constructor
            foo f2{ 42, 1.2 }; // constructor with int and double
            foo f3{ 42 }; // construct with int, and using default double
            ```
        - User-defined POD Types:
            - `struct bar { int a; double b; };`
            - `bar b { 42, 1.2 };`
    - Using `std::initializer_list<T>`:
        - 
        ```cpp
        class foo {
            int a;
            double b;
        public:
            foo(): a(0), b(0) {}
            foo(int a, int b=0): a(a), b(b) {}
            // std::initializer_list<int> has precedence over other constructors
            foo(std::initializer_list<int> l) {}
        };
        
        foo f{ 1, 2 }; // calls constructor with std::initializer_list<int>
        ```