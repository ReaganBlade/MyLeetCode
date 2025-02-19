def generate_license(CN: str, CM: str, BD: int, RC: str, FT: str) -> str:
    # Validate CN (Customer Name)
    if not CN.isalpha() or len(CN) > 20:
        return "Invalid Details"
    CN = (CN[:3] if len(CN) >= 3 else CN.ljust(3, 'X')).upper()

    # Validate CM (Car Model)
    if len(CM) > 15:
        return "Invalid Details"
    CM = CM[:2].upper()

    # Validate BD (Booking Duration)
    if not (1 <= BD <= 30):
        return "Invalid Details"

    # Validate RC (Rental Code - Phone number's last 3 digits)
    if not RC.isdigit() or len(RC) != 10:
        return "Invalid Details"
    RC = RC[-3:]

    # Validate FT (Fuel Type)
    fuel_map = {"petrol": "P1", "diesel": "D2", "electric": "E3"}
    FT = fuel_map.get(FT.lower())
    if not FT:
        return "Invalid Details"

    # Generate and return the license
    return f"{CN}-{CM}-{BD}-{RC}-{FT}"

if __name__ == "__main__":
    CN, CM, BD, RC, FT = map(str, input().split())
    result = generate_license(CN, CM, int(BD), RC, FT)
    print(result)
# Example Usage:
# print(generate_license("Charles", "BMW", 15, "6200376523", "diesel"))  # Output: CHA-BM-15-523-D2
