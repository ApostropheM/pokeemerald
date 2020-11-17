#ifndef GUARD_CONSTANTS_DAYCARE_CONFIG_H
#define GUARD_CONSTANTS_DAYCARE_CONFIG_H

#ifndef GEN_3
    #define GEN_3 0
    #define GEN_4 1
    #define GEN_5 2
    #define GEN_6 3
    #define GEN_7 4
    #define GEN_8 5
#endif

// TODO: Implement Destiny Knot IV passing
// TODO: Implement Power Items IV passing
// TODO: Expand Incense Evolutions
// TODO: Manaphy and Phione
// TODO: Make it easy to add more item = mon + move combos like Light Ball = Volt Tackle Pichu
// TODO: Alolan and Galar Forms
// TODO: Rotom, Vivillon, Furfrou, and Sinistea Forms

// Note: There is no option to get Emerald style IV inheritance because
// it is a bug and a really stupid bug, at that.

// Inheritance Rules
#define D_TM_INHERITANCE              GEN_8
/*  TODO: Since Gen 6, the father no longer passes down TMs to the baby. */
#define D_MOTHER_EGG_MOVE_INHERITANCE GEN_8
/*  TODO: Starting in Gen 6, the mother can also pass down egg moves. */
#define D_FOREIGN_NATURE_INHERITANCE  GEN_8
/*  TODO: In Gen 4, passing natures fails if the parents are of different languages. */
#define D_NATURE_INHERITANCE_CHANCE   GEN_8
/*  TODO: In Gen 3, Everstone grants Ditto and mothers a 50% chance to pass on Nature. 
    Since Gen 4, anyone can pass on nature. Since Gen 5, the chance is 100%. */
#define D_POKEBALL_INHERITANCE        GEN_8
/*  TODO: In Gen 6, the mother will pass down their Poke Ball. Since Gen 7, either can pass down 
    Poke Balls if bred with the same species (regardless of form), and will always pass down if bred with Ditto. 
    Nidoran and Volbeat/Illumise will always pass down the female, they are not the same species. 
    Master Ball and Cherish Ball will yield a Poke Ball. */
#define D_ABILITY_INHERITANCE         GEN8
/*  TODO: In B2W2, a female Pokemon has an 80% chance of passing down their ability if bred with a male.
    Since Gen 6, the chance is 80% for normal ability and 60% for Hidden Ability, and anyone can pass
    down their abilities if bred with Ditto.
    NOTE: BW's effect: 60% chance to pass down HA and random for normal ability has been omitted.*/

// Miscellanous
#define D_EGG_HATCH_LEVEL      GEN_8
/*  In Gen 3, Eggs hatch at level 5. Since Gen 4, they hatch at level 1. */
#define D_EGG_MOVE_REMINDER    GEN_8
/*  TODO: Since Gen 6, a Pokemon can remember the moves it hatched with at the Move Reminder. */
#define D_MASUDA_METHOD_CHANCE GEN_8
/*  TODO: Starting in Gen 4, there's a 5/8192 chance of a Shiny when breeding different languages. 
    In Gen 6, this is 6/8192. In Gen 7, when combined with Shiny Charm, it is 16/8192. */
#define D_EGG_MOVE_TRANSFER    GEN_8
/*  TODO: Starting in Gen 8, if two Pokemon of the same species are together in the Daycare, 
    one knows an Egg Move, and the other has an empty slot, 
    the other Pokemon will receive the Egg Move in the empty slot. */

#endif // GUARD_CONSTANTS_DAYCARE_CONFIG_H