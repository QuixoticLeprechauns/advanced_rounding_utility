#ifndef ADVANCED_ROUNDING_HPP
#define ADVANCED_ROUNDING_HPP
/// @brief Rounds a value according to an increment, and a bias.
/// @tparam T Should be a numeric type. Otherwise, must be castable to int, and support multiplication, devision, and addition.
/// @param value The value to round.
/// @param increment The value by which rounding occurs.
/// @param bias Determines the point at which rounding up or down occurs. Must have a value between 0 and 1.
/// @return Returns the newly rounded value.
template<typename T>
inline T advanced_round(T value, T increment, T bias)
{
    return (int)((value/increment) + bias) * increment;
}
#endif