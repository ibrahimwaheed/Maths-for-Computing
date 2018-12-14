# Maths-for-Computing
### 1A
A small local catering company provides hot dog served in buns at local events. The owner has to order the hot dogs and the buns and wants to ensure that however many are ordered, there are the same number of hot dogs and buns. The hot dogs usually come in packages of 8 although this can vary depending on the supplier." "The buns usually come in packages of 12 but like the hot dogs this can vary.
The owner would like an app that will determine the appropriate number of number of packages of hot dogs and buns to order given:
- A specified minimum number of servings that must be catered for and
- The number of items per package if different from usual.

[Click here to be redirected to the source code](https://github.com/ibrahimwaheed/Maths-for-Computing/blob/master/LCM%20HCF.cpp)
[Click here to be able to download the .exe](https://github.com/ibrahimwaheed/Maths-for-Computing/blob/master/LCM%20HCF.exe)
### 1B
At weekends there are often two events. The owner packs the buns into plastic containers. Each container has the same number of buns. If 288 buns are needed for one event and 660 buns are needed for another, determine the maximum number of buns per container so that a whole number of containers can be taken to each event.

{Use Euclid’s Algorithm for find the HCF}

You must show all the steps taken.
660 = 2(288) + 84
288 = 3(84) + 36
84 = 2(36) + 12
36 = 3(12) + 0

This show that the HCF of 660 and 288 will be 12 since that is the last number before the remainder had reached 0.

### 2A
You have decided to save some money during the six-week holiday. You save 1p on the first day, 2p on the second day, 3p on the third day and so on. How much will you have at the end of the holiday (42 days)?

The arithmetic sequence formula that needs to be used in order to figure the problem out is shown below.

![](https://raw.githubusercontent.com/ibrahimwaheed/Maths-for-Computing/master/Images/Formula.gif)

We then need to substitute the required numbers into the formula in order to determine the results in this it would be:
- n = 42 (due to it being number of terms we need to calculate)
- a = 1(as it is the frist number in the series)

Which means the formula looks like the following:

![](https://raw.githubusercontent.com/ibrahimwaheed/Maths-for-Computing/master/Images/Equation.gif)

With this established the calculation can be carried out in order to get the result 903, by then converting into terms of money you would have £9.03 at the end of your holiday.
### 2B
A friend of yours runs a charity marathon. He manages to run the first mile in 6 minutes but takes 5% longer for each subsequent mile of the 26-mile race. How long does it take him to complete the race? Give your answer to the nearest second.
(Show all your workings)

The equation below is what is used to figure out how long it took him to finish the race.
![](https://raw.githubusercontent.com/ibrahimwaheed/Maths-for-Computing/master/Images/CodeCogsEqn.gif)
Now that we have this we can find what needs to be substituted in to the equation to figure out the result.
n = 26
r = 1.05
a = 6
Now that this has been established these are then put into the equation so that it looks like this:

![](https://raw.githubusercontent.com/ibrahimwaheed/Maths-for-Computing/master/Images/CodeCogsEqn%20(1).gif)
The answer that we get from this equation is 306.68 however this is recorded in minutes while the brief asks for it to be to the nearest second, to do this we need to do 306.68 * 60 in order to get 18400.84.
This is rounded up to get the answer of 18401 seconds.

