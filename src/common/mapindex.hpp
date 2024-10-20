// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef MAPINDEX_HPP
#define MAPINDEX_HPP

#include "mmo.hpp"

#define MAX_MAPINDEX 2000

//Some definitions for the major city maps.
#define MAP_PRONTERA "prontera"
#define MAP_GEFFEN "geffen"
#define MAP_MORROC "morocc"
#define MAP_ALBERTA "alberta"
#define MAP_PAYON "payon"
#define MAP_IZLUDE "izlude"
#define MAP_ALDEBARAN "aldebaran"
#define MAP_LUTIE "xmas"
#define MAP_COMODO "comodo"
#define MAP_YUNO "yuno"
#define MAP_AMATSU "amatsu"
#define MAP_GONRYUN "gonryun"
#define MAP_UMBALA "umbala"
#define MAP_NIFLHEIM "niflheim"
#define MAP_LOUYANG "louyang"
#define MAP_JAWAII "jawaii"
#define MAP_AYOTHAYA "ayothaya"
#define MAP_EINBROCH "einbroch"
#define MAP_LIGHTHALZEN "lighthalzen"
#define MAP_EINBECH "einbech"
#define MAP_HUGEL "hugel"
#define MAP_RACHEL "rachel"
#define MAP_VEINS "veins"
#define MAP_JAIL "sec_pri"
#ifdef RENEWAL
	#define MAP_NOVICE "new_1-1"
#else
	#define MAP_NOVICE "new_1-1"
#endif
#define MAP_MOSCOVIA "moscovia"
#define MAP_MIDCAMP "mid_camp"
#define MAP_MANUK "manuk"
#define MAP_SPLENDIDE "splendide"
#define MAP_BRASILIS "brasilis"
#define MAP_DICASTES "dicastes01"
#define MAP_MORA "mora"
#define MAP_DEWATA "dewata"
#define MAP_MALANGDO "malangdo"
#define MAP_MALAYA "malaya"
#define MAP_ECLAGE_IN "ecl_in01"
#define MAP_LASAGNA "lasagna"
#define MAP_FREYA_TEMPLE "ra_temple"
#define MAP_BAT_ROOM "bat_room"
#define MAP_GLASTHEIM "glast_01"
#define MAP_THANATOS "hu_fild01"
#define MAP_PARA_MARKET "paramk"
#define MAP_QUE_TEMSKY "que_temsky"
#define MAP_VERUS04 "verus04"
#define MAP_HARBORO1 "harboro1"
#define MAP_ARCHER_VILLAGE "pay_arche"
#define MAP_INSIDE_NIFLHEIM "nif_in"
#define MAP_THOR_CAMP "thor_camp"
#define MAP_MOC_PARA01 "moc_para01"
#define MAP_PRT_MONK "prt_monk"
#define MAP_CMD_FILD07 "cmd_fild07"

const char* mapindex_getmapname(const char* string, char* output);
const char* mapindex_getmapname_ext(const char* string, char* output);

unsigned short mapindex_name2idx(const char* name, const char *func);
#define mapindex_name2id(mapname) mapindex_name2idx((mapname), __FUNCTION__)

const char* mapindex_idx2name(unsigned short id, const char *func);
#define mapindex_id2name(mapindex) mapindex_idx2name((mapindex), __FUNCTION__)

int mapindex_addmap(int index, const char* name);
int mapindex_removemap(int index);

void mapindex_check_mapdefault(const char *mapname);

void mapindex_init(void);
void mapindex_final(void);

#endif /* MAPINDEX_HPP */
