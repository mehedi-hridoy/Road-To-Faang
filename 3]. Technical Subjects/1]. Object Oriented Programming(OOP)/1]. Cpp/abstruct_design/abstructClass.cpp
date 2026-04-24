#include<iostream>
#include<bird.h>
using namespace std;

void birdDoesSomething(Bird *b) {
    b->eat();
    b->fly();
};

int main() {
    Bird *bird = new Sparrow();
    birdDoesSomething(bird);

    delete bird;
    return 0;
}