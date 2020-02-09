# Chess Solitaire (with undo/redo)

# :computer: Technical Profile
Written in an object oriented programming language called Eiffel, which is a design by contract programming language, which specifically focuses on (you guessed it) design. The focus with Eiffel is on command-query separations, focuses on cohesion in software, void safety, single choice principle, open close principle and uniform access principle.

# :heavy_check_mark: Learning Outcomes Achieved
- How to implement undo/redo pattern based off a case study reading given to me
- How to implement business model logic and user interface
- How to batch regression test (with the use of acceptance tests) using Eiffel Testing Framework
- How to unit test effectively using the interactive mode to verify and correct

# :notebook_with_decorative_cover: Rules
In  short, its a single player game of chess! Pieces are added to the board, using every chess piece's movement pattern you must capture every piece until there is only one piece left remaining. There's an undo function to retract any moves you make, and a redo as well to repeat a move.

# :video_game: How to Run the Game
To simply run, after downloading the files, using a terminal (since I am a Windows user, I use the command line provided).

Navigate to the /tests/acceptance/instructor directory, here you will find all the acceptance tests.
For batch mode in Windows, to compile you run this command. This compiles the code into the executable file.
```
..\..\..\EIFGENs\chess_solitaire_undo\W_code\chess_solitaire_undo -b at01.txt > at01.actual.txt
```
To test the differences between the acceptance text files and the actual text file, you run:
```
fc at01.actual.txt at01.expected.txt
```
Similar to using diff on Linux, it will output any differences found between both files.

# :beetle: Bugs
- Currently the losing algorithm isn't 100% working.
