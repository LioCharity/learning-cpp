This is about going through the data types provided in the modern c++ and the size of these types according to the machine where they run.
This explore as well the fixed size types and the const/constexpr
One interesting point is what happen when a function parameter is made const: it does 2 thing: It tells the person calling the function that the passed value won't be change and make sur the passed value is not changed.
