--bgcolor black
--fgcolor green

--title Functional Programming with Haskell ( and Elm ) Part 1

--author Tobias Klipp

--date today

--newpage
--heading Why ?

--##
--##

--newpage
--heading examples


  Consider this: 

---
--beginoutput
  assertEqual(func(x),func(x))
--endoutput

---
  True or false ?

--##
--##

--newpage
--heading examples - 1


--beginoutput

def func(x):
    return x+2

---
self.assertEqual(func(2),func(2))

--endoutput

---
True or false ?

--##
--##

--newpage
--heading examples - 2


--beginoutput

y = 2

def func2(x):
    global y 
    y = y + 2
    return x*y

---
self.assertEqual(func2(2),func2(2))

--endoutput

---
True or false ?

--##
--##

--newpage
--heading examples - 3


--beginoutput

y = 2


def func3():
    global y 
    y= y * 2
    return y

---
self.assertEqual(func3(),func3())

--endoutput

---
True or false ?

--##
--##

--newpage
--heading examples - 4


--beginoutput


def func4():
    return datetime.now()

---
self.assertEqual(func4(),func4())

--endoutput

---
True or false ?

--##
--##

--newpage
--heading examples - 4

--beginoutput

def func5(x):
    sum=0
    for z in range(1,x+1):
       sum=sum+z
    return sum
      
---

def func6(x):
    if x <= 1:
        return x
    return x + func6(x-1)

---
self.assertEqual(func5(),func6())
--endoutput

---
True or false ?
---
=> Whats the difference ?

--newpage
--heading Functional Programming ?
--horline


---
  * expressions vs. statements

---
  * avoiding of mutable states

---
  * first-class-citizens
    -> return values
    -> parameters
    -> variables
---
    => higher order functions

--##
--##

--newpage
--heading Features
--horline
--newpage
--heading Features - Higher-Order Functions
--##
--##
--newpage
--heading Features - Immutable Data
--##
--##
--newpage
--heading Features - Referential Transparency
--##
--##
--newpage
--heading Features - Lazy Evaluation
--##
--##
--newpage
--heading Restrictions
--##
--##
--newpage
--heading 
--##
--##
--newpage
--heading 
--##
--##
--newpage
--heading Closures
--beginoutput
  foo y = (\x -> x + y )
--endoutput
