# Name Card Holder

About
----------------------
Assignment Project for SC1003(Introduction to Computational Thinking) using C Programming 
Nanyang Technological University 


Problem Definition
----------------------
The NTU Name Card Holder has a capacity of MAX (e.g., 5 for this program) name cards. You are required to write a NTU Name Card Holder Management Program. The program uses an array of MAX structures for the name card holder

Required following funtionalities:
----------------------
- listNameCards() ‐ The function requirements are given below:
  - The function prints the following message when it is executed: "listNameCards():"
  - It prints the content of each name card in the name card holder.
  - If the name card holder is empty, the function should display the message: "The name card holder is empty"
  
- addNameCard() ‐ The function requirements are given below:
  - The function prints the following message when it is executed: "addNameCard():"
  - It adds a new name card into the name card holder. Before and after this function call, the name card holder is an array of NameCard structures stored in ascending order according to the integer value of nameCardID.
  - After adding the new name card, the function should display the message: "The name card has been added successfully"
  - If the name card’s nameCardID has existed in the name card holder, the function should display the message: "The nameCardID has already existed". The program will then ask the user select a new option for execution. 
  - If name card holder is full before insertion, i.e., it is equal to the maximum capacity of MAX (e.g., 5), the function should display the message: "The name card holder is full" and no addition should be done.

- removeNameCard() ‐ The function requirements are given below:
  - The function prints the following message when it is executed: "removeNameCard():"
  - It removes the first appearance of the target person name of the name card from the name card holder.
  - The string matching between the target and person name of the name card stored in the name card holder should be done irregardless of the letter cases (upper case letter and lower case letter will be treated to be the same). As such, when doing target string matching, all characters in the string should be converted into lower case or upper case before matching.
  - Before and after this function call, the name card holder is an array of structures stored in ascending order according to the integer value of nameCardID.
  - After the name card is removed, the function should display the message: "The name card is removed" and the contents of the corresponding name card should be displayed. 
  - If the name card holder is empty before removal, the function should display the message: "The name card holder is empty" and no removal should be done.
  - If target person name does not exist in the name card holder, the function should display the error message: "The target person name is not in the name card holder"

- getNameCard() ‐ The function requirements are given below:
  - The function prints the following message when it is executed: "getNameCard():"
  - It finds the first appearance of the target person name of the name card stored in the name card holder, and prints the target name card information to the screen.
  - The target string matching should be done irregardless of the letter cases (uppercase letter and lower case letter will be treated to be the same).
  - If the target person name is found in the name card holder, the function should display the message: "The target person name is found" and display the contents of the corresponding name card.
  - If the target person name does not exist in the name card holder, the function should issue the message: "The target person name is not found"
  
  
  
Resources taught and used
------------------------
- Basic C Programming and Control Flow
- Functions and Pointers
- Arrays
- Character Strings
- Structures

  
Repository Description
----------------------


Kang Jun Hui Bryan (kang0121@e.ntu.edu.sg)

Jan 2022

This repository is submitted to Nanyang Techological University as part of a graded assignment for the course SC1003 (Introduction to Computational Thinking).


    
