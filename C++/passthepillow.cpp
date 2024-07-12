int findPillowHolder(int n, int time) {
    int position = 1;  // Starting position (1-indexed)
    int direction = 1; // Initial direction (1 for forward, -1 for backward)
    
    for (int i = 0; i < time; ++i) {
        position += direction;
        if (position == n) {  // If the position is at the end, reverse direction
            direction = -1;
        } else if (position == 1) {  // If the position is at the start, reverse direction
            direction = 1;
        }
    }
    
    return position;
}
