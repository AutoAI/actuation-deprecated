![DriveAILogo](readme-assets/DriveAILogo.png)
# Actuation

This is going to be the ROS package that actuates our vehicle.

Over Serial, it will tell actuating components where they should be at the current time.

Things we're going to care about:
* Acceleration (output): `float: [-1, 1]`
* Steering: `float (output): [-1, 1]
* Speed: `float (input): [0, umm...]`

We'll be broadcasting these things in this manner:
