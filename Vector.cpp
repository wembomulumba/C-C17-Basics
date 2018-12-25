#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Vertex
{
    float x, y , z;

}

std:: ostream& operator<<(std:: ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << " , " << vertex.z;
    return stream;
}

int main() {


    std:: vector<Vertex*> verticles;

    std :: cin.get();
}