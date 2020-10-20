--bgcolor black
--fgcolor green

--title Functional Programming with Haskell and Elm ( without Haskell and Elm ) 
--center Part 1



--author Tobias Klipp
--date today

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
--heading examples - 1 - observations


--beginoutput

def func(x):
    return x+2

--endoutput

---
  * fully defined => all operations are assembled of parameters

---
  * multiple executions wont change the result

---

  * deterministic => "equal inputs result in equal outputs"
---

  * can be replaced with its result

---
  => Referential Transparency

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
--heading examples - 2 - observations
--beginoutput
y = 2

def func2(x):
    global y 
    y = y + 2
    return x*y
--endoutput

---
What has changed ?

---
  * use of assignment ( "state"-ment )

---
  * order of execution is decisive for the result

---
  * operations aren´t composed of paramaters anymore

---
  => the programm is now an captive of some kind of state

---
  => side - Effects

---
  => concept of time is introduced

--##
--##
--newpage
--heading examples - 3


--beginoutput

y = 2


def func3():
    global y 
    y = y * 2
    return y

---
self.assertEqual(func3(),func3())

--endoutput

---
True or false ?

--##
--##

--newpage
--heading examples - 3 - observations


--beginoutput

y = 2

def func3():
    global y 
    y = y * 2
    return y

--endoutput

---

  * Where are the parameters? 
---

    => not defined at all
---

  * result is fully dependant of the "external state"

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
--heading examples - 4 - observations


--beginoutput


def func4():
    return datetime.now()

--endoutput

---
Where are my variables now?

  * program is dependant of something it isnt built of
---

  * no thoughts about determinism anymore
---

  => formal object becomes victim of real world issues

--##
--##

--newpage
--heading What happened ? -> Philosophy Time

---
  * example 1 was a pure function
    => deterministic
    => well defined
    => no side effects

---
  * pure functions are mathematical objects
    => hence part of the platonic realm of concepts

---
  * side-effects destroy the well defined context of mathematics
    => absolute reliability is gone

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

--##
--##

--newpage

--heading examples - 4 - observations

--beginoutput

def func5(x):
    sum=0
    for z in range(1,x+1):
       sum=sum+z
    return sum

def func6(x):
    if x <= 1:
        return x
    return x + func6(x-1)

--endoutput

  * the result of both functions are the same
---

  *  iteration vs. recursion
---

  => func6 is pure

--##
--##

--newpage
--heading What we have learned so far

  * Concept of pure functions
---

  * programs can be dependant of external state
---

  * side effects "make" programs "unpredictable"
    => operations which may not have been intended

--##
--##

--newpage
--heading Whats the matter with "Functional Programming" ?

---
  * based on lambda calculus and category theory

---
  * try to be as pure as possible
    => but offer ways of handling side effects

---
  * all functions are well defined

---
  * try to avoid mutable states

---
  * expressions vs. statements
    => no assignments
    => "variables" are "on demand" defined constants

---
  * functions are first-class-citizens
    -> return values
    -> parameters
    -> variables

---
  * recursion instead of loops

--##
--##

--newpage
--heading Features of functional Programming ( influenced by Haskell ) 
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
--heading The End
