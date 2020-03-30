Q1: What are the basic modules of a C program called?
A1: Does are functions.

Q8: Consider the following program
```
int main(void) {
    a = 5;
    b = 2;  // line 7
    b = a;  // line 8
    a = b;  // line 9
    printf("%d %d\n", a, b);

    return 0;
}
```
What is the program state after line 7? Line 8? Line 9?


A8: After line 7,  a  is 5 and  b  is 2. After line 8, both  a  and  b  are 5. After line 9, both  a  and b  are still 5. (Note that  a  can’t be 2 because by the time you say  a = b;,  b  has already been changed to 5.)   