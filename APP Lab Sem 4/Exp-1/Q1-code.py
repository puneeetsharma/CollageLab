for y in range(2000,2025):
    if(y%4==0):
        if(y%100==0):
            if(y%400==0):
                print(y,"is a leap year.")
            else:
                print(y,"is not a leap year.")
        else:
            print(y,"is a leap year")
    else:
        print(y,"is not a leap year.")