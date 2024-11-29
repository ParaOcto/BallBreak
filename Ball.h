#include <iostream>
#include <string.h>
#include <SFML/Graphics.hpp>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;
using namespace sf;

class Bar{

};

class Ball{
private:
    static Bar* bar;
    float x, y;
    Bar(){}
    CircleShape circle(10);
    circle.setFillColor(Color::Green);
    circle.setPosition(250.f, 250.f);

public:

};

class Brick{

};

