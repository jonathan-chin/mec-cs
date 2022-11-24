# possible games we can implement
# War
# How to Play: each player flips over the top card of their deck
# highest number wins
# winner takes both cards and places at bottom
# if cards have same value then both players place 3 cards face down and one card face up (might skip this rule)
# goes until one player has no cards left

# easy:
# Go Fish

# moderate:
# Blackjack
# Uno

# difficult / large projects:
# Bridge
# Spades

import random
from functools import reduce

def generate_suits_of_card(rank):
    suits = ['diamonds', 'clubs', 'hearts', 'spades']
    #cards = map(lambda suit: rank + ' of ' + suit, suits)
    cards = map(lambda suit: (rank, suit), suits)
    return tuple(cards)

def generate_deck():
    ranks = ['A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K']
    return reduce(lambda a, b: a + b, map(generate_suits_of_card, ranks))

def deal_one_card_from_top(deck):
    (top_card, *rest_of_deck) = deck
    return (top_card, tuple(rest_of_deck))

def deal_x_from_top(deck, times, payload = ()):
    if(times == 0 or len(deck) == 0):
        return(deck, payload)
    (top_card, rest_of_deck) = deal_one_card_from_top(deck)
    return deal_x_from_top(rest_of_deck, times - 1, (top_card, ) + payload)

def deal_random_card(deck):
    random_index = random.randint(0, len(deck) - 1)
    return_card = deck[random_index]
    new_deck = deck[:random_index] + deck[random_index+1:]
    return (return_card, new_deck)

def get_random_index(deck):
    return random.randint(0, len(deck) - 1)

def swap_two_cards(first_index, second_index, deck):
    first_card = deck[first_index:first_index + 1]
    second_card = deck[second_index:second_index + 1]
    left_partition = () if first_index == 0 else deck[:first_index]
    middle_partition = () if first_index == second_index else deck[first_index + 1: second_index]
    right_partition = () if second_index == len(deck) - 1 else deck[second_index + 1:]
    return left_partition + second_card + middle_partition + first_card + right_partition

def get_max(a, b):
    return a if a > b else b;

def get_min(a, b):
    return a if a < b else b;

    
def shuffle_one_iteration(deck):
    first_index = get_random_index(deck)
    second_index = get_random_index(deck)
    # possible that both indices are the same
    # but probability is low and if iterated enough times, its effect is minimal
    return swap_two_cards(min(first_index, second_index), max(first_index, second_index), deck)

def repeat_x_times(payload, function, times):
    # assume times >= 1 and is integer
    if(times == 1):
        return function(payload)
    return repeat_x_times(function(payload), function, times - 1)
    
    
def shuffle(deck):
    # strategy: swap two cards, repeat sufficient number of times
    return repeat_x_times(deck, shuffle_one_iteration, 500)

deck = generate_deck()
shuffled_deck = shuffle(deck)

(remaining_deck, hand) = deal_x_from_top(shuffled_deck, 5)
print(hand)
print()
print(remaining_deck)

#(card, *new_deck) = deal_random_card(deck)
#print(card)
#print(new_deck)
