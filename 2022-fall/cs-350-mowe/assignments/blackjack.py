# Blackjack
#
# Gameplay
# dealer and 1+ players
# everyone gets 2 cards
# aces can count as 1 or 11
# jack, queen, and king are worth 10
# numbered cards worth their number
# suits don't matter
# eg: Jack and 7 = 17
# eg: Ace and 5 = 6 or 16
#
# each player can hit or stay
# hit - player gets another card
# a player can hit as many times as they want
#
# stay - player does not get another card and is stuck with their total
#
# if a player has a hand value over 21, they lose and are out of the game

# dealer's AI
# (note: we'll use the same AI for all players)
# if dealer has a hand value that's less than 17, they hit
# if the dealer has a hand value 17 or greater, they stay
# same rule about over 21 applies to dealer

# after all players and dealer have gotten as many cards as they want, any player who has a hand value higher than the dealer's wins
# each player determines whether they win or lose against the dealer independent of each other
# ie player 1 can win but player 2 in the following situation:
# player 1: 19
# player 2: 17
# dealer:   18

# if a player has the same hand value as the dealer, the player loses

# example round
# player: Q of hearts and A of spades, hand value = 21
# dealer: 8 of spades and 5 of clubs, hand value = 13

# player: stays
# dealer: hits - gets 9 of spades
# new hand value = 22
# dealer automatically loses


import random
from functools import reduce

# generic deck of cards functions

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


# other functions needed for blackjack
def get_card_value(card):
  # Kris
  # example of card[0] = "Q", "7"
  if (card[0] == "A"):
    return 11
  elif ((card[0] == "J") or (card[0] == "Q") or (card[0] == "K")): 
    return 10
  else:
    return int(card[0])


def get_hand_value(hand,index = 0,total = 0):
    # christian
    if index == len(hand):
        return total
    total = total + get_card_value(hand[index])
    return get_hand_value(hand,index + 1,total)


#first hand is dealer hand , seconf hand is dealer hand
def check_player_wins_against_dealer(player_hand, dealer_hand):
    # jaleel
    dealer_hand_value = get_hand_value(dealer_hand)
    player_hand_value = get_hand_value(player_hand)
    return player_hand_value > dealer_hand_value

def card_to_string(card):
  return card[0] + ' of ' + card[1]

def hand_to_string(hand, payload = ''):
  if(len(hand) == 1):
    return payload + card_to_string(hand[0])
  return hand_to_string(hand[1:], card_to_string(hand[0]) + ", ")

# todo: need to implement a way to hit and stay
  
# debugging code

deck = generate_deck()
shuffled_deck = shuffle(deck)

# get player initial hand
(remaining_deck_1, player) = deal_x_from_top(shuffled_deck, 2)

# get dealer initial hand
(remaining_deck_2, dealer) = deal_x_from_top(remaining_deck_1, 2)
print("player's hand is " + hand_to_string(player))
print("dealer's hand is " + hand_to_string(dealer))
print("player's value is " + str(get_hand_value(player)))
print("dealer's value is " + str(get_hand_value(dealer)))

if(check_player_wins_against_dealer(player, dealer)):
  print('player wins')
else:
  print('dealer wins')
