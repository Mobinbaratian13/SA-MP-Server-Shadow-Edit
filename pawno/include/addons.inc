stock GetName(playerid) {
    new tmpname[MAX_PLAYER_NAME+1];GetPlayerName(playerid,tmpname,sizeof tmpname);return tmpname;
}
