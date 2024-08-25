import heapq

class PuzzleSolver:
    def __init__(self, size, initial_state, goal_state):
        self.size = size
        self.initial_state = initial_state
        self.goal_state = goal_state

    def display_state(self, state):
        for i in range(0, self.size * self.size, self.size):
            print(state[i:i + self.size])
        print()

    def find_blank(self, state):
        return state.index(0)

    def move(self, state, direction):
        new_state = state.copy()
        blank_index = self.find_blank(new_state)

        if direction == 'up' and blank_index >= self.size:
            new_state[blank_index], new_state[blank_index - self.size] = new_state[blank_index - self.size], new_state[blank_index]
        elif direction == 'down' and blank_index < (self.size * (self.size - 1)):
            new_state[blank_index], new_state[blank_index + self.size] = new_state[blank_index + self.size], new_state[blank_index]
        elif direction == 'left' and blank_index % self.size != 0:
            new_state[blank_index], new_state[blank_index - 1] = new_state[blank_index - 1], new_state[blank_index]
        elif direction == 'right' and (blank_index + 1) % self.size != 0:
            new_state[blank_index], new_state[blank_index + 1] = new_state[blank_index + 1], new_state[blank_index]

        return new_state

    def h(self, state):
        # Heuristic function (e.g., Manhattan distance)
        return sum(abs((val - 1) % self.size - i % self.size) + abs((val - 1) // self.size - i // self.size) for i, val in enumerate(state) if val != 0)

    def solve(self):
        start_node = (self.h(self.initial_state), 0, self.initial_state, [])
        priority_queue = [start_node]
        visited_states = set()

        while priority_queue:
            _, cost, current_state, path = heapq.heappop(priority_queue)

            if current_state == self.goal_state:
                print("Puzzle Solved in", cost, "steps.")
                print("Moves:", path)
                return

            if tuple(current_state) in visited_states:
                continue

            visited_states.add(tuple(current_state))

            blank_index = self.find_blank(current_state)

            for direction in ['up', 'down', 'left', 'right']:
                new_state = self.move(current_state, direction)
                new_cost = cost + 1
                new_heuristic = self.h(new_state)
                new_node = (new_cost + new_heuristic, new_cost, new_state, path + [direction])
                heapq.heappush(priority_queue, new_node)

# Example usage with your provided initial and goal states:
initial_state_8puzzle = [1, 2, 3, 4, 5, 7, 6, 8, 0]
goal_state_8puzzle = [1, 2, 3, 4, 5, 6, 7, 8, 0]
solver8puzzle = PuzzleSolver(3, initial_state_8puzzle, goal_state_8puzzle)
solver8puzzle.solve()
