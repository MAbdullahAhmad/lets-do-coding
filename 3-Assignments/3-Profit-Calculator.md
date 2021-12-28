# Proit Calculator

    Difficulity: Medium
    Genre: Code & Logic

Write a Profit Calculator. That will work as follow:
- Input GST Rate (Government Sales Text in Percentage)
- Input Cost & Profit Rate of each product one by one until user enters 0 as cost.
- For each product, profit is calculated as : `profit = (profit * cost) - (gst_rate * cost)`.
- We'll display summerized profit at end

## Sample Result

<code>
  Profit Calculator<br>
  _________________
  <br>
  <br>

  Enter GST (%age) : <b>2.5</b><br>
  <br>

  Enter Cost: <b>100</b><br>
  Enter Profit Rate: <b>20</b><br>

  Enter Cost: <b>210</b><br>
  Enter Profit Rate: <b>50</b><br>

  Enter Cost: <b>1000</b><br>
  Enter Profit Rate: <b>5</b><br>

  <br>
  Profit:
  <!-- (100 * 20 / 100) - (100  * 2.5 / 100) = 17.5 -->
  <!-- (210 * 50 / 100) - (210  * 2.5 / 100) = 99.75 -->
  <!-- (1000 * 5 / 100) - (1000 * 2.5 / 100) = 25.0 -->
  <!-- 17.5 + 99.75 + 25.0 = 142.25 --> 
  142.25
</code>
