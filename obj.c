                                                             C programming
---------------------------------------------------Declarations and Intializations---------------------------------------------------

1. fmod(x,y) calculate remainders for floating pt division (% used for integers only)
    6.68 is double, 6.68L is long double, 6.68f is float

2. 3 types of linkages:
    (I) External: global, non-static var and funs
    (ii) Internal: static var and funs with file scope
    (iii)Node: local var

3. special symbols allowed in var names in C : foo, Bar, BAZ, foo_bar, _foo42, _, QuUx.

4. By default real nums r treated as double.
    Primary data types: int, char, float, double, void
    Secondary or User-defined data types: arr, pointer, structure, union, enum.
    Compiler checks from left to right(x<y<z) 
    Note: Declaration never reserves any space, definition is like initialization, if we use ‘extern’ keyword means memory allocated is some other program(*)

5. when a ‘structure’ or ‘array’ elements is partially initialized remaining elements r initialized to ”zero”

Control instructions

1.  Bitwise operator: &
    Logical operator: &&,||,!

2. int x=3, float y=3.0 if(x==y)return 1; else return 0; - it will give o/p as 1

3. By default (0.78..,0.54..)these values r double, while condition checking not float values  eg: if float a=5.75 ,then 5.75>a it is correct bcz double is greater than float

4. The keyword ‘continue’ can’t be used in switch cases. We can use it in for, while, do while loop. There exits a switch statement, which has no case. For switch within this() it must be const expressions, but not float. Moreover there were no duplicate cases, if there is any thing like that then it must be "syntax error".

5. infinite loop --for(; ;){ }

6. In while loop must have conditional expression or it shows "Expression syntax error".

