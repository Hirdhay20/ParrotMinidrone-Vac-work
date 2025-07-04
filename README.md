# ParrotMamboMini-drone-Vac-work
This project aimed to explore the different hardware and control system capabilities of the Parrot Mambo Mini-drone. Within this project we developed our undertsnading of Vision-based Autonomous Control systems via the ustilization of the Built in Parrot Mambo Mini-drone Simulink package. This further led to the development of a technique to detect for objets in real-time and send a notifcation alerting the user.

## Table-of-Contents
-[Task-To-Achieve](#Task-To-Achieve)

## Task-To-Achieve
* The drone is to hover at a height of 1 meter.
* It is then tasked to survey a 9m^2 area for a red object while maintaing a height of 1 meter.
* Once the red object is detected the drone is to hover above set object for 10 seconds and simultaneously send an email to the user indicating an object has been detected.
* After detection the drone is to return back to its starting point.

## How it works
Launch the Parrot Mambo Mini-drone competition Simulink package utilising the file above (parrotMinidroneCompetition) which can be accessed within the matlab interface. 
### Path Planning
* Within the file the path planning is found within the control system block which can be obtained from the flight control system block which is orange in colour.
* The path plan uses an iterative approach cycling through 14 points within a 14 by 2 matrix of waypoints containing X and Y coordinates for the drone to follow.
* 
 
