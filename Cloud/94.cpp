#include <iostream>
#include <algorithm>

int main() {
    int x, y;
    std::cin >> x >> y;

    int num_combo_tickets = std::min(x, y);
    int remaining_adults = x - num_combo_tickets;
    int remaining_children = y - num_combo_tickets;

    int total_cost = num_combo_tickets * 90 + remaining_adults * 60 + remaining_children * 40;

    std::cout << total_cost << std::endl;

    return 0;
}
