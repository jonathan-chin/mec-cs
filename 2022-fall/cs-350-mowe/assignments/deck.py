import random
from functools import reduce

initial_deck = (3, 5, 1, 7, 9, 3)

def generate_suits_of_card(card):
    suits = ['diamonds', 'clubs', 'hearts', 'spades']
    cards = map(lambda suit: card + ' of ' + suit, suits)
    return tuple(cards)

def generate_deck():
    ranks = ['A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K']
    return reduce(lambda a, b: a + b, map(generate_suits_of_card, ranks))

def deal_one_card_from_top(deck):
    (top_card, *rest_of_deck) = deck
    return (top_card, rest_of_deck)

def deal_random_card(deck):
    random_index = random.randint(0, len(deck) - 1)
    return_card = deck[random_index]
    new_deck = deck[:random_index] + deck[random_index+1:]
    return (return_card, new_deck)

deck = generate_deck()
(card, *new_deck) = deal_random_card(deck)
print(card)
print(new_deck)

