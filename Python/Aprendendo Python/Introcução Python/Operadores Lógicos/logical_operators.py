temp = 25
#is_raining = False
is_sunny = True

#if temp > 35 or temp < 0 or is_raining:
    #print("The outdoor event is cancelled")
#else:
    #print("The outdoor event is still scheduled")
#----------------------------------------------------------

if(temp >= 28 and is_sunny):
    print("It's hot outside")
    print("It's sunny")
elif temp <= 0 and is_sunny:
    print("It's cold outside")
    print("It's sunny")
elif temp > 28 and temp > 0 and is_sunny:
    print("It's warm outside")
    print("It's sunny")

