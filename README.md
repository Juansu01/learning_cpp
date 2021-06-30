
# <p align="center"> AirBnB clone - The console <p>
<img src="https://i.ibb.co/R6g7P2W/65f4a1dd9c51265f49d0.png" alt="hbnb project">

This project is the first step to building our first web application, which is going to be an AirBnB clone. This project is going to cover essential topics that will teach us how to create and deploy a web application.

## Folders. 📂

 - models: Contains all the scripts that define the classes for our models.
 - tests: Contains all the test scripts that we use in order to test our methods and classes.
 - AUTHORS: This file contains the authors of this project.
 - console.py: In this script we define a console that allows us to manage the objects of our project.


## Console description.

This is the console we use in order to manipulate and handle our objects.

### How to use our console.

Enter the following command to excecute our console.

```
./console.py
```
This is an example of what our console outputs when you excecute the command "help"
```
~/AirBnB_clone# ./console.py
(hbnb) help

Documented commands (type help <topic>):
========================================
EOF  all  create  destroy  help  quit  show  update

(hbnb)
```

### Command descriptions.

| Command     | Arguments   | Description   |
| :---        | :---        | :---          |
| create      | <class_name> | Creates a new instance of a class and prints its id.|
| show        | <class_name> <id> | Prints the string representation of an instance based on the class name and id.|
| destroy     | <class_name> <id>     | Deletes an instance based on the class name and id. |
| all         | <class_name> (optional argument)       | Prints all string representation of all instances based or not on the class name. |
| update      | <class_name> <id> <attribute_name> "<attribute_value>"       | Updates an instance based on the class name and id by adding or updating attribute.   |
| quit        | No Arguments        | Exits the console.      |
| EOF         | No Arguments       | Use "Ctr + D" to excecute this command.   |
| help        | <command>        | Displays all available commands or information about the command you type next to it.|
