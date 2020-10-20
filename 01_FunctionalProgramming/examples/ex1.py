import unittest
from datetime import datetime

y = 2

def func(x):
    return x+2

def func2(x):
    global y 
    y = y + 2
    return x*y

def func3():
    global y 
    y= y * 2
    return y

def func4():
    return datetime.now()

def func5(x):
    sum=0
    for z in range(1,x+1):
       sum=sum+z
    return sum
      

def func6(x):
    if x <= 1:
        return x
    return x + func6(x-1)

class Test(unittest.TestCase):
    def test_func(self):

        self.assertEqual(func(2),func(2))

        #self.assertEqual(func2(2),func2(2))

        #self.assertEqual(func3(),func3())

        #self.assertEqual(func4(),func4())
        
        #self.assertEqual(func5(10),func5(10))

        #self.assertEqual(func6(10),func6(10))

        #self.assertEqual(func5(10),func6(10))

if __name__ == '__main__':
    unittest.main()
