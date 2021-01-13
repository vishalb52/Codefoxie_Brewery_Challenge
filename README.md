# Codefoxie_Brewery_Challenge
Console application on Brewery Code Challenge.


Instructions to run Console Application(test.exe):

1)Download all and move all three files in one separate folder i.e. Beers.txt , test.cpp, test.exe
2)Open command prompt on your windows.
3)Go to the file directory(cd folder)
4)type test.exe

The .exe file will run showing the ALERTS and specific beer at sequential time that go out of range.
If you are a linux user:
1)Open Beer.txt and test.cpp files in Visual studio code(Vscode)
2)Run the code the output will be generated.

To make it user friendly you can make and insert your values in Beers.txt file, save it run the code and thus the appropriate output will be shown.



a)Highlights of my logic/code writing style:
With minimal effort and making things less complex and effective i wrote my code:
 1)Technique used - File handling i.e. fstream, ifstream objects (reading the files from the txt file) inputing in the code and thus writing it for the execution of program.
 2)ADT used : Arrays(to store continous current temperature of Beers)
 3)Less space and time complex code . The time and space complexity is O(n).
 4)ALERT is given whenever the temperature is out of range, if not "Temperature is in range" message is displayed.
 
 b)List of assumptions : 
 1)Beer6 type temperature range was not given so the mean of first five intial and final values were taken and considered as temperature range for it.
 2)Considering that containers were not open.
 3)Considering that with increasing time the truck's inside temperature increases and thus showing the alerts for the beers.(note: at some specific time truck is not moving).
 
 c)If given 2 months time and assistance:
1)I could have used Javascript to code the solution and run the alerts and messages in a web page(DARPA that can be found in my Github project category).
2)IOT(Internet of things) can also be used to make this project, where we could be using sensors and Web application to notify the Beer(or any) Organization and Driver(Buz).
