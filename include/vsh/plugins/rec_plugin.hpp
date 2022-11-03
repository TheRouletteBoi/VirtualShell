#ifndef __REC_PLUGIN_HPP__
#define __REC_PLUGIN_HPP__

#include <vsh/vshcdefs.hpp>

_VSH_BEGIN

// Interface 1

class rec_plugin_interface_t
{
public:
    int(*DoUnk0)(void);
    int(*start)(void); //RecStart
    int(*stop)(void); //RecStop
    int(*close)(int isdiscard);
    int(*geti)(int giprm);  // RecGetInfo
    int(*md)(void * mdarg, int); //RecSetInfo
    int(*etis)(int start_time_msec); //RecSetInfo
    int(*etie)(int end_time_msec); //RecSetInfo
};

_VSH_END

#endif // __REC_PLUGIN_HPP__