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

class Test(unittest.TestCase):
    def test_func(self):

        self.assertEqual(func(2),func(2))

        #self.assertEqual(func2(2),func2(2))

        #self.assertEqual(func3(),func3())

        #self.assertEqual(func4(),func4())

if __name__ == '__main__':
    unittest.main()
