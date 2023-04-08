from libc.math cimport trunc

cpdef double advanced_round(double value, double increment, double bias):
    """
    Rounds a value according to an increment, and a bias.

      value
        The value to round.
      increment
        The value by which rounding occurs.
      bias
        Determines the point at which rounding up or down occurs. Must have a value between 0 and 1.

    Returns the newly rounded value.
    """
    return trunc(value/increment + bias) * increment
