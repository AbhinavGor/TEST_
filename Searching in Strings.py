def count_substring(string, sub_string):
    # string = str(input("Give a string for checking."))

    subs = list()

    for i in range(len(string) + 1):
        for j in range(len(string) + 1):
            if string[i:j] != "":
                subs.append(string[i:j])

    # print(subs)

    # key = str(input("Enter key to check"))

    match = list()

    for i in subs:
        if i == sub_string:
            match.append(i)

    # print(len(match))

    return len(match)


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)