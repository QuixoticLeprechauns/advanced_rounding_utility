
/**
 * @summary Rounds a value according to an increment, and a bias.
 * @param {*} value The value to round.
 * @param {*} increment The value by which rounding occurs.
 * @param {*} bias Determines the point at which rounding up or down occurs. Must have a value between 0 and 1.
 * @returns Returns the newly rounded value.
 */
export function advanced_round(value, increment, bias)
{
    return Math.round((value/increment) + bias) * increment;
}