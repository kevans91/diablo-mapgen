/**
 * @file drlg_l3.h
 *
 * Interface of the caves level generation algorithms.
 */
#ifndef __DRLG_L3_H__
#define __DRLG_L3_H__

int CreateL3Dungeon(DWORD rseed, int entry, bool breakOnSuccess, bool breakOnFailure);
void LoadL3Dungeon(const char *sFileName, int vx, int vy);
void LoadPreL3Dungeon(const char *sFileName, int vx, int vy);

#endif /* __DRLG_L3_H__ */
