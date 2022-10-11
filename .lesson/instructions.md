# Instructions  
The _Fibonacci Sequence_ is an important mathematical sequence that can be found frequently in nature, and can be used in computing simualtions. A description of it can be found [here](https://www.mathsisfun.com/numbers/fibonacci-sequence.html).

The rule for generating the number sequence is that "the next number is found by adding up the two numbers before". The sequence starts with a 0 and a 1. So the first few numbers are: 

`0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...`

One really interesting aspect of the sequnce is that the ratio of two successive numbers is very close to the _Golden Ratio_. Here is a fun video that explains the [Golden Ratio](https://www.youtube.com/watch?v=sj8Sg8qnjOg) well.
 
  ## Steps
  1. Run the code and check the sequence generated.
  2. Notice the use of a `do while(...)` loop to maintain an infinite loop - at least until the user types `n` they do not want to continue. 
  3. Notice also, the `for` loop inside the `do while` loop, which loops 5 times.
  4. Change the code so it loops 10 times.
  5. Note that `num1` and `num2` are used to store the current consecutive numbers that are used to calculate the next number in the sequence.
  6. Note also that they are initially set to 0, and 1.
  7. Why is this line executed before the `do while loop`? If you can't work it out in your head, try commenting this line out and observe the difference in the programs output.
     ```C++
     cout << num1 << " " << num2 << " ";
     ```
  8. Can you rename the variables to more suitable names?
  9. Why is `num2Temp` needed? Bear in mind that the number sequence is not stored in an array or similar, but is simply printed to the console.
  10. Add two new variables (see below) and change their initial to random (small) integer values to other values and observe the output.
```C++
  int num1 = 0, num2 = 1;
  int num3 = 3, num4 = 5;
```
  11. Print out the original sequence alongside the new sequence by adding the following two snippets of code in the appropriate position, and add `<< endl` where needed.
```C++
    cout << num3 + num4 << " ";
    
    int num4Temp = num4;
      num4 = num3 + num4;
      num3 = num4Temp;  
```
12. If the two sequences could be plotted, would the new type of sequence still generate a spiral? How could you find out?
