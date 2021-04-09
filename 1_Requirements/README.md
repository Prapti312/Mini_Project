# Requirements
## Introduction
* We communicate with each other in a particular language made of letters or words. We normally type letters or words through keyboard of the computer, but computer does not understand the words and letters. Rather, those words and letters are translated into numbers. This means that computers understand only numbers. We know the decimal (base 10) system, and are very comfortable with performing operations using this system, it is also important for us to understand that the decimal system is not the only system in the world. By studying other number systems such as binary (base 2), octal (base 8), hexadecimal (base 16) and so forth, we will gain a better understanding of how number systems work in general. Number systems are the technique to represent numbers in the computer system architecture, every value that you are saving or getting into/from computer memory has a defined number system. As Computer architecture supports following number systems so we need to study them and also need to know the conversion technique between them.
* Binary Number System
* Decimal Number System
* Octal Number System
* Hexadecimal Number System
## Research
### Number System Conversion Software Features and Benefits
Main aim of Number System Conversion is to convert one base number system to another base number system. This system ask user their choices of conversion , takes User input, verify User input and provide output .
## Benefits
#### 1) Binary Number System
* Binary is found in computer technology. All computer language and programming is based on the 2-digit number system used in digital encoding (is the process of taking data and representing it with discreet bits of information).
* The most common application for the binary number system can be found in computer technology. All computer language and programming is based on the 2-digit number system used in digital encoding. Digital encoding is the process of taking data and representing it with discreet bits of information. These discreet bits consist of the 0s and 1s of the binary system.
#### 2) Octal number system
* Octal was used widely in the Electronics and Computer Industry, as although digital electronics is based on gates with only two states and is therefore fundamentally binary, binary numbers can quickly become long and hard to transcribe without errors. Their octal equivalents are much shorter and easier to remember, and have a straight-forward way of conversion to/from binary.
* Unix file system permissions have three sets (user, group, others) of three bit permissions (read, write, execute), which is naturally represented in octal.
#### 3) Decimal number system
* We use decimals every day, while dealing with money, weight, length etc. Decimal numbers are used in situations where more precision is required, than the whole numbers can provide. For example, when we calculate our weight on the weighing machine, we do not always find the weight equal to a whole number on the scale.
#### 4) Hexadecimal number system
* To define locations in memory.
* To define colours on web pages.
* To represent Media Access Control (MAC) addresses.
* To display error messages. Hexadecimals are used to define the memory location of the error.  This is useful for programmers in finding and fixing errors.
## Cost
* Memory used in Source Code
## Defining Our System
### Explanation:
* Number System Conversion Application have few inbuilt features like:
    * Binary to Decimal Converter
    * Binary to Octal Converter
    * Binary to Hexadecimal Converter
    * Decimal to Binary Converter
    * Decimal to Octal Converter
    * Decimal to Hexadecimal Converter
*  in future sprints new features could be added like Octal_to_Binary,Octal_to_Decimal,Octal_to_Hexadecimal etc.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/Prapti312/Mini_Project/blob/main/1_Requirements/swot_analysis.jpg)

# 4W&#39;s and 1&#39;H

## Who:
* Memory Managment System (Define Location) , Define Colours on Webpage , Microprocessor , Digital Electronics Gate Input , Precision output Systems 

## What:
* During Memory Writting it becomes a tedious task to calculate every address Manualy.In digital hardware, the natural numbering system is binary (base 2). but expressing anything in binary causes way too many bits to be used, so , it's not practical. hexadecimal allows us to use 4x fewer bits, so, it is very useful. besides no processor uses anything less than 4bits, so, hexadecimal is the most common when expressing numbers in a way that is most suitable for digital hardware.

## When:
* Generally, a computer uses the binary number system, but humans will use the hexadecimal number system, as it is easier to understand. For this reason, the number system conversion requirment occours.

## Where:
* This problem is expected to surface in all colleges of India.

## How
* Many of the College students use this for Microprocessors Memory Address Management, web page development(Colour Choice) , Inputs of the Logic gates.  
# Detail requirements
## High Level Requirements: 
| ID | Description | Category | 
| ----- | ----- | ------- | 
| HR01 | User shall be able to choose CHOICE of CONVERSION | Techincal | 
| HR02 | User shall be able DECIDE whether he wants to continue or not?| Techincal | 

##  Low level Requirements: 
| ID | Description | HLR ID | 
| ------ | --------- | ------ | 
| LR01 | User shall be able to convert Binary to Decimal. | HR01 | 
| LR02 | User shall be able to convert Binary to Octal. | HR01 | 
| LR03 | User shall be able to convert Binary to Hexadecimal.| HR01 |  
| LR04 | User shall be able to convert Decimal to Binary. | HR01 | 
| LR05 | User shall be able to convert Decimal to Octal. | HR01 |
| LR06 | User shall be able to convert Decimal to Hexadecimal. | HR01 |
| LR07 | System should be able to verify user input whether it is valid or not? |  HR01 |
| LR08 | System should be able to continue/stop according to user's Choice. | HR02 |
