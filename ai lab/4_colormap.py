def is_safe(graph, vertex, color, c):
    for i in graph[vertex]:
        if color[i] == c:
            return False
    return True

def graph_coloring_util(graph, m, color, v):
    if v == len(graph):
        return True

    for c in range(1, m + 1):
        if is_safe(graph, v, color, c):
            color[v] = c
            if graph_coloring_util(graph, m, color, v + 1):
                return True
            color[v] = 0

    return False

def four_color_map(graph):
    num_vertices = len(graph)
    color = [0] * num_vertices
    num_colors = 4

    if not graph_coloring_util(graph, num_colors, color, 0):
        print("Solution does not exist.")
        return

    print("Coloring of the map:")
    for i in range(num_vertices):
        print(f"Region {i + 1}: Color {color[i]}")

# Example usage:
# Define the adjacency list for your map
map_graph = {
    0: [1, 2, 3],
    1: [0, 2],
    2: [0, 1, 3],
    3: [0, 2]
}

four_color_map(map_graph)
