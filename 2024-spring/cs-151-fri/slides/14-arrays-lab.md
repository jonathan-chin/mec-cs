# Arrays Review

- a ordered collection of items of the same data type
- avoid multiple variable clutter
  - to allow for a number of variables that's not hard coded
  - eg: std::string player_name_1; std::string player_name_2; etc.
- arrays have to a fixed size on declaration
  - arrays cannot change size once declared
- arrays take a continuous block of memory
- to declare an array: `std::string weekend[2] = {"Sat", "Sun"};`
  - or: `data_type variable_name[array_size];`
  - eg: `int scores[100];`
- accessing arrays: `variable_name[index];`
  - remember! arrays start indexing from 0
  - eg: `scores[0];`
  - eg: `scores[99];`
- common error: array out of bounds error
  - be careful not to access / mutate an index that is too large or too small
- mutating arrays (changing values inside array): `scores[5] = 101;`