def validate_ip(s):
    a=s.split(".")
    if len(a)!=4:
        return False
    for x in a:
        if not x.isdigit():
            return False
        i=int(x)
        if i<0 or i>255:
            return False
    return True
    
if(validate_ip("155.130.122.89")==False):
    print("Not an Ip Address")
else:
    print("It is an Ip Address")