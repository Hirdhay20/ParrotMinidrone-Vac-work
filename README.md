 # RedDetection-Vac-work
This project aimed to explore the different hardware and control system capabilities of the Parrot Mambo Mini-drone. Within this project we developed our undertsnading of Vision-based Autonomous Control systems via the utilisation of the Built in Parrot Mambo Mini-drone Simulink package. This further led to the development of a technique to detect for objets in real-time and send a notification alerting the user.

## Table-of-Contents
* [Task-To-Achieve](#Task-To-Achieve)
* [Required-Software](#Required-Software)
* [How-it-works](#How-it-works)
  - [Path-Planning-Set-Up](#Path-Planning-Set-Up)
  - [Simulation-Set-Up](#Simulation-Set-Up)
  - [Virtual-World-Editor](#Virtual-World-Editor)
  - [ThingSpeak](#ThingSpeak)
  - [Email-Transmission](#Email-Transmission)
* [Resources](#Resources)
  

## Required-Software
* Required Software:
  - MATLAB
  - Simulink
  - Stateflow
  - Image Processing


## Task-To-Achieve
* The drone is to hover at a height of 1 meter.
* It is then tasked to survey a 9m^2 area for a red object while maintaining a height of 1 meter.
* Once the red object is detected the drone is to hover above set object for 10 seconds and simultaneously send an email to the user indicating an object has been detected.
* After detection the drone is to return back to its starting point.

## How-it-works
Launch the Parrot Mambo Mini-drone competition Simulink package utilising the file above (parrotMinidroneCompetition) which can be accessed within the matlab interface. 
### Path-Planning-Set-Up
* After opening the file navigate to Simulink window.
* The path planning is found within the control system block as a stateflow, which can be obtained from the flight control system block adopting an orange colour.
* The path plan uses an iterative approach cycling through 14 points within a 14 by 2 matrix of waypoints containing X and Y coordinates for the drone to follow.
* The waypoints file above is to be imported to the workspace as a Numeric Matrix and is then to be assigned to the variable " U ".
* Then in the command window put U = U*1.17;
 ![Waypoints](https://github.com/Hirdhay20/ParrotMinidrone-Vac-work/blob/main/Screenshot%202025-07-04%20102342.png)
  
### Simulation-Set-Up

@@ -42,46 +43,47 @@
* A new window will open with a corrdinate system, proceed to load in the waypoints and a track should be built on the right.
* Enter a desired Hex colour that's not red and then select "Update Virtual World"
* Once all the above is done it should show in the  Virtual World.
* In the command window type TFinal = 200; to change the simulation run time. 
 ![Virtual World](https://github.com/Hirdhay20/ParrotMinidrone-Vac-work/blob/main/Screenshot%202025-07-04%20102615.png)
### Virtual-World-Editor
* On the Virtual World pane select the icon to the left of the camera icon.
* Select edit once the editor window opens and edit the translation coordinates of the cage so it doesn't intefere with the simulation.
* There should be a pre-made heading called "Blue Marker"
  - You can edit it's colour by navigating to the subsection of the heading select "children" -> "Shape" -> "Appearance" -> "Material".
  - Here you can edit the parameters regarding the colour gradients creating the desired shade of red you require to test.
### ThingSpeak
* You will need to setup a ThingSpeak Channel with a singular field to act as a trigger for the email refer to the video on how to setup a ThingSpeak channel:
  
  https://www.bing.com/videos/riverview/relatedvideo?&q=thingspeak+set+up+guide&&mid=9001F561A9BC9A7367069001F561A9BC9A736706&&FORM=VRDGAR
* Within the image processing block there will be a ThingSpeak block. Double click the block to configure it.
* Enter your ThingSpeak Channel Details:
  - ChannelID: The numeric ID of your ThingSpeak channel.
  - Write API Key: Found undr your channel's API Keys tab (must be a Write Key, not Read Key)
* Set your sample time to 0.2 and the maximum missed ticks to 1000.
 ![ThingSpeak](https://github.com/Hirdhay20/ParrotMinidrone-Vac-work/blob/main/images/Screenshot%202025-07-04%20105029.png)

### Email-Transmission
#### Scripts in use 
* checkAndSend3.m
This script is used to detect for a ThingSpeak field change. Once the change is initiated by the presence of a red object a screenshot is taken of the RGB viewer (make sure to full screen the viewer so it opens on launch). This screenshot is saved to the computer as a variable and is used as the input for the next script.
* sendRedAlert.m
This script has all the email preferences and sends the email with the attached image obtained from the previous script. 

#### Setup
* Start Function
  - Select "Model Settings" and click Model Properties.
  - Locate the Callbacks tab and enter the following code in the start function and apply.
    
    ![Function](https://github.com/Hirdhay20/ParrotMinidrone-Vac-work/blob/main/images/Screenshot%202025-07-04%20101237.png)

* External Code Requirements
  - Open the scripts with the names checkAndSend3 and sendRedAlert.
  - Enter the necessary ThingSpeak data into the checkAndSend3 script.
  - In the sendRedAlert script enter your email address for "Sender" and your app password for "Password".
  - You can further edit the sendmail function to have a custom subject and body.
## Resources
* Gmail App password setup : https://proximatesolutions.com/how-to-set-up-smtp-using-google-app-passwords/
