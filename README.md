# Installation-opencv-Visualstudio 2022 and opencv 4.5.5

1. Edit the environment variables

    -   "Drive and path to opencv" e.g: c:\opencv\build\x64\vc15\bin

2.  Specify paths for the directories in Visual Studio: 
    Configuration Properties / VC++ Directories

    -   Include Directories: c:\opencv\build\include
    -   Library Directrories: c:\opencv\build\x64\vc15\lib

3. Specify Link library in Visual Studio: 
    Configuration Properties / Linker / Input
 
    -   Additional Dependencies: opencv_world420d.lib

4. run the file "Installation opencv.sln" in Microsoft Visual studio to configure the project settings.
