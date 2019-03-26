## Notes

1. `class Empty{};` is same as: 
    ```cpp
    class Empty {
    public:
        Empty() { ... } // default constructor
        Empty(const Empty& rhs) { ... } // copy constructor
        ~Empty() { ... } // destructor
        
        Empty& operator=(const Empty& rhs) { ... } // copy assignment operator
    };
    ```
2. **Copy Constructor** is called when new object is created from an existing object.
3. **Copy Assignment Operator** is called when existing object is assigned a new value from existing object.

## References

1. https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/
2. Effective CPP Book by Scott Meyers (2005 Edition)