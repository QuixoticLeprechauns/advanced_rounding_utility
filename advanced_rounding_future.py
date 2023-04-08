from numbers import Real

def advanced_round[T: Real](value: T, increment: T, bias: T) -> T:
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
    return int(value/increment + bias) * increment
