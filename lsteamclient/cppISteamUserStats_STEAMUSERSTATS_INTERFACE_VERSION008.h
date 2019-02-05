#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(void *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(void *, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(void *, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(void *, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(void *, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(void *, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(void *, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(void *, const char *, bool *, uint32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(void *, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(void *, const char *, uint32, uint32);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(void *, CSteamID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(void *, CSteamID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(void *, CSteamID, const char *, bool *, uint32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(void *, bool);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(void *, const char *, ELeaderboardSortMethod, ELeaderboardDisplayType);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(void *, SteamLeaderboard_t);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(void *, SteamLeaderboard_t);
extern ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(void *, SteamLeaderboard_t);
extern ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(void *, SteamLeaderboard_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(void *, SteamLeaderboard_t, ELeaderboardDataRequest, int, int);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(void *, SteamLeaderboardEntries_t, int, LeaderboardEntry_t *, int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(void *, SteamLeaderboard_t, ELeaderboardUploadScoreMethod, int32, const int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(void *, SteamLeaderboard_t, UGCHandle_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(void *);
#ifdef __cplusplus
}
#endif
