0-9 # TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check If Linked List is created or not |(1)Binary To Decimal (2)Binary to Octal (3)Binary to Hexadecimal (4)Decimal to Binary (5)Decimal to Octal (6)Decimal to Hexadecimal|Calling of the  Selected Functiion |Calling of the  Selected Functiion |Requirement based |
|  H_02       |Check If User want to Continue or not|If Yes then Select '1' else select '0'|if '1' then __Continue__ else __Stop__|if '1' then __Continue__ else __Stop__|Scenario based|

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|--------------|-------------|----------------|------------------|
|  L_01       |Binary to Decimal Conversion--> Check If user input is valid or not|int value in '1' or '0' format|int value Decimal(0-9)|Decimal value(0-9)|Requirement based |
|  L_02       |Binary to Octal Conversion--> Check If user input is valid or not|int value in '1' or '0' format|int value Octal(0-7)|Octal value(0-7)|Requirement based |
|  L_03       |Binary to Hexadecimal Conversion--> Check If user input is valid or not|int value in '1' or '0' format|int value Hexadecimal(0-9 & A-F)|Hexadecimal value(0-9 & A-F)|Requirement based |
|  L_04       |Decimal to Binary Conversion--> Check If user input is valid or not|int value in (0-9)|int value in '1' or '0' format|value in '1' or '0'format|Requirement based|
|  L_05       |Decimal to Octal Conversion--> Check If user input is valid or not|int value in (0-9)|int value in (0-7)|value in (0-7) format|Requirement based|
|  L_06       |Decimal to Hexadecimal Conversion--> Check If user input is valid or not|int value in (0-9)| value in (0-9 & A-F)format| value in (0-9 & A-F)format|Requirement based|
