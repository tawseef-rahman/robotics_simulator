#include "utils.hpp"

std::vector<double> vectorAdd(const std::vector<double> &v1, const std::vector<double> &v2)
{
    std::vector<double> result(v1.size());
    for (size_t i = 0; i < v1.size(); ++i)
    {
        result[i] = v1[i] + v2[i];
    }
    return result;
}

std::vector<double> vectorSubtract(const std::vector<double> &v1, const std::vector<double> &v2)
{
    std::vector<double> result(v1.size());
    for (size_t i = 0; i < v1.size(); ++i)
    {
        result[i] = v1[i] - v2[i];
    }
    return result;
}

std::vector<double> vectorMultiply(const std::vector<double> &v, double scalar)
{
    std::vector<double> result(v.size());
    for (size_t i = 0; i < v.size(); ++i)
    {
        result[i] = v[i] * scalar;
    }
    return result;
}