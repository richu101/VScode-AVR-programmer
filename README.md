# VScode-AVR-programme


 How to program AVR microcontrollers using VS code 

 Here i am using a raspberry pi

Yes i know we can program avr using raspberry pi using arduino IDE or arduino cli . Using arduino platform i feel like spoon feeding .  


------------

**Hardware requirements**
----
- Any AVR microcontroller board
- USB ASP programmer

**Software requirements**
---

- Visual Studio code
- avr-gcc
- avrdude
- c/c++ extentation

##  Let's start programming  

- **Open VS code create a new work folder**

- **create a** **.** **c or c++ file write your embeded program in it and save**

- **copy the Make file and paste it in your work folder**

- **press ctrl + shift +p to open command palette**

- **In command palette search for c/c++:Edit Configiratation(JSON) and select that** 

    ## **c/c++:Edit Configiratation(JSON)**

~~~
 This will create a folder named .vscode in your work folder and in that a json file named c_cpp_properties.json 
 
By default the c_cpp_properties.json contain the path to the gcc compailer but for avr micro controllers we need to compail using avr-gcc so that we need to add the path to the avr-gcc 

~~~


**"compilerPath": " **~~/usr/bin/avr-gcc~~** "**, - // paste your avr-gcc path here 

```
If you use any additational liberaries you need to add the path to that librarye's 
```
```
"includePath": [
                "${workspaceFolder}/**",
                "/usr/lib/avr/include"
                // here you need to include the path to all the liberaries that u used 
            ],
```
After adding the path to the liberaries dont forget to put  **,**  in the end eg: "/usr/lib/avr/include" , "/usr/lib/avr/serial" , "/usr/lib/avr/uart"

<u> Except includepath and compailer path rest content you can copy from my c_cpp_properties.json </u>

- **Copy the tasks.json file and paste it into your .vscode**

- **Make some edit in the make file**

``` 
Make file compiles the c code and convert it into hex file.
Then upload the hex file to the AVR Microcontroller using AVRDUDE 

```
## **Makefile edit**

-----------



**MAIN_APP = ~~blink_test~~**  
# here you need to add the name of your .c file

**MAIN_HEX_PATH = /home/pi/Documents/intrrepts/$(MAIN_APP).hex** 
 
Here you need to add the the locatation where you need to create the hex file

**LFLAGS = -Os -mmcu=~~atmega328p~~ -o** 
 Here you need to give the name of the mcu (micro controller)that you are using

**DUDEFLAGS += ~~/dev/ttyAMA0~~** 
Here you need to add port name in which you connect the usbasp programmer
