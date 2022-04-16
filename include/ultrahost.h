/**************************************************************************
 *                                                                        *
 *               Copyright (C) 1995, Silicon Graphics, Inc.               *
 *                                                                        *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright  law.  They  may not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *                                                                        *
 *************************************************************************/


#ifndef _ULTRAHOST_H_
#define _ULTRAHOST_H_
#ifdef __cplusplus
extern "C" {
#endif
int	uhOpenGame(const char *);
int	uhCloseGame(int);

int	uhReadGame(int, void *, int);
int	uhWriteGame(int, void *, int);
int	uhWriteRamrom(int, void *, void*, int);
int	uhReadRamrom(int, void *, void*, int);

#ifdef __cplusplus
}
#endif
#endif /* ULTRAHOST */
