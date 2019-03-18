1. **Creating Type Aliases**:
    - Synonyms for each type. Note: Doesn't work for a `template` type.
    - Example: `std::vector<T>` is a class of types, where T is a placeholder. While 
    `std::vector<int>` is a type.
    - In `C++11`: Both of the below aliases are introduced using `using` syntax.
        - Type Alias: Name for another already declared type
        - Alias Template: Name for another already declared template
    - Example: mentioned in `example_aliases.cpp`.
    