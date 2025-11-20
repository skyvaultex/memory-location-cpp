#include <iostream>

void potionCrit (double* potion_health, double* potion_speed, double* potion_attack) {
    
    bool hasPotion = true;
    if (hasPotion) 
    {
        *potion_health += 25.0;
        *potion_speed += 0.2;
        *potion_attack += 4.5;
    }
}

int main() {
    double health = 100.0, speed = 1.0, attack = 10.0;
    potionCrit(&health, &speed, &attack);
    std::cout << "Health increased to: " << health << std::endl;
    std::cout << "Speed increased to: " << speed << std::endl;
    std::cout << "Attack increased to: " << attack << std::endl;
}

