students_public = list()

student = list()
student_str = list()

num = int(input("How many students do you wan to include?"))

i = 0

while i < num:
    student_str = str(input(""))
    i = i + 1
    student = student_str.split(" ")
    students_public.append(student)

print(students_public)

percentage_stud = str(input("Enter the student's name whose percentage you want."))

total = 0
j = 1

for i in range(len(students_public)):
    test = percentage_stud == students_public[i][0]
    if test:
        for j in range(1,len(students_public[i])):
            total  = total + int(students_public[i][j])
            percentage =total/3

for i in students_public:
    for j in i:
        print(j, end = "\t")
    print("\n")

print(percentage)