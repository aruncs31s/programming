# Attendance List
# Read Attentence
# if attentence is less than 75 print not eligible
#
attendance = list([10], [10])


def read_attendance():
    for i in range(0, 6):
        for j in range(0, 2):
            attendance[j][i] = int(input("enter the roll num"))
            attendance[j][i] = int(input("enter the attendance"))


read_attendance()
print(attendance)
