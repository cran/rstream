/*****************************************************************************
 *                                                                           *
 *   File:         R_RNG.h                                                   *
 *   Title:        Interface between external RNGs and R runif() function    *
 *   Authors: :    Josef Leydold and Guenter Tirler, WU Wien, Austria        *
 *   Copyright:    GPL version 2                                             *
 *   Date:         2004-05-22                                                *
 *                                                                           *
 *****************************************************************************/

/* $Id: R_RNG.h 5326 2011-02-10 13:34:33Z leydold $ */

/*---------------------------------------------------------------------------*/

/* sampling function and structure to store generator */
typedef double RSTREAM_SAMPLE_FUNC( void *gen );

struct rstream_gen {
  RSTREAM_SAMPLE_FUNC *sample;
  void *state;
};

/*---------------------------------------------------------------------------*/

/* Set Stream as global current RNG */
void rstream_setRNG( RSTREAM_SAMPLE_FUNC *sample, void *state);

/*---------------------------------------------------------------------------*/
