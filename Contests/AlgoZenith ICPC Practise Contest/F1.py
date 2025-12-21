import numpy as np
import random

def monte_carlo_empty_cells(k, trials=10000):
    # Initialize board dimensions
    board_size = 8
    empty_counts = []

    for _ in range(trials):
        # Start with a board with 1 person in each cell
        board = np.ones((board_size, board_size), dtype=float)
        
        # Simulate k moves for each person
        for _ in range(k):
            new_board = np.zeros((board_size, board_size), dtype=float)
            for i in range(board_size):
                for j in range(board_size):
                    if board[i][j] > 0:
                        moves = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
                        # Filter valid moves within bounds
                        valid_moves = [(x, y) for x, y in moves if 0 <= x < board_size and 0 <= y < board_size]
                        # Distribute people evenly across valid moves
                        people_per_move = board[i][j] / len(valid_moves)
                        for x, y in valid_moves:
                            new_board[x][y] += people_per_move
            board = new_board

        # Count empty cells
        empty_cells = np.sum(board < 1e-6)  # Treat cells with extremely small values as empty
        empty_counts.append(empty_cells)

    # Calculate the average number of empty cells for k moves
    return round(np.mean(empty_counts), 6)

# Generate results for k = 1 to 100
results = []
for k in range(1, 101):
    expected_empty_cells = monte_carlo_empty_cells(k)
    results.append((k, expected_empty_cells))
    print(f"k={k}, Expected empty cells: {expected_empty_cells}")
