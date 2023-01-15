#include "stdbool.h"
#include "standard_calc.h"
#include <cmath>

using namespace std;


/**
 * @brief Bounds the provided angle between [-180, 180) degrees.
 *
 * e.g.)
 *      bound_to_180(135) = 135.0
 *      bound_to_180(200) = -160.0
 *
 * @param angle: The input angle in degrees.
 *
 * @return float: The bounded angle in degrees.
 */
float bound_to_180(float angle) 
{
    float output;
    float revolutions;

    //Converts to 360 degrees
    revolutions = angle / 360;
    revolutions = int(revolutions);
    if (revolutions != 0)
    {
      output = angle - (360*revolutions);
    }

    else
    {
      output = angle;
    }

    //Converts 360 scale to a -180 to 180 scale
    if (output >= 180)
    {
      output = output - 360 ; 
    }

    else if (output < -180)
    {
      output = 360 + output; 
    }
  
  

    return std::round(output * 100) / 100.0;
}

/**
 * @brief Determines whether an angle is between two other angles
 *
 *  e.g.)
 *      is_angle_between(0, 45, 90) = true
 *      is_angle_between(45, 90, 270) = false
 * 
 * @param first_angle:  The first bounding angle in degrees.
 * @param middle_angle: The angle in question in degrees.
 * @param second_angle: The second bounding angle in degrees.
 * @return bool: TRUE when `middle_angle` is not in the reflex angle of `first_angle` and `second_angle`, FALSE otherwise
 */
bool is_angle_between(float first_angle, float middle_angle, float second_angle) 
{
    float first, second;
    bool result;
  
    //Edge case (second angle > first angle)
    if (first_angle < second_angle)
    {
      first = second_angle;
      second = first_angle; 
    }

    else
    {
      first = first_angle;
      second = second_angle;
    }
  
    //Normal case (first angle > second angle)
    if (first >= middle_angle && second <= middle_angle)
    {
      result = true;
    }

    else
    {
      result = false;  
    }

    //Checks for reflex angle 
    if (first - second > 180)
    {
      result = !result;
    }

    return result;
}
