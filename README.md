# RANS 1.0 -Windows - External aerodynamics CFD 
OpenFoam for Windows 15.06 - Aerodynamics GUI for automotive / motorsport application using Qt and OpenGl.  

Step 1: Install Openfoam for Windows 15.06 (from www.cfdsupport.com, please contact them, it is free software )     
Step 2: RANSAero.exe start your project  
Step 3: go to Tools/Environment and set Openfoam solver path and paraview for post-processing  
Step 4: (install BCGISTAB solver in order to get good convergence) or change default settings  Turbulence models/Numerical settings
Actually, I copy CopyToSystem folder files into System folder.I am not sure that works perfectly. Try it. 
 
I recommend to use strong graphics cards in case of huge models using GPU rendering and mapping.
Tipp/Tricks(you can select lighting methods to increase the speed, Tools environments) 
At the moment, you can read stl (Ascii) and Nastran input decks (.bdf).Please take car about the format.  
I would rather use Nastran than STL file. More structured and less size of the files. 
I recommend to run a simulation on workstations in case of complex geometry.



If you have any queries please contact me : dragazsolt@gmail.com 

