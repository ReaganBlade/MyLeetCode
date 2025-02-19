# def Number_plate(c_name, car_model, duration, phone_num, fuel_type):

#     pass

# if __name__ == "__main__":
#     c_name, car_model, duration, phone_num, fuel_type = map(str, input().split())


#second Question
def create_has(query):
    # result = ""
    # for i in query:
    #     if (i not in result):
    #         result += i
    # return len(result)

    return len(set(query.split('')))


if __name__ == "__main__":
    query = input()
    result = create_has(query)
    print(result)