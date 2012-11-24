PointsMap
=========

Code to manage csv file and data base for the navigation using points

The aims of this code-project is to get from a csv file (explain here: http://bit.ly/kiss-csv ) a Map class which contains:
  - the list of Destinations in the csv,
  - the roads with the distance between destinations and angle (in degree from 0 to 360 using the trigonometric direction).

The aim of it is to be used for the KISS project ( http://bit.ly/kiss-web ) as a Map.

Conventions to code:
  - Clone and work in another directory than our ros code. This is a project aside, standalone,
  - Keep the documentation up to date (all the comments can be transformed into dox documentation later),
  - Respect the usual way to name class attribute, methods, variables and so on (lower case with _ to separate the word),
  - NO cout in class method expect if its name is "print" (or for debugging),
  - One file per class to test it named test_:class name:,
  - Do NOT push if the code is not correctly execuded (compilling is not enough),
  - Compile WITHOUT warning,
  - Do NOT modify a code that you do not understand,
  - Use the csv file named "file.csv" for the test (which correspond to the example: http://bit.ly/kiss-csv ),
  - Keep the Makefile up to date (if you do not know read the next convention),
  - Ask questions, demand answers,
  - Have fun.

  Questions from Lucas:
  - Could you explain how MakeFile works? (Links, oral explanation, anything, thanks in advance).