# dictionaries are ... set of key-value pairs
# maps in C++ are like dictionaries
# objects in javascript are also like dictionaries

# this is how you would define a dictionary
state_capitals = {
    "New York"   : "Albany",
    "New Jersey" : "Trenton",
    "California" : "Sacramento",
    "Texas"      : "Austin"
}

# you can access values if you know the key
print(state_capitals["Texas"])

# you can use anything that will eventually evaluate to a datatype that matches your key
state = "California"
print(state_capitals[state])


# trying to access a key that's not defined will throw an error
# the follow 2 lines will NOT work
#state2 = "Hawaii"
#print(state_capitals[state2])

# some other useful utilities are .keys() to get a list of all keys and .values() to get a list of all values
print(state_capitals.keys())
print(state_capitals.values())
