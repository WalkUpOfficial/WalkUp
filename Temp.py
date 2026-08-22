from collections import deque
import sys


def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    iterator = iter(input_data)
    try:
        R = int(next(iterator))
        C = int(next(iterator))
    except StopIteration:
        return
    grid = []
    for _ in range(R):
        try:
            grid.append(next(iterator))
        except StopIteration:
            break
    if R == 1 and C == 1:
        print(1)
        return
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    visited = [[False] * C for _ in range(R)]
    queue = deque()
    queue.append((0, 0, 1))
    visited[0][0] = True
    while queue:
        r, c, steps = queue.popleft()
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < R and 0 <= nc < C and not visited[nr][nc] and grid[nr][nc] == '.':
                if nr == R - 1 and nc == C - 1:
                    print(steps + 1)
                    return
                visited[nr][nc] = True
                queue.append((nr, nc, steps + 1))

if __name__ == "__main__":
    solve()