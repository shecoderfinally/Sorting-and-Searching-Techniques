sum=0
def check_ArmstrongNumber(num):
    global sum
    if (num!=0):
        sum+=pow(num%10,3)
        check_ArmstrongNumber(num//10)
    return sum
num=int(input("Enter a number:"))
if (check_ArmstrongNumber(num) == num):
    print("It's an Armstrong Number.")
else:
    print("Not an Armstrong Number.")
