#include <Eigen/Dense>
#include <iostream>

int main()
{
    float data[] = {1, 2, 3, 4};
    Eigen::Map<Eigen::Vector3f> v1(data);
}
