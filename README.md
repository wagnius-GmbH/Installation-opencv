# Installation-opencv-Visualstudio 2022 and opencv 4.6
all credits to:
https://www.google.com/search?q=Installation-opencv-Visualstudio+2022+and+opencv&oq=Installation-opencv-Visualstudio+2022+and+opencv&aqs=chrome..69i57.1395j0j15&sourceid=chrome&ie=UTF-8#fpstate=ive&vld=cid:6b508e6d,vid:trXs2r6xSnI

1. Edit the environment variables

    -   "Drive and path to opencv" e.g: c:\opencv\build\x64\vc15\bin

2.  Specify paths for the directories in Visual Studio: 
    Configuration Properties / VC++ Directories

    -   Include Directories: e.g. c:\opencv\build\include
    -   Library Directrories: e.g. c:\opencv\build\x64\vc15\lib

3. Specify Link library in Visual Studio: 
    Configuration Properties / Linker / Input
 
    -   Additional Dependencies Debug: opencv_world460d.lib
    -   Additional Dependencies Releas: opencv_world460.lib 

4. run the file "Installation opencv.sln" in Microsoft Visual studio to configure the project settings.
