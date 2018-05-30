# WalkingWithZombies
My Computer Science final year project at the University of Leeds - walking with zombies in virtual reality using the HTC Vive headset and Unreal Engine 4

This project is created in Unreal Engine 4, version 4.19

## Setup

In order to run this project, Unreal Engine 4 (UE4) must be installed. The version used to develop this project is 4.19.0 – compatibility for earlier or later installations is not guaranteed.

Once UE4 is installed, clone this repository (`git@github.com:MowLiao/WalkingWithZombies.git`) to download the project files to your computer.

## Run

With UE4 installed, your computer should be able to open .uproject files. Navigate to the directory of the cloned project and open the file WalkingWithZombies.uproject. If this fails, try right-clicking the .uproject file and selecting "Generate Visual Studio project files".

With the project now upon in the UE4 editor, it can now but run using the play-in-editor (PIE) functionality of UE4. This can be done by pressing the Play button located in the top bar, or by pressing `ALT + P`. This will, by default, run the project in the current viewport. 

To maximise the viewport, press `F11`. 
To exit the PIE, press `ESC`.
To run this project in VR, select the dropdown menu and select "VR Preview".

This project supports mouse-movement for camera control, but is designed to be viewed in VR.
WASD controls the player placement.

## Levels

This project consists of three levels: scenicLevel, mazeLevel and flatLevel. While in play-in-editor (PIE), press on your keyboard:
* `1` - to go to `scenicLevel`
* `2` - to go to `mazeLevel`
* `3` - to go to `flatLevel`

### scenicLevel

This is the full, advanced demo of all project functionalities. The player can switch between viewpoints by pressing `SPACEBAR`.

Humans will navigate their way across the terrain to get to a house and zombies will react to the humans. If all humans are successful at getting to the house, an event will occur (you will know when you see it!). This is when the demo has ended. Nothing else particularly interesting will happen after this, but you are welcome to explore the map.

### mazeLevel

This is a top-down view of a maze which humans will attempt to navigate, and zombies will react to the humans. This is a short demo where the simple set of events will happen automatically. 

### flatLevel

This is a top-down view of a plane with zombies spawned in a circle. Pressing `M` will cause the zombies to attempt to move to the opposite side of the circle. This is used as a collision and avoidance test of moving objects, to make sure crowd management is working correctly.
