﻿/*
 * File: streams.h
 * Purpose: header file for streams.c. This is only used in generate.c.
 */

/*
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 *
 * This software may be copied and distributed for educational, research,
 * and not for profit purposes provided that this copyright and statement
 * are included in all such copies.  Other copyrights may also apply.
 */


/* Externs */

extern void add_river(IDX feat1, IDX feat2);
extern void build_streamer(IDX feat, int chance);
extern void place_trees(POSITION x, POSITION y);
extern void destroy_level(void);
