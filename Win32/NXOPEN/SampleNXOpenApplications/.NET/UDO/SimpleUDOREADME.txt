-------------------------------------------------------------------------------

              Copyright (c) 2012  Siemens PLM Software
                Unpublished - All rights reserved


   
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
		         Creates a very simple UDO example
-------------------------------------------------------------------------------

-----------
Description
-----------
This example demonstrates each of the following callbacks: 
 * Display 
 * Selection 
 * Attention Point 
 * Fit 
 * Edit 
 * Information 


--------------
Files required
--------------

 1. SimpleUDO.vb 
	
-----------
Build Steps
-----------

Windows
-------
1. Open Microsoft Visual Studio .Net.

2. Create a new Vb project using the NX Open AppWizard. 
   Create new project as:
        2.1 File->New->Project.
 	    2.2 Select Vb Project using the NX Open AppWizard, Class Library Application, Enter name as SimpleUDO. Click Next
        2.3 Under Application Settings, select 'An Internal application that can be activated from an NX session (DLL). 
        2.4 Select to activate the application Explicitly and to unload the application when NX session terminates. Click Finish.

3. Remove all *.vb files from created project by clicking MB3 on respective file and 
   clicking 'Delete' on pop-up menu. You will receive a pop-up that says it will be deleted permanently. Hit OK.
   
4. Add the SimpleUDO.vb to the project by selecting the Project pull down and select "Add Existing Item...". Select the file using 
   the popup window.

5. Build the internal image by going to the Build menu and selecting either "Build Solution" or "Rebuild Solution".

This will create an executable called SimpleUDO.dll in the Debug directory.

Linux
-------
   -NA-

----------------------------
Settings before Launching NX
----------------------------
   -NA-
   
----------------------------
Settings after Launching NX
----------------------------

 1. Change the Role to Advanced with full menus.

--------------------------
Example execution steps
--------------------------

 1. Using Tools->Journal->Play
   
        1.1 Start NX.
  
        1.2 Create new part.
        
        1.3 Invoke SimpleUDO.vb file using Tools->Journal->Play (Alt+F8).
        
        1.4 It will launch the New dialog "Registering VB UDO Class", click->OK.
		
		1.5 It will launch the New Screen Position dialog, which ask for screen position, Click on screen.
	        It will create the new VB .NET UDO Class Example.
	
 2. By creating Shared Library and invoke it through File->Execute->NX Open... Menu. 
   
    Once you have successfully finished with "Build Steps", 
    follow the steps below:

        2.1 Start NX.
  
        2.2 Invoke Shared Library SimpleVB.dll through  File->Execute->NX Open Menu (Ctrl+U).
		
		2.3 First it will display new pop-up message dialog "Registering VB UDO Class", click->OK.
            OR 
            If it is a C# dll then it will display Information window with message "Registering C# UDO Class".
        
        2.4 It will launch the New Screen Position dialog, which ask for screen position, Click on screen.
	        It will create the new VB .NET UDO Class Example.
        
-----
Note:
-----
    "NXOpen application must be signed before its release. If not signed the application may not get executed.
 For more details on signing the application refer to NXOpen Programmer's Guide."
