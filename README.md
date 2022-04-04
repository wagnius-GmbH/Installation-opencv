# Installation-opencv

1. Edit the environment variables

    -   "Drive and path to opencv" e.g: c:\opencv\build\x64\vc15\bin

2.  Specify paths for the directories in Visual Studio: 
    Configuration Properties / VC++ Directories

    -   Include Directories: c:\opencv\build\include
    -   Library Directrories: c:\opencv\build\x64\vc15\lib

3. Specify Link library in Visual Studio: 
    Configuration Properties / Linker / Input
 
    -   Additional Dependencies: opencv_world420d.lib
