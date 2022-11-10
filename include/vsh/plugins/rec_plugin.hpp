#pragma once

// Interface 1
class RecPluginInterface
{
public:
    int(*DoUnk0)(void);
    int(*Start)(void); //RecStart
    int(*Stop)(void); //RecStop
    int(*Close)(int isdiscard);
    int(*GetInfo)(int giprm);  // RecGetInfo
    int(*md)(void * mdarg, int); //RecSetInfo
    int(*etis)(int start_time_msec); //RecSetInfo
    int(*etie)(int end_time_msec); //RecSetInfo
};
