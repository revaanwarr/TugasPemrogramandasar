#include <iostream>

void add_score(int& score) {
    score += 5;
}

int main() {
    int score = 0;

    std::cout << "score sebelum diubah: " << score << std::endl;

    for (int i = 1; i <= 6; ++i) {
        add_score(score);
        std::cout << "score diubah ke: " << score << std::endl;
    }

    std::cout << "score setelah diubah: " << score << std::endl;

    return 0;
}