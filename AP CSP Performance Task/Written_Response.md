### 3a

This program is created using Python to aid the planning of a balanced and nutritious diet. The user can choose different food in the dropdown lists on the left. After choosing a maximum of five food, and click a “calculate nutrition” button, the program would check if the diet of the user is nutritiously balanced. 

The video illustrate how users can form a meal with five kinds of food and how they will receive feedbacks based on the balance of nutrition of their meal. 

The input of user is to choose five kinds of food in the drop down box: Rice, beef, entrails, fried food and cabbage. The output of the program is the feedback of the diet: it contains too much fat and too little vitamins.



### 3b

[IMG]

The content of tips are stored in lists. Specifically, these data stored in the python list 'msg' as strings. Where the list is utilized:

[IMG]

Without such a list, the tips column would not be useable at all because the module can not iterate through discrete strings. One possible alternative to display different tips for users is to set up a number of separated display lines, but that would no doubt be much more messy and require more repetitive coding. 



### 3c

[IMG]

The Call:

[IMG]

This procedure helps to contribute to the overall functionality of the program by finding the nutritious value of the meal that presents in the largest amount. Since this process needs to be done every time a user creates a new diet and press the button, the procedure helps the overall efficiency of the program by having the code located in one location that the program repeatedly calls on. 

When a user presses a the color button, the procedure reads the final user input from the dropdown-boxes, in a list, to get the composition of the diet nutrition value. First the procedure would sum the whole list to check if it is all 0. If so, that means the input is not valid and the procedure would return immediately. Else the procedure would iterate through the entire list. When it encounters a nutrient with value larger than the biggest existing value (stored in the *maxVal* variable), the procedure would replace *maxVal* with the newly found largest value. At the same time, the according nutrient would be stored in the *maxNutri* variable. Finally, the procedure would return *MaxVal* and *MaxNutri* for later use of other procedures.



### 3d

The test cases are based on the conditions of what food combination is chosen, which is represented by the argument, *Rank*, a list. We would want to check the program for both input [0,0,0,0,0] (That happens when the user presses the button without choosing any food) and the input [2,3,1,2,2] (That happens with a diet of rice, beef, milk, nut, cabbage).

For the null input, the procedure would read from the arguments and, summing them up, find out that the user did not put in valid input. That would execute the portion of code that deals with null input and the procedure straightly return "Nothing" as a result. 

For the regular diet input, the procedure would read from the arguments. The procedure would find out the nutrient with the largest amount is protein. The procedure would then return this amount (3) and the corresponding nutrient name in string "protein".

