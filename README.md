# ParrotMamboMini-drone-Vac-work
This project aimed to explore the different hardware and control system capabilities of the Parrot Mambo Mini-drone. Within this project we developed our undertsnading of Vision-based Autonomous Control systems via the ustilization of the Built in Parrot Mambo Mini-drone Simulink package. This further led to the development of a technique to detect for objets in real-time and send a notifcation alerting the user.

## Table-of-Contents
-[Task-To-Achieve](#Task-To-Achieve)

## Task-To-Achieve
* The drone is to hover at a height of 1 meter.
* It is then tasked to survey a 9m^2 area for a red object while maintaing a height of 1 meter.
* Once the red object is detected the drone is to hover above set object for 10 seconds and simultaneously send an email to the user indicating an object has been detected.
* After detection the drone is to return back to its starting point.

## How-it-works
Launch the Parrot Mambo Mini-drone competition Simulink package utilising the file above (parrotMinidroneCompetition) which can be accessed within the matlab interface. 
### Path-Planning-Set-Up
* After opening the file navigate to Simulink window.
* The path planning is found within the control system block as a stateflow, which can be obtained from the flight control system block abdopting an orange colour.
* The path plan uses an iterative approach cycling through 14 points within a 14 by 2 matrix of waypoints containing X and Y coordinates for the drone to follow.
* The waypoints file above is to be imported to the workspace as a Numeric Matrix and is then to be assigned to the variable " U ".
 ![Waypoints]()
  
### Simulation-Set-Up
* For the set up of the simultion navigate to the workspace window.
* Select Project Shortcuts in the tool bar and open track builder.
* A new window will open with a corrdinate system, proceed to load in the waypoints and a track should be built on the right.
* Enter a desired Hex colour that's not red and then select "Update Virtual World"
* Once all the above is done it should show in the  Virtual World.
### Virtual-World-Editor
* On the Virtual World pane select the icon to the left of the camera icon.
* Select edit once the editor window opens and edit the translation coordinates of the cage so it doesn't intefere with the simulation.
* There should be a pre-made heading called "Blue Marker"
  - You can edit it's colour by navigating to the subsection of the heading select "children" -> "Shape" -> "Appearance" -> "Material".
  - Here you can edit the parameters regarding the colour gradients creating the desired shade of red you require to test.
### Email-Transmission
The email sending technique requires the editing of the model properties this can be found in Modelling within the tool bar. 
* Start Function
  - Select "Model Settings" and click Model Properties.
  - locate the Callbacks tab and enter the following code in the start function and apply.
    
    ![Function](https://github.com/Hirdhay20/ParrotMinidrone-Vac-work/blob/main/images/Screenshot%202025-07-04%20101237.png)
    
  


 
