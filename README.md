# Mini_Project
# SDLC Activity Based Learning
![Banner](https://github.com/Prapti312/Mini_Project/blob/main/4_TestPlan/banner.png)



Build | Code Quality | Git Inspector
|---------|------------|-------------
[![C/C++ CI](https://github.com/Prapti312/Mini_Project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Prapti312/Mini_Project/actions/workflows/c-cpp.yml)|[![Static Check](https://github.com/Prapti312/Mini_Project/actions/workflows/c-cppcheck.yml/badge.svg)](https://github.com/Prapti312/Mini_Project/actions/workflows/c-cppcheck.yml)  |  [![git inspector CI](https://github.com/Prapti312/Mini_Project/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Prapti312/Mini_Project/actions/workflows/gitinspector.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Of Test Cases|No Of Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`261528` | Prapti Bhajiyawala  | System convert One Base Number To Another Base Number e.g. 1) Binary to Decimal 2) Binary to Octal 3) Binary to Hexadecimal 4) Decimal to Binary 5) Decimal to Octal 6) Decimal to Hexadecimal| 4   | 2  |12  |12    
   
| Feature Id | Feature |
| -----------|---------|
|F_01| Option to Select Required Conversion Type |
|F_02| Option to Choose whether User want to Continue or Not? |
|F_03| Option to Choose Binary to Decimal conversion |
|F_04| Option to Choose Binary to Octal conversion |
|F_05| Option to Choose Binary to Hexadecimal conversion |
|F_06| Option to Choose Decimal to Binary conversion |
|F_07| Option to Choose Decimal to Octal conversion  |
|F_08| Option to Choose Decimal to Hexadecimal conversion  |
|F_09| To check that User Input is Valid or Not? |

## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Returning char array for Hexadecimal Values Cause Memory Overflow | Use Dynemically Allocated Memory for Char Pointer 
|2. | After Execution of One Time Operation there is No Way to Continue  | Use Loop for Continuation of Program Execution|
|3. | Program is Returning Garbage Values After Every Char Array | Added NULL Character at The End of Each Char Array Manually


## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)
