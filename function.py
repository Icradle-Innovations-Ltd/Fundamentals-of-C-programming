
def summation(*args):
    """
    Calculate the sum of all input arguments.
    """
    return sum(args)

def division(numerator, denominator):
    """
    Perform division of numerator by denominator.
    Raises ZeroDivisionError if denominator is zero.
    """
    if denominator == 0:
        raise ZeroDivisionError("Cannot divide by zero")
    return numerator / denominator

def round_off(number, decimal_places=2):
    """
    Round off a number to specified decimal places.
    Default is 2 decimal places if not specified.
    """
    return round(number, decimal_places)
