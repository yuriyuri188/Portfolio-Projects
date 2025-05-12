#  Tic-Tac-Toe (C Implementation)

This program implements a variant of the classic Tic-Tac-Toe game called **Avoidance Tic-Tac-Toe**, featuring dynamic board sizes, turn tracking, and the ability to erase previous moves. The goal is to **avoid** forming a winning line, making it a twist on the traditional objective.

## 🎮 Game Features

- 👥 **Two-player mode** (P1 and P2 take turns)
- 🧩 **Custom board size** (up to 11x11)
- 🕹️ **Avoidance mechanics** — players lose if they create a winning line
- ↩️ **Undo moves** — erase a specific number of past moves
- 🧠 **Turn history tracking** to manage erasure order and prevent cheating
- ✔️ **Win/draw detection** — checks rows, columns, and both diagonals

## 🧠 How It Works

1. **Initialization**
   - User sets the board size (1x1 up to 11x11).
   - Board is initialized and printed.

2. **Gameplay Loop**
   - P1 and P2 alternate moves.
   - Players may enter a move or trigger **undo** to erase past turns.
   - The turn history ensures that only the most recent moves can be undone in order.

3. **Win Checking**
   - After each move, the program checks for:
     - Horizontal line
     - Vertical line
     - Diagonal lines
   - If a player creates a full line, **they lose**.

4. **Edge Cases**
   - Board size of 1 is handled.
   - Full board with no loss results in a draw.


