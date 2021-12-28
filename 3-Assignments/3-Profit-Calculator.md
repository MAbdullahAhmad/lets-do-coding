# Proit Calculator

    Difficulity: Medium
    Genre: Code & Logic

Write a Profit Calculator. That will work as follow:
- Input GST Rate (Government Sales Text in Percentage)
- Input Cost & Profit Rate of each product one by one until user enters 0 as cost.
- For each product, profit is calculated as : `profit = (profit * cost) - (gst_rate * cost)`.
- We'll display summerized profit at end

## Sample Result

    Profit Calculator
    _________________

    Enter GST (%age): 2.5

    Enter Cost: 100
    Enter Profit Rate: 20

    Enter Cost: 210
    Enter Profit Rate: 50

    Enter Cost: 1000
    Enter Profit Rate: 5

    Profit: 142.25
<!-- (100 * 20 / 100) - (100  * 2.5 / 100) = 17.5 -->
<!-- (210 * 50 / 100) - (210  * 2.5 / 100) = 99.75 -->
<!-- (1000 * 5 / 100) - (1000 * 2.5 / 100) = 25.0 -->
<!-- 17.5 + 99.75 + 25.0 = 142.25 --> 
