# In this file I am going to write down and explain each command that i used in completing task 2.

1. I made a directory named  in the folder Task-2 located in my desktop using `mkdir Coordinates-Location` and went into it using `cd Coordinates-Location`

2. Then I created a directory called North using `mkdir North` and went inside it using `cd North`
	- Then I used `cat > NDegree.txt` to create a textfile and entered `9°` .I got the degree symbol by holding down `ctrl`+`shift`+`u` then after releasing it i pressed `00b0` and pressed enter.Then I pressed `ctrl`+`z` to close the text file
	- Then I used `cat > NMinutes.txt` to create the file and then entered `5'` and then closed the text file
	- After that I created the file `NSeconds.txt` using the command `cat > NSeconds.txt` then I entered `38.1"` to it and closed it.
	- Then I made a new text file using `touch NorthCoordinate.txt` and combined(copied) all the 3 files into the this file using `cat NDegree.txt NMinutes.txt NSeconds.txt >> NorthCoordinate.txt` (**then i used the command ` cat NorthCoordinate.txt | tr '\n' ' ' >> North.txt` which replaced the nextline with spaces**)
	- Then I copied the above file using the command `mv North.txt ~/Desktop/Task-2/Coordinates-Location/` and i used `rm NorthCoordinate.txt` and  to delete the file then i moved back to the previous directory.

3. With this I completed the first half

4. Then I created a directory called East using `mkdir East` and went inside it using `cd East`
	- Then I used `cat > EDegree.txt` to create a textfile and entered `76°` .Then I pressed `ctrl`+`z` to close the text file
	- Then I used `cat > EMinutes.txt` to create the file and then entered `29'` and then closed the text file
	- After that I created the file `ESeconds.txt` using the command `cat > ESeconds.txt` then I entered `30.8"` to it and closed it.
	- Then I made a new text file using `touch EastCoordinate.txt` and combined(copied) all the 3 files into the this file using `cat EDegree.txt EMinutes.txt ESeconds.txt >> EastCoordinate.txt` (**then i used the command ` cat EastCoordinate.txt | tr '\n' ' ' >> East.txt` which replaced the nextline with spaces**)
	- Then I copied the above file using the command `mv East.txt ~/Desktop/Task-2/Coordinates-Location/` and i used `rm EastCoordinate.txt` to delete the file 

5. I made a new file called `Location-Coordinates.txt` using `touch Location-Coordinates.txt` and copied both of the contents of the files to this file using the command `cat North.txt East.txt >> Location-Coordinates.txt`.


# Pushing to Github
I will first open terminal in the files location and then use the comand `git init` then use `git add .` then `git commit -m "Any message"` then use `git remote add origin git@github.com:Prashanth-Chandra/amfoss-tasks` or any other repository then `git push origin master` and then I enter my username and github token.