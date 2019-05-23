import sys
def DCheckArgIsIntegerAndGreaterThenZero(fn):
    def Check(n):
        try:
            if abs(n-int(n))>sys.float_info.epsilon or n <= 0:
                print("The argument must be an integer and greater than 0.") 
                return
        except:
            print("The argument must be an integer and greater than 0.") 
            return
        return fn(n)
    return Check

@DCheckArgIsIntegerAndGreaterThenZero
def ContinuousSum(n):
    ret = 0
    for i in range(1,n+1):
        ret += i
    return ret