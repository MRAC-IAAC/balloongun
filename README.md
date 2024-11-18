# BalloonGun
## Index
  - [Overview](#overview) 
  - [Getting Started](#getting-started)
  - [Demo](#demo)
  - [Authors](#authors)

## MRAC01(24/25): Hardware_01 - BalloonGun  
The Hardware Module 01 is intended to give an overview of the state of the art in robotic actuation, discussing the practical implementation of such actuators, and brainstorm how these actuators and the robotic arms could bring new levels of versatility, agility and efficiency to the production and construction processes.

Over the course of three weeks, each group is tasked to create an transparent acrylic end-effector tool to be installed on the ABB arm robot using the actuators shown within the intro lecture. Concurrently, the 2nd Studio Module invites these groups to employ the end effector and ABB robotic arm mechanism to develop a “spill” of acrylic pigment onto canvas, exploring some aspect of the properties of the developed mechanism as an evolution from a more manual task.

At the courses’ conclusion, skills developed include: 
Programming using the Python or C# language
Using of microcontrollers
Controlling actuators such as motors, relays, etc.
Designing and fabricating an end effector tool to communicate between a robot arm and custom-made end effector
Programming synchronized actions between robot and the tool
Programming movements by a robotic arm
Arduino and laser cutting
Analysis of unpredicted results in design


## Overview
In attempting to make a “spill” composition, our group focused on the mark made when a balloon full of liquid is popped. Typically, a manually popped balloon will a highly-variable, chaotic-looking splatter. With the precision of Arduino end-effector and ABB robotic arm, variables like pressure may be controlled to yield a more consistent outcome for each popped balloon. The following study examines a series of semi-automated splatters to seek underlying order in the otherwise chaotic marks.

Variable Tested:
* Pressure / Volume of balloon
* Height of balloon
* Amount + liquidity of pigment solution

Variables Measured: 
* Splatter Size
* Diameter
* Initial Data + Observations

## Getting Started

### Prerequisites
* Arduino
* Rhino + Grashopper

### Depencies
The project's dependencies include:
* Arduino - end-effector controll
* Rhino + Grashopper - robotic arm controll


### Fabrication & Run
With initial observations, we sought to develop a tool that may better control the pressure in the balloon and where the balloon is popped as well as the balloon height.
Design development integrated the air supply to the the acrylic housing, and the housing to the ABB robotic arm mount.

Incorporation of the Arduino System.

An elbow is added to the end effector to properly orient it to the robot arm and the canvas. Space is created to accommodate radially symmetrical solenoids intended to activate in unison to ensure popping of the balloon with minimum xy sway. A rigid frame is added to contain variability in the balloon’s inflation shape and further brace the balloon from sway.

Toolpath Concept:
The robotic arm toolpath is intended to ensure consistency in the heights of each balloon pop. A grid is configured over the canvas with pre-programmed heights assigned to each x-y coordinate. Using Grasshopper software, the robot is programmed to begin and return to the “homing position” between each balloon pop to have the next balloon filled with pigment solution manually loaded off canvas. Three heights were used in 9 locations to ensure comparisons between same and variables heights.

* Develop a grashopper tool path for the robotic arm movement
* Open the arduino file and adjust the balloon inflating time if needed
* Lazercut and fabricate the device out of acrylic
* Do the wiring according to the protocol
* Enjoy yout masterpiece :)

## Demo
The project can:
* Mannually infill the balloon with paint
* Robotic arm brings the balloons to the one of the points from grashopper tool path
* AirPump inflates the balloons for 7 seconds
* Solenoids with needles attached poke the balloon

The results of the project:
* painting made by human-robot collaboration
* research about how the pressure, height and the amount of paint can effect the results of the prints on the canvas

The project can be launched with the following components:
* grashopper toolpath for the movement of robotic arm
* arduino-based end-effector
* arduino code

## Outcomes + Observations.

Prior to completing the final trials, some unforeseen variables were introduced to the group’s investigation, and adjustments were made to the pseudo code to ensure effective “splatter” results. .

Unforeseen Variables. 

Balloon shape changed drastically depending on the source of the pressure (ABB or air pump) and even more so depending on the liquidity and amount of the paint solution. Based on the geometry of the design (length of the needles in relation to the balloon shape), the success of popping the balloon became unpredictable.  Controlling the geometry of the balloon yield obstructions in the spill pattern.

After repeated trials, the solenoids succumbed to the voltage, ultimately, burning out and requiring the end effector to be modified with longer, more angular needle configuration.
Changing the balloon size enabled more capacity for paint solution to be used.
Using the ABB air pressure was much more powerful than the Arduino air pump, creating more of a mist than a spill or splatter.
Adding water to the solution enables more of a splatter than a mist, however,  upon impact, the canvas absorbed the moisture from the more watery solution than the trials done with paper, creating a less defined splatter and obscuring the initial results. 
Variables Tested.

Volume of balloon.
Height of balloon when popped.
Amount + liquidity of pigment solution

## Results Measured.

Splatter Size / Diameter
Conclusion.

In experimenting with new tools and mediums, the group learned the complexity of the anatomy of the machine and its vulnerability to both intended and unforeseen variables. With continued practice and interaction with the hardware design and Arduino, the group intends to increase the ability to control variables and outcomes, reducing chaos for chaotic processes.


## Authors
  - [sashakraeva](https://github.com/sashakraeva) - teammember
  - [LaurenD66](https://github.com/LaurenD66) - teammember
  - [Mauweberla](https://github.com/Mauweberla) - teammember
  - [leeeeeeeeeerichileeeeeeeeee](https://github.com/leeeeeeeeeerichileeeeeeeeee) - teammember

<!--  DO NOT REMOVE
-->
#### Acknowledgements

- Creation of GitHub template: [Marita Georganta](https://www.linkedin.com/in/marita-georganta/) - Robotic Sensing Expert
- Creation of MRAC-IAAC GitHub Structure: [Huanyu Li](https://www.linkedin.com/in/huanyu-li-457590268/) - Robotic Researcher


