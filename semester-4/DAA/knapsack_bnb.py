class Item:
    def __init__(self, weight, value):
        self.weight = weight
        self.value = value
        self.cost = 0  # cost is value/weight ratio


def solve_knapsack(items, capacity):
    # Sort items by value/weight ratio in descending order
    items.sort(key=lambda x: x.value / x.weight, reverse=True)

    # Create a priority queue for Branch and Bound
    from queue import PriorityQueue
    pq = PriorityQueue()

    # Initialize the root node (starting with no items selected)
    root = Node(level=-1, profit=0, weight=0, bound=bound(items, capacity))
    pq.put((-root.bound, root))  # Use negative bound for max heap

    max_profit = 0

    while not pq.empty():
        # Get the most promising node
        _, node = pq.get()

        if node.bound > max_profit:
            # Explore the node further only if it's promising
            level = node.level + 1

            # If including the item at the current level doesn't exceed capacity
            if node.weight + items[level].weight <= capacity:
                # Include the item
                profit = node.profit + items[level].value
                weight = node.weight + items[level].weight
                bound_val = bound(items, capacity, level + 1, profit, weight)
                if bound_val > max_profit:
                    max_profit = max(max_profit, profit)
                pq.put((-bound_val, Node(level, profit, weight, bound_val)))

            # Do not include the item
            bound_val = bound(items, capacity, level + 1,
                              node.profit, node.weight)
            if bound_val > max_profit:
                max_profit = max(max_profit, node.profit)
                pq.put((-bound_val, Node(level, node.profit, node.weight, bound_val)))

    return max_profit


def bound(items, capacity, level=0, profit=0, weight=0):
    """Compute the upper bound of max profit with current state."""
    bound = profit
    current_weight = weight

    # Fill the knapsack with items until it's full
    while level < len(items) and current_weight + items[level].weight <= capacity:
        bound += items[level].value
        current_weight += items[level].weight
        level += 1

    # If there's still capacity left, include fraction of the next item
    if level < len(items):
        bound += (capacity - current_weight) * \
            (items[level].value / items[level].weight)

    return bound


class Node:
    def __init__(self, level, profit, weight, bound):
        self.level = level
        self.profit = profit
        self.weight = weight
        self.bound = bound


# Example usage
if __name__ == "__main__":
    items = [
        Item(5, 30),  # (weight, value)
        Item(7, 28),
        Item(4, 20),
        Item(2, 24)
    ]
    capacity = 12
    max_profit = solve_knapsack(items, capacity)
    print("Maximum profit:", max_profit)
