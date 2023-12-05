# Human Factors
For Final Project Submission at TXST, for Human Factors of Computing Systems

For Juypter Notebook analysis, the user must install these python libraries- pandas, numpy, seaborn, sk-learn (optional).
This python code will import from the included csv files in the data folder. These can be modified or added to as necessary for future uses.
This code works by creating a dataframe, and selecting features of it to plot on a graph. These libraries translate well to machine learning for complex problems (here's where you could use sk-learn).
Juypter Notebook allows for 'markdown' boxes for the programmer to leave comments, in which I have documented my reasoning behind the code I have written, and how it works.

In order to compile Arduino code we should install Arduino IDE and download a library
The easiest way is to open the app, click on the Library icon, and type "LiquidCrystal_I2C.h" in the filter
The second way to install the library is to find it on their website or other sources, download and manually drag it to the Arduino/libraries folder

If none of this worked, that actually happened to me
We should preinstall C++, VS code and find the extensions WSL and "PlatformIO IDE"
Here's the link https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide 
After that, we need to open a new project, assign what type of board used and find the library on their page in "Libraries"
At the bottom we can we see a check mark and arrow
Click on these and it will push the code into the board

To get the data points we used the CoolTerm app and connected it to the used USB port to read the data from the Arduino
