import random

def computer_move(herds):
    """
    Simulates a move by the computer player, which randomly selects a herd
    and removes a random number of cows from it.

    Parameters:
    herds (list): A list representing the number of cows in each herd.

    Returns:
    list: The updated list of herds after the computer's move.
    """
    
    # Check if there are any herds left with cows
    if all(cows == 0 for cows in herds):
        print("All herds are empty!")
        return herds

    # Choose a random herd with cows to remove from
    while True:
        herd_index = random.randint(0, len(herds) - 1)
        if herds[herd_index] > 0:  # Ensure the selected herd has cows
            break

    # Determine a random number of cows to remove, at least 1 and at most the cows in the selected herd
    cows_to_remove = random.randint(1, herds[herd_index])
    
    # Make the move
    herds[herd_index] -= cows_to_remove
    print(f"Computer removed {cows_to_remove} cows from herd {herd_index + 1}")
    
    return herds

def main():
    # Initialize the herds
    herds = [10, 15, 20]  # Example: 3 herds with 10, 15, and 20 cows respectively

    print("Initial herds:", herds)

    # Make the computer move
    updated_herds = computer_move(herds)
    print("Updated herds after the move:", updated_herds)

if __name__ == "__main__":
    main()
